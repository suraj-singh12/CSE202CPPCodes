#include <iostream>
using namespace std;

class Shape{
    public:
    virtual void draw1(){
        cout << "I am BASE (Shape) class's virtual draw1()\n";
    }
    virtual void draw2(){
        cout << "I am BASE (Shape) class's virtual draw2()\n";
    }
};

class Circle : public Shape{
    public:
    void draw1(){
        cout << "I am DERIVED (Circle) class's draw1()\n";
    }
    void draw2(){
        cout << "I am DERIVED (Circle) class's draw1()\n";
    }
};

int main()
{
    Shape *p;
    Shape q;    Circle c;
    p = &q;     //normal; pointer of base class pointing to an object of base class
    p->draw2(); // will call its own draw2() function

    p = &c;     // upcasted pointer; pointer p of base class pointing to the object of derived class
    p->draw2(); /* will call derived class's draw2() function 
                 * because the base class's draw2() fn is a virtual function so it will be lately binded.

                 * (Basically first compiler will search for draw2() in derived and as it finds it so calls it)
                 * if there was no draw2() in derived class then the base class's draw2() will be called
                 * this is the effect produced by declaring base class's fn as virtual
                 * and we call this effect as late binding of the base class's draw2() fn
                
                  => "THIS IS THE BASIC UNDERSTANDING, BUT NOW LET'S UNDERSTAND IT IN TERMS OF VTABLE AND VPTR"
                  * */

    /*
    --------------------------------------------------------------------------------------------------------------------------------------------------------------
    --------------------------------------------------------------------------------------------------------------------------------------------------------------
     * VTABLE for Shape class will be created (as it is contains a virtual function)
             VTABLE of Shape
        60  | &Shape::draw1 |
            | &Shape::draw2 |
    
    (60 is the address of VTABLE of class Shape) and this VTABLE contains addresses of its class's draw1() and draw2() functions
 
    [ there is only one VTABLE per class( VTABLE is only for the class having a virtual fn in it) and all object's VPTR point to that same VTABLE]
    so in our case, all object's of class Shape will have one VPTR in them each and all those VPTRs will point to the VTABLE of Shape (at address 60)
    --------------------------------------------------------------------------------------------------------------------------------------------------------------
    --------------------------------------------------------------------------------------------------------------------------------------------------------------
    * VTABLE of Circle class:
      But wait, how can a VTABLE for Circle class get created, there's no virtual fn visible in this.
      Explanation: Once you declare a function virtual in the BASE class, down the line in its complete hierarchy it will always remain virtual, whether we mention it explicitly or not doesn't matter. 
      So the functions draw1() and draw2() of Circle class are still treated as virtual like this
    -----------------------------------------------------
    class Circle : public Shape{
        public:
        virtual void draw1(){
            cout << "I am DERIVED (Circle) class's draw1()\n";
        }
        virtul void draw2(){
            cout << "I am DERIVED (Circle) class's draw1()\n";
        }
    };
    -----------------------------------------------------
    # In easier words, it is like
    "Once Virtual means Always Virtual"
    i.e. Virtual in BASE Class =>(implies) virtual in all derived classes, whether you explicitly say it or not.

    So coming back:
    VTABLE of Circle class:
             VTABLE of Circle
        40  | &Circle::draw1 |
            | &Circle::draw2 |
    
    (40 is the address of VTABLE of class Circle) and this VTABLE contains addresses of its class's draw1() and draw2() functions (i.e. addresses of Circle class's draw1() and draw2())

    NOTE: Look closely, VTABLE is an array of addresses.
          More precisely, VTABLE is an array of Function Pointers.
    
    Also note: Both the VTABLES will be created in the same order i.e. first entry is of draw1 then 2nd entry is of draw2
               This order is decided by the order of declaration of virtual functions in the base class, and remains as it is
               VTABLES of derived classes follow this same order, irrespective of in what order those functions are declared inside them
               i.e. order of BASE class's VTABLE is followed by VTABLES of all the derived classes.
    --------------------------------------------------------------------------------------------------------------------------------------------------------------
    --------------------------------------------------------------------------------------------------------------------------------------------------------------
    main()

    Shape *p;                   // line 1
    Shape q;    Circle c;       // line 2
    p = &q;                     // line 3
    p->draw2();                     // line 4

    p = &c;                     // line 5
    p->draw2();                     // line 6
    return 0;                   // line 7

    ==>>Now let's decode, how the above code works :
    During compilation stage, what happens is, compiler decides that I must go to slot number 2, when it sees line 4 and line 6
    why slot number 2 ? because draw2() is declared after draw1() (i.e. at 2nd pos) in base class, and so its address will be present in 2nd slot in VTABLE
    so compiler only sees at what position the function being called is defined, since it is defined after 1 virtual function so it will be in slot 2, that's it.
    
    But what compiler is not able to decide as of now is, slot no 2 of which VTABLE ?
    Since it is not able to decide which VTABLE, So compiler postpones this till execution.
    and since it takes the decision during execution, so it becomes "RUN TIME POLYMORPHISM"

    Now at runtime: 
    (decoding line 4)
    Let 100 be the address of q, so p contains address 100 in it as it points to q.
    (p is a pointer of class Shape and q is an object of class Shape)
    representation: 

     p       q
    100      60
            100
    
    60 present in q is the VPTR, which is pointing to its VTABLE(of it's own class offcourse; Shape class)
    So, now at runtime, it sees what's in p
    that is 100, so it reaches the object q
    now it looks into VPTR of object q
    it finds 60, which is the address of the VTABLE of BASE class (Shape class)
    so it reaches to the VTABLE of Shape class
    and now it knows it needs go to slot no 2, ( which is pointer to draw2() fn of Shape class)
    in slot 2 is the address of draw2() function of Shape class
    so draw2() fn of base (Shape) class is reached and executed.
    Now control returns back to main() and proceeds with line no 5


    Similarily, when it reaches line 6
    let 200 be the address of c, so p contains address 200 in it as it points to c now.
    (p is a pointer of class Shape and c is an object of class Circle)
    representation: 

     p       c
    200      40
            200
    
    40 present in c is the VPTR, which is pointing to its VTABLE(of it's own class offcourse; Circle class)
    So, now at runtime, it sees what's in p
    that is 200, so it reaches the object c
    now it looks into VPTR of object c
    it finds 40, which is the address of the VTABLE of Circle class
    so it reaches to the VTABLE of Circle class
    and now it knows it needs go to slot no 2, ( which is pointer to draw2() fn of Circle class)
    in slot 2 is the address of draw2() function of Circle class
    so draw2() fn of derived (Circle) class is reached and executed.
    Now control returns back to main() and proceeds with line no 7

    */
    return 0;
}

/*
 * Conditions for Late Bindig (runtime polymorphism):
 *
 * Early binding 
 * -> When function is called using object
 * -> no late binding when called using object, even if the function is virtual
 * 
 * Late Binding
 * -> There must be inheritance
 * -> Function names and signatures in BASE and DERIVED must be same
 * -> In BASE class function must be virtual
 * -> Call must be made using pointer of the base class pointing to an object of derived(upcasted pointer)
 * -> then derived's version of that function will be invoked
 * -> This is run time polymorphism
 * */
