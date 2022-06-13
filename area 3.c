/*Function without argument and with return value*/
#include<stdio.h>  
int area();  
int  main()  
{  
    int x= area();  
    printf("\nThe area is: %d",x);  
}  
int area()  
{   
    int l,b;
    printf("\nEnter length and breadth:");  
    scanf("%d %d",&l,&b); 
    return l*b;  
}  
