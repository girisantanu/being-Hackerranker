#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

int n;
scanf("%d", &n);
int state, temp = n;
int total = (2 * n) - 1;
for (int i = 0; i < total / 2 + 1; i++)
{
    state = 0;
    temp = n;
    while (temp != n - i)
    {
        printf("%d ", temp);
        temp--;
        state++;
    }
    for (int i = 0; i < (2 * temp) - 1; i++)
    {
        printf("%d ", temp);
        state++;
    }
    for (int i = state; i < total; i++)
    {
        temp++;
        printf("%d ", temp);
    }
    printf("\n");
}
for (int i = 2; i < total / 2 + 2; i++)
{
    state = 0;
    temp = n;
    while (temp != i)
    {
        printf("%d ", temp);
        temp--;
        state++;
    }
    for (int i = 0; i < (2 * temp) - 1; i++)
    {
        printf("%d ", temp);
        state++;
    }
    for (int i = state; i < total; i++)
    {
        temp++;
        printf("%d ", temp);
    }
    printf("\n");
}

return 0;
}
