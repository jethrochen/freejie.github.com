int getMaxSubarray(int array[], int len, int *sum, int *low, int *high)
{
    int temp;
    int i;

    temp = *sum = 0;
    *low = *high = 0;
    for (i = 0; i < len; i++)
    {
        if (temp < 0)
        {
            temp = array[i];
            *low = i;
        }
        else 
        {
            temp += array[i];
            *high = i;
        }
        if (*sum < temp)
            *sum = temp;
    }

    return 0;
}

