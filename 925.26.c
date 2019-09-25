#include <stdio.h>
int main(void)
{
	/* 사용자로부터 영단어 입력 받음. 영단어 구성하는 문자 중
	아스키 코드의 값이 가장 큰 문자를 찾아서 출력하는 프로그램. */

	char ch[20];
	int max=0;
	int i;

	printf("영단어 입력 : ");
	scanf("%s", ch);

	for(i=0; ch[i] != '\0'; i++)
	{
		if(ch[i] > max)
			max = ch[i]; // 문자도 결국 아스키 코드 값으로 컴퓨터 메모리(?)에 저장되기 때문에!
	}


	printf("아스키 코드 값이 가장 큰 문자 :%c\n", max);


	return 0;
}