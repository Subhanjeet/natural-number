#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("The sum of %d is %d", n, sum);
    return 0;
}