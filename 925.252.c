#include <stdio.h>
int main(void)
{
	int second, minute, hour;

	printf("�ʸ� �Է��ϼ��� : ");
	scanf("%d", &second);
	 
	hour = second/3600;
	second -= 3600*hour;
	minute = second/60;
	second -= 60*minute;

	printf("h: %d, m: %d, s: %d\n", hour, minute, second);




	
	return 0;
	



}