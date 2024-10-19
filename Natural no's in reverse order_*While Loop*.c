/*
    Program to printing series of n natural numbers (reverse order)
*/

#include<stdio.h>

int main()
{
    printf("Program to printing series of n natural numbers in reverse order : \n\n");
    
    int n = 30;
    
    while(n >= 0)
    {
        printf("%d\n", n);
        n--;
    }
    
    return 0;
}
