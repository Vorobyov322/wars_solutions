unsigned long long square_digits (unsigned n)
{
    if(n == 0){
        return n;
    }
    return square_digits(n/10)*(n%10>3?100:10) + (n%10)*(n%10);
}
