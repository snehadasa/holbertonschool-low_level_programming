#include <stdio.h>

<<<<<<< HEAD
int is_prime(int num)
{
     if (num <= 1) return 0;
     if (num % 2 == 0 && num > 2) return 0;
     for(int i = 3; i < num / 2; i+= 2)
     {
         if (num % i == 0)
             return 0;
     }
     return 1;
}

long print_largest_prime(long n)
{
    long i, largest_prime;
    
    for (i = 2; i <= n; i++)
    {
        if (n%i == 0 && is_prime(i) == 1)
        {
            largest_prime = i;
        }
    }
    return largest_prime;
}

int main()
{
    printf("%ld\n", print_largest_prime(612852475143));
    
    return 0;
}

=======
/**
 *main - This program searches for a the largest prime
 *factor of 612852475143
 *
 *Return: Returns 0 if program is succesfull
 */
int main(void)
{
	long int num;
	long int div;

	div = 2;
	num = 612852475143;
	while (num != 1)
	{
		if (num % div == 0)
			num /= div;
		else if (num % div != 0)
			div++;
	}
	printf("%ld\n", div);
	return (0);
}
>>>>>>> 5f9d390ffd9b9cd912315561c5270829eacec2e5
