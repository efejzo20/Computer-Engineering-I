//efejzo20
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n,i,j,res;
    char name[100][25],temp[25];

    scanf("%d",&n);

     for (i = 0; i<n; i++)
        scanf("%s",name[i]);

    for (i = 0; i<n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
        if (strcmp(name[i], name[j]) > 0)
        {
            strcpy(temp,name[i]);
            strcpy(name[i],name[j]);
            strcpy(name[j],temp);
        }

    }
    }

    printf("%s\n%s",name[0],name[n-1]);

    return 0;
}
