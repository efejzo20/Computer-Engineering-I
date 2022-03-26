//efejzo20
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[13];
    scanf("%s",a);

    int i,len;
    int flag1=0,flag2=0,flag3=0,flag4=0,flag5=0;
    char c;
    len = strlen(a);


    if(a<4 && a>12)
        flag1=1;

    else
    {
        // digit
        for(i=0;i<len;i++)
        if((a[i]>=48&&a[i]<=58))
        {
            flag2=0;
            break;
        }

        else
        flag2=1;
        //upper
        for(i=0;i<len;i++)
        if((a[i]>=65&&a[i]<=90))
        {
            flag3=0;
            break;
        }
        else
        flag3=1;
        //lower
        for(i=0;i<len;i++)
        if((a[i]>=97&&a[i]<=122))
        {
            flag4=0;
            break;
        }
    else
        flag4=1;
        for(i=0;i<len;i++)
        if(a[i]=='#'||a[i]=='$'||a[i]=='*'||a[i]=='&'||a[i]=='"'||a[i]=='%'||a[i]==')'||a[i]=='('||a[i]=='+'||a[i]=='-'||a[i]==','||a[i]=='.'||a[i]=='!'||a[i]=='\'')
        {
            flag5=0;

            break;
        }
        else
        flag5=1;

    }


    if(flag1==1||flag2==1||flag3==1||flag4==1||flag5==1)
        printf("NO");
    else
        printf("OK");


    return 0;
}
