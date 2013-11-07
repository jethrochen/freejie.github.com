#include <stdio.h>
#include <limits.h>

typedef struct KeyNum {
    int low;
    int high;
    int maxsum;
} KeyNum;

KeyNum findMaxCrossingSubarray(int array[], int left, int right, int mid)
{
    KeyNum key;
    int leftsum = INT_MIN;
    int rightsum = INT_MIN;
    int i, j;
    int temp = 0;

    for (i = mid; i >= left; i--)
    {
        temp += array[i];
        if (leftsum < temp)
        {
            leftsum = temp;
            key.low = i;
        }
    }
    temp = 0;
    for (j = mid + 1; j <= right; j++)
    {
        temp += array[j];
        if (rightsum < temp)
        {
            rightsum = temp;
            key.high = j;
        }
    }
    key.maxsum = leftsum + rightsum;

    return key;
}

KeyNum findMaxmimuxSubarray(int array[], int left, int right)
{
    int mid;
    KeyNum leftkey, rightkey, crosskey;

    if (left >= right)
    {
        leftkey.low = left;
        leftkey.high = left;
        leftkey.maxsum = array[left];
        return leftkey;
    }
    mid = (left + right) / 2;
    leftkey = findMaxmimumSubarray(array, left, mid);
    rightkey = findMaxmimumSubarray(array, mid+1, right);
    crosskey = findCrossMaxSubarray(array, left, right, mid);
    if (leftkey.maxsum >rightkey.maxsum && leftkey.maxsum > crosskey.maxsum)
        return leftkey;
    else if (rightkey.maxsum > leftkey.maxsum && rightkey.maxsum > crosskey.maxsum)
        return rightkey;
    else
        return crosskey;
}

int main(void)
{
    int a[16] = {13,-3,-25,20,-3,-16,-23,18,20,-7,12,-5,-22,15,-4,7};
    struct KeyNum key;

    key.low = 0;
    key.high = 0;
    key.maxsum = INT_MIN;

    key = findMaxminmumSubarray(a, 0, 15);

    printf("the sum of maximum-subarray is %d\n", key.maxsum);
    printf("the index word of maximum-subarray is from %d to %d\n",
            key.low, key.high);

    return 0;
}
