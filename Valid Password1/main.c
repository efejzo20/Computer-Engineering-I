//efejzo20
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int isSpercial(char c);

int main()
{
    FILE *infile;
    int length=0,upperCnt=0,lowerCnt=0,specCnt=0, digitCnt=0;
    char c;


    infile=fopen("input.txt","r");
    if(infile==NULL)
        exit(1);

    /* if(isSpercial('!'))
         printf("Yes");
     else                  ...test...
         printf("No");
     */

    // fscanf(infile,"%s",&);

    while((c=fgetc(infile))!= EOF &&c!='\n')
    {
        length++;
        if(isupper(c))
            upperCnt=1;
        else if(islower(c))
            lowerCnt=1;
        else if(isdigit(c))
            digitCnt=1;
        else if(isSpercial(c))
            specCnt=1;
        else
        {
            printf("NO");
            return 0;
        }
    }
    if(length<4 || length>12)
    {
        printf("NO");
        return 0;
    }

    if(upperCnt && lowerCnt && digitCnt &&specCnt)
        printf("OK");
    else
        printf("NO");

    fclose(infile);
    return 0;
}

int isSpercial(char c)
{
    if(c >='!' && c<='.')
        return 1;
    return 0;
}
