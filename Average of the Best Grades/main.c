//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,nrSrd,grade,maxGrade, sum=0;
    float ave;

    FILE *infile;

    infile=fopen("input.txt","r");
    if(infile==NULL)
        exit(1);

    fscanf(infile,"%d",&nrSrd);

    for(i=0; i<nrSrd; i++)
    {
        maxGrade=-1;
        do
        {
            fscanf(infile,"%d",&grade);
            if(grade>maxGrade)
                maxGrade=grade;

        }while(grade != -1);

        sum+=maxGrade;
    }

    ave=(float)sum/nrSrd;
    printf("%.2f",ave);

    fclose(infile);
    return 0;
}
