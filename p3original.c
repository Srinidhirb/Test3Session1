#include<stdio.h>
int input (int *n,int*r)
{
  printf("enter the value of n and r:\n");
  scanf("%d%d",n,r);
  }
int ncr(int n, int r)
{
int ncr;
  *ncr=fact(n)/(fact(r)*fact(n-r));
   return ncr;
  }
void output(int n, int r, int result)
{
  printf("the %dc%d value is %d",n,r,ncr);
}

