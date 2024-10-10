#include<stdio.h>
void even(int n);
void main()
{
    int n;
    printf("enter n: ");
    scanf("%d", &n);
    even(n);
}
void even(int n)
{
    if(n%2==0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
}
