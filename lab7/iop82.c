#include<stdio.h>
int nCr(int N, int R);
int fact(int a);
void main()
{
  int n,r,c;
  printf("Enter N and R:");
  scanf("%d%d",&n,&r);
  c=nCr(n,r);
  printf("\nnCr=%d",c);
}
int nCr(int N, int R)
{
  int C;
  C=fact(N)/(fact(R)*fact(N-R));
  return C;
}
int fact(int a)
{
  int b=1;
  while (a>1)
  {
   b=a*b;
   a--;
  }
}
