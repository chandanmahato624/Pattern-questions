#include<stdio.h>
 
int main(){
    
    for(int i=100;i<=200;i++)
    {   
        // if number module i is equal to one, then number is odd
        if(i%2==1)
        {
            printf("%d\n", i);    
        }
    }
    return 0;
}