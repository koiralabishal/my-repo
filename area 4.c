/*Function with argument and without return value*/
#include<stdio.h>  
void area(int ,int );  
void  main()  
{   
    int l,b;
    area( l, b);   
}  
void area(int l,int b)  
{  
  
    printf("\nEnter length and breadth:");  
    scanf("%d %d",&l,&b);
    printf("The area is : %d",l*b);  
}  
