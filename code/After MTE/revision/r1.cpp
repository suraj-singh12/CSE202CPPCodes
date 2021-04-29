#include <stdio.h>

int main()
{
    // once comment structure block and once comment union block, and see the differnce in output

    //structure block
    // struct a
    // {
    //     int i;
    //     char ch[4];
    // };
    // struct a z;

    //union block
    union a
    {
        int i;
        char ch[4];
    };
    union a z;

    z.i = 512;
    printf("%ld\n",sizeof(z));
    printf("%d %d %d %d %d",z.i,z.ch[0],z.ch[1],z.ch[2],z.ch[3]);
    printf("\n");
    return 0;
}