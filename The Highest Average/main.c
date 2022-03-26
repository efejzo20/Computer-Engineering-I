//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name1[15],name2[15],name3[15];
    int a1,b1,a2,b2,a3,b3;
    float av1,av2,av3;
    scanf("%s%d%d",&name1,&a1,&b1);
    scanf("%s%d%d",&name2,&a2,&b2);
    scanf("%s%d%d",&name3,&a3,&b3);
    av1=(a1+b1)/2.0;
    av2=(a2+b2)/2.0;
    av3=(a3+b3)/2.0;
    if(av1>=av2 && av1>=av3)
    {
        printf("%s %f ",name1,av1);
    }
    if(av2>=av1 && av2>=av3)
    {
        printf("%s %f ",name2,av2);
    }
    if(av3>=av1 && av3>=av2)
        printf("%s %f ",name3,av3);


    return 0;
}
