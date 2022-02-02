#include<stdio.h>

int input()
{
  int a;
  printf("enter a number:");
  scanf("%d",&a);
  return a;

}
int cmp(int a,int b,int c)
{
  if (a>b && a>c)
     return a;
  else if (b>a && b>c)
      return b;
  else if (c>a && c>b)
      return c;
}
void output(int a,int b,int c,int largest)
{
  printf("the largest among (a,b,c) is %d",largest);

}
int main()
{
  int a,y,z,large;
  a=input();
  y=input();
  z=input();
  large=cmp(a,y,z);
  output(a,y,z,large);
  

}