#include<stdio.h>
#include<string.h>
int lenstr(char s[]);
void main()
{
  char s[1000];
  printf("Enter string:");
  gets(s);
  printf("Length of string is:%d",lenstr(s));
}
int lenstr(char s[])
{
  int i=0;
  while(s[i]!='\0')
  {
    i++;
  }
  return i;
}
