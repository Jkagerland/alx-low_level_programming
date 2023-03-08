/**
 * check_prime - a second function
 * @n: a number
 * @r: checking this number
 * Return: the multiplication or 0
*/

int check_prime(int n, int r)
{

if (n % r == 0 && r >= 2)
{
return (1);
}
if ((n % r) != 0 &&   (r + 1) < n)
{
return (check_prime(n, r + 1));
}
else
{
return (0);
}
}

/**
 * is_prime_number - a second function
 * @n: a number
 * Return: the multiplication or 0
*/

int is_prime_number(int n)
{
int x = 0;

if (n <= 1)
{
return (0);
}
x = check_prime(n, 2);
if (x != 0)
return (0);
else
return (1);
}
