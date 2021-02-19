/* Program to calculate sum of even fibonacci series numbers upto a limit (entered by user)
 * fibonacci series for limit 13:
 *                      1 1 2 3 5 8
 * even sum = 2 + 8 = 10
 * */

#include <stdio.h>
int main() {
    int first=1, next=1, sum, limit;    
    int evensum = 0;
    
    printf("Enter Limit: ");  
    scanf("%d",&limit);
    
    while(true) {
        //logic for generating fibonacci series
        sum = first + next;
        first = next;
        next = sum;
        
        if(sum >= limit)
            break;
        
        if(sum%2==0)
            evensum += sum;
    }
    printf("Even sum = %d \n",evensum);
    return 0;
}
