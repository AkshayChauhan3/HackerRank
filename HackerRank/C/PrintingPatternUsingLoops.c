#include <stdio.h>
int main()
{
    int n = 3;
    int k = ((n * 2) - 2);
    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            for (int a = 0; a <= n; a++)
            {
                if (i == a || j == a || i == (((n * 2) - 2) - a) || j == (((n * 2) - 2) - a))
                {
                    printf("%d ", (n - a));
                    break;
                }
            }
        }
        printf("\n");
    }
}