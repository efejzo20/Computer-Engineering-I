//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j, students, ex,sum=0;
    double ave;

    scanf("%d",&students); // nr studnt
    scanf("%d",&ex); //nr exeams

    char name[students][20];
    int grades[students][ex];

    for(i=0;i<students;i++)
    {
        scanf("%s",&name[i]);
    }

    for(i=0;i<students;i++)
    {
        for(j=0;j<ex;j++)
        {
            scanf("%d",&grades[i][j]);
        }
    }

    //print name and grades
    /*
    for(i=0;i<students;i++)
    {
        printf("\n%s ",name[i]);
        for(j=0;j<ex;j++)
        {
            printf("%d ",&grades[i][j]);
        }
    }
    */

    //print ave
    for(i=0;i<ex;i++)
    {
        sum=0;
        for(j=0;j<students;j++)
        {
            sum+=grades[j][i];
        }
        ave=(float)sum/students;
        //printf("%d",ave);
    }

    int max=-1,maxIndex;

    for(i=0;i<students;i++)
    {
        for(j=0;j<ex;j++)
        {
            sum+=grades[i][j];
        }
        ave=(float)sum/ex;

        if(ave>max)
        {
            max=ave;
            maxIndex=i;
        }
    }

    printf("%s",name[maxIndex]);

    return 0;
}
