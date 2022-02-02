#include<stdio.h>
int input_array_size ()
{
  int n;
  printf ("Enter the size of array:");
  scanf ("%d",&n);
  return n;
}

void input_array (int n, int a[n])
{
  int i;
  printf ("Enter  %d  array elements\n", n);
  for (i = 0; i < n; i++)
    scanf ("%d", &a[i]);
}

int sum_n_arrays (int n, int a[n])
{
  int i, sum = 0;
  for (i = 0; i < n; i++)
    sum = sum + a[i];
  return sum;
}

void out_put (int n, int a[n], int sum)
{
  int i;
  for (i = 0; i < n-1; i++)
    printf ("%d+",a[i]);
  printf ("%d=%d",a[n-1],sum);
}

int main ()
{
  int nsize, sum;
  nsize = input_array_size();
  int a[nsize];
  input_array (nsize, a);
  sum = sum_n_arrays (nsize, a);
  out_put (nsize, a, sum);

}