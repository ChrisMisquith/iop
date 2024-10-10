#include<stdio.h>
void pal(int n);
void main()
{
    int n;
    printf("enter n: ");
    scanf("%d", &n);
    pal(n);
}
void pal(int n)
{
    int c,i,b=0,a=0;
    c=n;
    while (n > 0)
    {
        i = n % 10;  // Extract the last digit
        b = (a * 10) + i;  // Build the reversed number
        a = b;  // Store the current reversed result
        n = n / 10;  // Move to the next digit
    }
    if(a==c)
    {
        printf("palindrome\n");
    }
    else
    {
        printf("not palindrome\n");
    }

}
