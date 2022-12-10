#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * * main - prints random number and tell if zero,positive or negative
 * * Return: 0
 * */
int main(void)
{ 	      
      	int n;
		        srand(time(0));
			        n = rand() - RAND_MAX / 2;
				        if (n > 0)
						        {
						                  printf("%li is positive\n", (long int)n);
										        }
					        else if (n == 0)
							        {
									                printf("%li is zero\n", (long int)n);
											        }
						        else
								        {
										                printf("%li is negative\n", (long int)n);
												        }
							        return (0);
}
