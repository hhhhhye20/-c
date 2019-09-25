#include <stdio.h>
int main()
{
	int arr[5];
	int i;
	int max = 0, min = 100;
	int total = 0;

	for(i=0; i<5; i++)
	{
		scanf("%d",&arr[i]);
		total += arr[i];
	}

	
	for(i=0; i<5; i++)
	{
		if( arr[i] > max )
			max = arr[i];
		if(arr[i] < min)
			min = arr[i];
	}

	printf("가장 큰 수: %d, 가장 작은 수: %d, 총 합: %d\n", max, min, total);
	
	
	
	return 0;
	



}