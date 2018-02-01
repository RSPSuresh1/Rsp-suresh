#include<stdio.h>
void main()
{
int x,y=0;
  printf("enter thenumber");
  scanf("%d",&x);
  while(x !=0)
  {
    x/=10;
    ++y;
  }
  printf("%d",y);
}
