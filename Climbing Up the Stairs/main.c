//efejzo20
#include <stdio.h>
#include <stdlib.h>

int getIntNum();
void selSort(int  arr[], int n);
int calStairs(int list[], int n);

int main()
{
	int num, cnt, numStairs, totNumStairs=0;
	int list[200];

	while (1)
	{
		cnt = 0;
		num = getIntNum();
		if (num < 0) break;
		// read the first number and check if it is greater than 0
		do
		{
			// And the number to the array
			list[cnt]=num;
			// increment the index of elements
			cnt++;
			// read next number
			num = getIntNum();

		} while (num>=0);
		// sort the list
		selSort(list,cnt);
		// calculate number of stairs climbed and add it to the totNumStairs
        numStairs=calStairs(list,cnt);
        totNumStairs+=numStairs;
	}

	// show totNumStairs;
    printf("%d",totNumStairs);

	return 0;
}


int getIntNum()
{
	int num;
	scanf("%d",&num);
	return num;
}

void selSort(int  arr[], int n)
{
	int i, j, temp;

	for (i = 0; i<n - 1; i++)
	{
		int min = i;
		for (j = i + 1; j < n; j++)
		{
			if (arr[j]<arr[min])
				min = j;
		}
		temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	}
}

int calStairs(int list[], int n)
{
    int res,i,tot=0;

    if(list[0]<=2)
       tot=list[0];

    for(i=0;i<n-1;i++)
    {
        res=list[i+1]-list[i];
        if(res<=2)
            tot+=res;
    }

    return tot;
	/*calculate stairs climbed*/
}
