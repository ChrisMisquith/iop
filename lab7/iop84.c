#include<stdio.h>
#include<string.h>

void book();
int main()
{
  int flag=1;
  while(flag!=0)
  {
    book();
    printf("\nTo exit, press 0. Else enter any other number:");
    scanf("%d",&flag);
  }
  return 0;
}
void book()
{
  char title[50]={'\0'},author[20]={'\0'},summ[1000]={'\0'};
  int pages;
  printf("Enter Title of book:");
  gets(title);
  printf("Enter author of book:");
  gets(author);
  printf("Enter summary of book:");
  gets(summ);
  printf("Enter number of pages of book:");
  scanf("%d",&pages);
  printf("\nTitle of book:%s\nAuthor of book:%s\nSummary of book:%s\nNo. of pages of book:%d",title,author,summ,pages);
}
