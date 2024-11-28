#include<stdio.h>
#include<string.h>
void swap (char *a, char *b)
{
    char t = *a;
    *a = *b;
    *b =t;
}
void permute(char *word,int left,int right)
{
    //base case
    if(left == right)
    {
        printf("%s ",word); // printing the word after complete permutation
    }
    else
    {
     for(int i = left; i <= right; i++)
     {
        swap(word+left,word+i); //swapping letters keeping first letter fix
        permute(word, left+1,right); // recursive call for permutation
        swap(word+i,word+left); //backtracking
     }
    }
}

int main()
{
    char word[]= "ABCD";
    int left =0,n =strlen(word);
    permute(word,0,n-1);

return 0;
}
