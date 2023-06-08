#include "main.h"
int act_is_prime_number(int num, int i);
/**
 * is_prime_number - 
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (act_is_prime_number(n, n - 1));
}

int act_is_prime_number(int num, int i)
{

    if (num <= 1) {
        return 0;
    }

    if (i == 1) {
        return 1;
    }

    if (num % i == 0) {
        return 0;
    }

    return (act_is_prime_number(num, i - 1));

}
