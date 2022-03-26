//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int num,big,sum=0,digit;
    int i=0,n,j;

    FILE *infile;
    infile=fopen("input.txt","r");

    if(infile==NULL)
        exit(1);
    fscanf(infile,"%d",&n);

    for(j=1; j<=n; j++)
    {
        fscanf(infile,"%ld",&num);
        if(num<0)
            num=num*(-1);
        big=0;
        while(num!=0)
        {
            digit=num%10;
            if(digit>big)
                big=digit;
            num/=10;
            i++;
        }
        sum+=big;
    }

    printf("%ld",sum);

    fclose(infile);
    return 0;
}
