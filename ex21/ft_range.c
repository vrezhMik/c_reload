#include <stdlib.h>

int *ft_range(int min, int max)
{
    int count;
    int *arr;
    int i;
    
    i = 0;
    count = max - min + 1;
    arr = (int *)malloc(count * sizeof(int));
    while(i < count)
    {
        arr[i] = min;
        min++;
        i++;
    }
    return (arr);
}
