#include <stdio.h>
int main()
{
    long n;
    int c = 0;

    printf("Enter an integer: ");
    scanf("%ld", &n);

    while(n != 0)
    {
        // n = n/10
        n /= 10;
        ++c;
    }

    printf("Number of digits: %d", c);
}
