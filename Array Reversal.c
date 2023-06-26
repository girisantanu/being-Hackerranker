#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i, j = 0, *temp;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    temp = malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array.*/
    for (i = num - 1; i >= 0; i--)
    {
        temp[j] = arr[i];
        j++;
    }
    arr = temp;

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    
    free(arr);
    return 0;
}
