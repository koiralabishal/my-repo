/*Function without argument and return value*/
#include<stdio.h>  
void area();  
void  main()  
{  
    area();   
}  
void area()  
{  
    int l,b;    
    printf("\nEnter length and breadth:");  
    scanf("%d %d",&l,&b);
    printf("The area is : %d",l*b);  
}  
