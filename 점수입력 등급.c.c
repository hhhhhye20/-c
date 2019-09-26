#include <stdio.h>
int main(void)
{
    int score;
    
    scanf("%d", &score);
	
	// 90점보다 크거나 같고, 100점보다 작거나 같은 수 - &&연산자 필요..!!
    
    if(90 <= score && score <= 100)
		printf("A\n");
		
    else if( 80 <= score && score <= 89)   
		printf("B\n");
        
    else if( 70 <= score && score <= 79 )   
        printf("C\n");
       
     else if( 60 <= score && score <= 69)
       printf("D\n");
        
    else
        printf("F\n");
        
    return 0;
}
