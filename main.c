//efejzo20
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sign;
    int num1,num2;
    float result;
    scanf("%d ",&num1);
    scanf("%c ",&sign);
    scanf("%d",&num2);
    result = 0;
    switch(sign)
    {
        case '+':
            result=num1+num2;
            printf("%f",result);
            break;

        case '-':
            result=num1-num2;
            printf("%f",result);
            break;

        case '*':
            result=num1*num2;
            printf("%f",result);
            break;

        case '/':
            if(num2==0)
            {
                printf("Error: Division by zero!");
                break;
            }
            else
            {
                result=(float)num1/(float)num2;
                printf("%f",result);
                break;
            }
        break;
    }


    return 0;
}
