/*C program to check even or odd using function*/
#include<stdio.h>
int even_odd(int);
int main()
{
    int a,c;
    printf("Enter a number");
    scanf("%d",&a);
    c=even_odd(a);
    if (c==0)
    {
        printf("%d is even number.",a);
    }
    else
    {
        printf("%d is odd number.",a);
    }
}
int even_odd(int a)
{
   int c=a%2;
   return c;
} 
