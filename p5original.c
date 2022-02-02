
#include<math.h>
#include<stdio.h>

float input()
{
  float n;
  printf("enter the value of n:");
  scanf("%f",&n);
  return n;

}

float my_sqrt(float n)
{
  float  sqroot;
  sqroot=pow(2,0.5 * log2(n));
  return sqroot;

}
void output(float n,float sqrt_result)
{
  printf("the square root of %f is %f",n,sqrt_result);

}

int main()
{
  float nsqv,resultsqv;
  nsqv=input();
  resultsqv=my_sqrt(nsqv);
  output(nsqv,resultsqv);
  
}