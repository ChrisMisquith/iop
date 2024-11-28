#include<stdio.h>

struct employee_data
{
    int number;
    char name[100];
    float pay;
};

int main()
{

    struct employee_data *ptr;
    struct employee_data arr[50];

    int n;
    printf("Enter the number of employess:\n");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("\nEnter employee name,number,basic pay\n");
        getchar();
        gets(arr[i].name);
        scanf("%d%f",&arr[i].number,&arr[i].pay);
    }

    for(int i=0;i<n;i++)
    {
        printf("\nemployee name,number,basic pay\n");
        puts(arr[i].name);
        printf("%d\n%f",arr[i].number,arr[i].pay);
    }

}
