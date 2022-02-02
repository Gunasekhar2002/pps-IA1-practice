#include<stdio.h>
#include<string.h>

void input_two_strings(char *a,char *b)
{
  printf("enter the strings for a and b:");
  scanf("%s %s",a,b);

}
int strcmp(char *a,char *b)
{
  int j;
  for (int j=0;a[j]!='\0' && b[j]!='\0';j++)
    {
        if (a[j]>b[j])
        {
            return 1;
        }
        if (a[j]<b[j])
        {
            return -1;
        }
        else if(a[j]==b[j])
        {
            continue;
        }
    }
}

void output(char *a,char *b,int result)
{
    if (result==1)
    {
        printf("%s is greater than %s",a,b);

    }
    else if(result==-1)
    {
        printf("%s is greater than %s",b,a);

    }
    else if(result==0)
    {
        printf("%s is equal to %s",a,b);

    }
}

int main()
{
    char a[600],b[300];
    input_two_strings(a,b);
    int result=strcmp(a,b);
    output(a,b,result);

}
