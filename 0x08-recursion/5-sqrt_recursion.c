/**
* find_root - En
* @n: nu
* @r: root
* Return: 0
*/


int find_root(int n, int r)
{

if ((r * r) < n)
{
return (find_root(n, r + 1));
}
else
{
return (r);
}
}

/**
* _sqrt_recursion - Entry
* @n: num
* Return: 0
*/

int _sqrt_recursion(int n)
{
int x;
if (n < 0)
{
return (-1);
}
x = find_root(n, 0);

if ((x *x) != n)
{
return (-1);
}
return (x);
}
