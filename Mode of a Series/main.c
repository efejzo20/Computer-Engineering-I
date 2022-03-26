//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mode[1001]={0};
    int m,n,i,num;
    int maxMode=0;
    int maxModeIndex;

    FILE *infile;
    infile=fopen("input.txt","r");
    if(infile==NULL)
        exit(1);

    fscanf(infile,"%d%d",&n,&m);

    for(i=0; i<n; i++)
    {
        fscanf(infile,"%d",&num);
        mode[num]++;
    }

    for(i=1;i<m;i++)
    {
        if(mode[i]>maxMode)
        {
            maxMode=mode[i];
            maxModeIndex=i;
        }
    }
    printf("%d\n",maxModeIndex);

    fclose(infile);
    return 0;
}
