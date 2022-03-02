//Exercise 2 Write a program to calculate the amount to be paid for a rented vehicle
#include <stdio.h>
int main() 
{
  int a,b,c;
  printf("input distance: ");
  scanf("%d",&a);
  if(a<=30)
  {
    b=a*50;
    printf("price is :%d\n",b);
  }
    
    
  if(a>30)
  {
    c=((a-30)*40)+(30*50);
    printf("price is :%d\n",c);
  }  
    return 0; 
}
