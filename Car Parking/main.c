//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t1,t2,t3;
    scanf("%d%d%d",&t1,&t2,&t3);
    int price1,price2,price3,price;
    if(t1<=4)
    {
        price1=150;
    }
    else if(t1<17)
    {
        price1=150+(t1-4)*50;
    }
    else if(t1>=17)
    {
        price1=800;
    }

    if(t2<=4)
    {
        price2=150;
    }
    else if(t2<17)
    {
        price2=150+(t2-4)*50;
    }
    else if(t2>=17)
    {
        price2=800;
    }

    if(t3<=4)
    {
        price3=150;
    }
    else if(t3<17)
    {
        price3=150+(t3-4)*50;
    }
    else if(t3>=17)
    {
        price3=800;
    }

    price=price1+price2+price3;
    printf("%d",price);
    return 0;
}
