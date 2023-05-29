#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main( void )
{
	int input_num;
  int answer[3] = {0, };
  int is_selected[10] = {0, };
  int answer_count = 0;

  // make answer( random ) number
  srand( time( NULL ) );
  while ( answer_count < 3 )
  {
    int cur_random_num = rand() % 10;
    
    if ( is_selected[cur_random_num] == 1 )
    {
      continue;
    }
    
    answer[answer_count] = cur_random_num;
    is_selected[cur_random_num] = 1;
    answer_count ++;
  }
  
  // for debug
  // printf( "answer is %d%d%d\n", answer[0], answer[1], answer[2] );

  // get number from user
	printf( "Input 3 digits number : " );
	scanf( "%d", &input_num );

	printf( "your number is %d\n", input_num );

  // parse each digit
  int parsed_digit[3] = {0, };
  parsed_digit[0] = input_num / 100;
  parsed_digit[1] = input_num % 100 / 10;
  parsed_digit[2] = input_num % 10;

  // check result
  for ( int i = 0; i < 3; ++ i )
  {
    for ( int j = 0; j < 3; ++ j )
    {
      if ( parsed_digit[i] == answer[i] )
    }
  }


	return 0;
}
