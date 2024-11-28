#include<stdio.h>

void main()
//PROGRAM TO READ TOTAL SECOND AND CONVERT IT INTO TIME.
{
    int a, h, m, s;
    printf("Enter time in seconds: ");
    scanf("%d", &a);

   h = a/(60*60);
   m = (a - (h*60*60))/60;
   s = a - ((h*60*60)+m*60);

   printf("time= %d : %d : %d", h, m, s);
}
