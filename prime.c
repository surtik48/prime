#include<stdio.h>
int prime(int,int );
int main()
{
    int n,t;
    printf("enter the number");
    scanf("%d",&n);
    t=prime(n,2);
    if(t==1)
        printf("%d is prime number",n);
    else
        printf("%d is not a prime number",n);
}
int prime(int a,int i)
{
  if(i<a)
  {
      if(a%i==0)
      {
          return 0;
      }
      else
      {
          prime(a,i+1);
      }
  }
  else
    return 1;
}
