/*C program to find cube of a number using function*/
#include<stdio.h>
int cube(int);
int main()
{
    int a,c;
    printf("Enter a number");
    scanf("%d",&a);
    c=cube(a);
    printf("The cube is %d",c);
}
int cube(int a)
{
   return a*a*a;
} 
