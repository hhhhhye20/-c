#include <stdio.h>
int main(void)
{
	//����n�Է¹���. ���� ������ �����ϴ� k�� �ִ�. 2�� k�� <= n

	int n, k=0;
	int i=2;

	printf("��� n �Է�: ");
	scanf("%d", &n);

/*	while(i<=n )
	{
		i *= 2;
		k++;
	}
	*/

	for(i=2; i<=n; i*=2)
	{
		k++;
	}

	printf("������ �����ϴ� k�� ��: %d\n", k);

	return 0;
	

}