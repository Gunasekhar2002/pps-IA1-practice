#include<stdio.h>
#include<math.h>

int input_n()
{
  int n;
  printf("enter the value of n:");
  scanf("%d",&n);
  return n;

}

int sum_n(int n)
{
  int i;
  int sum=0;
  for (i=0;i<=n;i++)
  {
      sum+=i;

  }
      return sum;
}

void output(int n,int sum)
{
  printf("sum=%d",sum);

}

int main()
{
  int n,s;
  n=input_n();
  s=sum_n(n);
  output(n,s);
  
}