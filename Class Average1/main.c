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

    int id[5],grade[120];
    char name[5][15], surname[5][15], clas[5][6];

    int tot10=0,tot11=0;

    for(i=0;i<5;i++)
    {
        fscanf(infile,"%d",&clas[i]);
        fscanf(infile,"%s",&name[i]);
        fscanf(infile,"%s",&surname[i]);
        fscanf(infile,"%d",&grade[i]);
    }

    clas='clas[0]';

    for(i=0;i<5;i++)
    {
        if(clas[i]=='10A')
        {
            tot10+=
        }

    }

    printf("Enter the name and surname of student you want to search:\n");
    scanf("%s %s",name1,surname1);

    int flagClas;

    for(i=0;i<5;i++)
    {
        if()
        flagClas=strcmp(name1,name[i]);
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
