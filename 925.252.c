#include <stdio.h>

int func(int k, int j)
{


	j *= 2; // j==2

	if(k==1)
		return j;

	func(k-1, j); //k==7. 2��1��=2�ϱ�, ���� 1�� �Ἥ j�� 2�� �Ȱ�..!..


	/* int i=2;

	i *= 2; //i==4

	if(k==0)
		return i;

	func(k-1); //k=7�� �ٽ� �Ű�������, �Լ� ȣ��
	*/
}


int main(void)
{
	int n;
	
	printf("�����Է� : ");
	scanf("%d", &n);

	printf("2�� 8���� %d\n", func(n, 1));


	return 0;
	

}