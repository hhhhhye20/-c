#include <stdio.h>
int main(void)
{
	int i;
	int n;

	int fn_1 =1; 
	int fn_2 = 2;
	int fn_3 = 3; 
	int result=0; 

	for(i=1; i<10; i++)
	{
		for(fn_1=1; fn_1 <= i; fn_1++)
		{
			if(i == fn_1 + fn_1 )
			{
				break;
			}

			else{
				printf("%d ", i);
				break;
			}
		}
	}

/*	for(i=10; i<10000; i++)
	{
		for(fn_1=1; fn_1 <= i; fn_1++)
		{
			while( fn_1 != 0 )
				fn_1 + fn_1%10 

				*/



	/*	if(fn_1>=10)
		{
			while(fn_1 != 0)
				result = fn_1 + (fn_1%10);
			if(i == result)
			{
				fn_1++;
				continue;
			}
			else
				printf("%d ", i);
		}



		if(i == fn_1 + fn_1%10 )
		{
			fn_1++;
			continue;
		}
		else
			printf("%d ", i);

	}
	*/


}