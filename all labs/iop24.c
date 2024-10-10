#include<stdio.h>

void main()
{
  float x,a,b,c,d,f,h=1;
  int n;
  printf("enter x & n respectivly: ");
  scanf("%f%d", &x, &n);

  switch(n)
  {
    case 1:
    a = 1 + x;
    printf("result: %f", a);
    break;

    case 2:
    a = 1 + (x/n);
    printf("result: %f", a);
    break;

    case 3:
    a=1+(x*x*x);
    printf("result: %f", a);
    break;

    default:
    a=1+(n*x);
    printf("result: %f", a);
  }
}
