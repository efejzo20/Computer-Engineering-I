//efejzo20
#include <stdio.h>
#include <stdlib.h>
int getpoints(char okAnswer[],char answer[],int m);

int main()
{
    int n,m,i,j,cnt=0;

    float points=0,ave;

    FILE *infile;
    infile=fopen("input.txt","r");
    if(infile==NULL)
        exit(1);
    fscanf(infile,"%d%d",&n,&m);
    char answers[10],okAnswers[10];

    for(i=0; i<m; i++)
        fscanf(infile," %c ",&okAnswers[i]);

    for(j=0; j<n; j++)
    {
        cnt=0;
        for(i=0; i<m; i++)
            fscanf(infile," %c ",&answers[i]);

        points+=getpoints(okAnswers,answers,m);
    }
    ave=points/n;
    printf("%.1f",ave);



    fclose(infile);
    return 0;
}
int getpoints(char okAnswer[],char answer[],int m)
{
    int i,points,cnt=0;
    for(i=0; i<m; i++)
        {
            if(okAnswer[i]==answer[i])
                cnt++;
        }
        points=((float)cnt*(100/m));

    return points;
}

