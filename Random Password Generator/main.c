//efejzo20
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
char getUpper();
char getLower();
char getDigit();

int main()
{
    FILE *infile;
    int n,i;
    srand(time(0));

    //printf("char %c\n",'A');
    //printf("char %d\n",'A');


    infile=fopen("input.txt","r");
    if(infile==NULL)
        exit(1);


    fscanf(infile,"%d",&n);

    for(i=0;i<n;i++)
    {
        printf("%c",getUpper());
        printf("%c",getUpper());
        printf("%c",getUpper());

        printf("%c",getLower());
        printf("%c",getLower());
        printf("%c",getLower());


        printf("%c",getDigit());
        printf("%c\n",getDigit());
    }

    fclose(infile);
    return 0;
}
char getUpper()
{
    //return rand()
    return rand()%('Z'-'A'+1)+'A';
}
char getLower()
{
    return rand()%('z'-'a'+1)+'a';
}

char getDigit()
{
    return rand()%('9'-'0'+1)+'0';
}


