//efejzo20
#include <stdio.h>
#include <stdlib.h>
void readGrades(int students,int ex,int grades[][ex]);
void getAve(int ex,int students,int grades[][ex]);

int main()
{
    int i,j, students, ex,sum=0;
    double ave;

    printf("Enter the number of students: ");
    scanf("%d",&students);
    printf("Enter the number of exeams: ");
    scanf("%d",&ex);

    char name[students][20];
    int grades[students][ex];


    printf("Enter the names of students:\n");
    for(i=0;i<students;i++)
    {
        scanf("%s",&name[i]);
    }

    printf("Enter the grades for each student:\n");
    readGrades(students,ex,grades);


    printf("\nGrades and names of each studnet:\n");
    for(i=0;i<students;i++)
    {
        printf("\n%s ",name[i]);
        for(j=0;j<ex;j++)
        {
            printf("%d ",grades[i][j]);
        }
    }

    printf("\n\nThe average for each exam: \n");
    getAve(ex,students,grades);

    int max=-1,maxIndex;
    int min=150,minIndex;

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

    for(i=0;i<students;i++)
    {
        for(j=0;j<ex;j++)
        {
            sum+=grades[i][j];
        }
        ave=(float)sum/ex;

        if(ave<min)
        {
            min=ave;
            minIndex=i;
        }
    }

    printf("\nThe student with the highest average is: ");
    printf("%s",name[maxIndex]);
    printf("\nThe student with the lowest average is: ");
    printf("%s",name[minIndex]);

    return 0;
}


void readGrades(int students,int ex,int grades[][ex])
{
    int i,j;
    for(i=0;i<students;i++)
    {
        for(j=0;j<ex;j++)
        {
            scanf("%d",&grades[i][j]);
        }
    }
}

void getAve(int ex,int students,int grades[][ex])
{
    int i,j,sum;
    float ave;
    for(i=0;i<ex;i++)
    {
        sum=0;
        for(j=0;j<students;j++)
        {
            sum+=grades[j][i];
        }
        ave=(float)sum/students;
        printf("Exam %d = %.2f\n",i+1,ave);
    }
}
