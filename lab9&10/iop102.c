#include<stdio.h>
void main()
{
    int charCount =0,wordsCount=0,lineCount =0;

    FILE *fptr;
    fptr =fopen("textFile.txt","r");
    char ch;
    fscanf(fptr,"%c",&ch);
    while(!feof(fptr))
    {
        charCount++;
        if(ch == ' ')
        {
            wordsCount++;
        }
        if(ch == '\n')
        {
            lineCount++;
        }

        fscanf(fptr,"%c",&ch);
    }

    printf("%d is the character count, %d is the word count and %d is the line count.",charCount,wordsCount,lineCount);
}
