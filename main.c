#include <stdio.h>
#include <stdlib.h>

int main( void )
{
	int input_num;
	int random_num;
	
	random_num = rand() % 1000;

	printf("input : ");
	scanf("%d", &input_num);

	printf("your num : %d\n", input_num);
	printf("random num : %d\n", random_num);
	random_num = rand() % 1000;
	printf("random num : %d\n", random_num);

	return 0;
}
