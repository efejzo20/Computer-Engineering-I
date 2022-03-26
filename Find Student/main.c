//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id;
    int id1,id2,id3,id4;
    char c1[4],c2[4],c3[4],c4[4];
    char n1[15],n2[15],n3[15],n4[15];
    char sn1[15],sn2[15],sn3[15],sn4[15];
    int g1,g2,g3,g4;
    scanf("%d",&id);
    scanf("%d%s%s%s%d",&id1,&c1,&n1,&sn1,&g1);
    scanf("%d%s%s%s%d",&id2,&c2,&n2,&sn2,&g2);
    scanf("%d%s%s%s%d",&id3,&c3,&n3,&sn3,&g3);
    scanf("%d%s%s%s%d",&id4,&c4,&n4,&sn4,&g4);
    if(id==id1)
        printf("%d %s %s %s %d",id1,c1,n1,sn1,g1);
    if(id==id2)
        printf("%d %s %s %s %d",id2,c2,n2,sn2,g2);
    if(id==id3)
        printf("%d %s %s %s %d",id3,c3,n3,sn3,g3);
    if(id==id4)
        printf("%d %s %s %s %d",id4,c4,n4,sn4,g4);

    return 0;
}
