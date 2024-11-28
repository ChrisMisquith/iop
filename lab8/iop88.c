#include <stdio.h>

void main()
{
    //WRITE A PROGRAM TO COPY ELEMENT OF ONE ARRAY TO ANOTHER ARRAY USING POINTERS.
    int s = 5;
    int src[] = {10, 20, 30, 40, 50};
    int des[s];

    int *psrc=src, *pdes=des;

    for(int i = 0; i<5; i++)
    {
        *(pdes+i)=*(psrc+i);
    }

    printf("source\n");
    for(int i = 0; i<5; i++)
    {
        printf("%d\n", *(psrc+i));
    }
    printf("destination\n");
    for(int i = 0; i<5; i++)
    {
        printf("%d\n", *(pdes+i));
    }
}
