/*
 * Complete the 'miniMaxSum' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */



void miniMaxSum(int arr_count, int* arr) {
    int i;
    long min, max, sum;
    min = arr[0];
    max = min;
    sum = min;
    
    for (i=1; i<arr_count; i++) 
    {
        sum += arr[i];
        /* to get the smallest element in the array */
        if (arr[i] < min) min = arr[i];
        
        /* to get the largest element in the array */
        if (arr[i] > max) max = arr[i];
        
    }

    /* 
    sum-max will give us the smallest number
    sum-min will give us the largest number 
    */
    printf("%lu %lu", (sum - max), (sum - min));
}