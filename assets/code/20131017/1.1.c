#include <stdio.h>
#include <limits.h>

void getMaxSubarray(int a[], int len, int *low, int *high, int *maxsum)
{
    int i, j;
    int sum;
    
    *maxsum = INT_MIN;
    for (i = 0; i < len; ++i)
    {
        sum = 0;
        for (j = i; j < len; ++j)
        {
            sum += a[j];
            if (*maxsum < sum)
            {
                *maxsum = sum;
                *low = i; 
                *high = j;
            }
        }
    }
}

int main(void)
{
    int a[16] = {13,-3,-25,20,-3,-16,-23,18,20,-7,12,-5,-22,15,-4,7};
    int low, high, maxsum;

    getMaxSubarray(a, 16, &low, &high, &maxsum);

    printf("the sum of maximum-subarray is %d\n", maxsum);
    printf("the index word of maximum-subarray is from %d to %d\n",
            low, high);

    return 0;
}
