int find_root(int n, int r){

    if ((r * r) < n )
        return find_root(n, r+1);
    else
        return(r);
}

int _sqrt_recursion(int n)
{
    int x;
    if (n < 0)
    {
        return n;
   }
    x = find_root(n, 0);

    if ((x * x) != n){
        return (-1);
    }
    return (x);
}
