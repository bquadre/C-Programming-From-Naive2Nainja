#include <stdio.h>  
   
int main() {  
    int counter; 
    printf("Sum of Even numbers between 2 to 2002\n");  
    /* 
     * Initialize counter with 1, and increment it in every iteration.
     * For every value of counter check whether it is even number or
     * not and print it accordingly 
     */ 
     
     int sum = 0;
    for(counter = 2; counter <= 2002; counter++) {  
        /* Even numbers are divisible by 2 */ 
        if(counter%2 == 0) { 
            /* counter is even, print it */
            sum+=counter;
          
        }  
    }  
     printf("%d ", sum);  
    return 0;  
} 

