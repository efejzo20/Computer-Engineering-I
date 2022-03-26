#include <stdio.h>
int getSquare(int i);

int main()
{
    int array[100], i, num;
    int sumOdd=0,sumEven=0;
    int squareOdd,squareEven;
    printf("Enter the size of an array \n");

    scanf("%d", &num);
    printf("Enter the elements of the array \n");

    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }

    //printf("Even numbers in the array are:");
    for (i = 0; i < num; i++)
    {
        if (array[i] % 2 == 0)
        {
            sumEven+=i
            squareEven=getSquare(sumEven);
           // printf("%d \t", array[i]);
        }
    }

    //printf("\n Odd numbers in the array are:");
    for (i = 0; i < num; i++)
    {
        if (array[i] % 2 != 0)
        {
            sumOdd+=i
            squareOdd=getSquare(sumOdd);
            //printf("%d \t", array[i]);
        }
    }
    printf("%d%d%d%d",&sumOdd,&sumEven,&squareOdd,&squareEven);
    return 0;
}
int getSquare(int i)
{
    return i*i;
}
