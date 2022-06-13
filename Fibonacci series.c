/*C program to generate fibonacci series using recursive function*/
#include<stdio.h>
int fib(int);
int main()
{
    int i,n;
    printf("Enter a number");
    scanf("%d",&n);
    for ( i =1; i<=n; i++)
    {
        printf("%d ",fib(i));
    }
}
int fib(int n)
{
   if (n==1||n==2)
   {
    return (1);
   }   
    return (fib(n-1)+ fib(n-2));
}   





/*C progarm to print factorial of a number using recursive function*/
#include<stdio.h>
int fact(int);
int main()
{
    int n,c;
    printf("Enter a number");
    scanf("%d",&n);
    printf("The factorial is: %d",fact(n));
}
int fact(int n)
{
   if (n==1||n==0)
   {
       return (1);
   }
   else
   {
    return (n*fact(n-1));
   } 
}  


/*Function with argument and return value*/
#include<stdio.h>  
int area(int, int);  
int  main()  
{  
    int l,b;    
    printf("\nEnter length and breadth:");  
    scanf("%d %d",&l,&b);  
    int x= area(l,b);  
    printf("\nThe area is: %d",x);  
}  
int area(int l, int b)  
{  
    return l*b;  
}  


