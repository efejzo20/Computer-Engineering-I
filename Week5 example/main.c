//efejzo20
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,i,j;

    FILE *infile;
    infile=fopen("input.txt","r");
    if(infile==NULL)
        exit(1);

    fscanf(infile,"%d",&n);

    int id[n],grade[n];
    char name[n][15], surname[n][15], dep[n][6];
    char name1[15],surname1[15];
    for(i=0;i<n;i++)
    {
        fscanf(infile,"%d",&id[i]);
        fscanf(infile,"%s",&name[i]);
        fscanf(infile,"%s",&surname[i]);
        fscanf(infile,"%s",&dep[i]);
        fscanf(infile,"%d",&grade[i]);
    }

    printf("Enter the name and surname of student you want to search:\n");
    scanf("%s %s",name1,surname1);

    int flagName, flagSurname;

    for(i=0;i<n;i++)
    {
        flagName=strcmp(name1,name[i]);
        flagSurname=strcmp(surname1,surname[i]);
        if(flagName==0 && flagSurname==0)
            printf("%d %s %s %s %d\n",id[i],name[i],surname[i],dep[i],grade[i]);
    }

    printf("Enter department: ");
    char department[5];
    int flagDep;
    scanf("%s",department);

    printf("Enter grade y: ");
    int gradey;
    scanf("%d",&gradey);

    for(i=0;i<n;i++)
    {
        flagDep=strcmp(department,dep[i]);
        if(flagDep==0 && grade[i]>gradey)
        {
            printf("%s %s\n",name[i],surname[i]);
        }
    }

    printf("Enter department to get the top student: ");
    char depTop[5];
    int flagTop,max=-1,index;
    scanf("%s",depTop);

    for(i=0;i<n;i++)
    {
        flagTop=strcmp(depTop,dep[i]);
        if(flagTop==0)
        {
            if(grade[i]>max)
            {
                max=grade[i];
                index=i;
            }

        }
    }

    printf("The top student form %s is: %s %s",depTop,name[index],surname[index]);


    fclose(infile);
    return 0;
}
