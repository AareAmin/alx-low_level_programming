#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : Prints a number and it's last digit along with whether it's laat digit is 0, greater or less than 6 and not
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("last digit of %d is %d %s\n", n, n, n % 10, ((n % 10) == 0) ? "and is 0"
: (((n % 10) > 5) ? "and is greater than 5"
: "and is less thab 6 and not 0"));

return (0);
}
