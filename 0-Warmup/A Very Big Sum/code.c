/*
 * Complete the 'aVeryBigSum' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts LONG_INTEGER_ARRAY ar as parameter.
 */

long aVeryBigSum(int ar_count, long* ar) {
    long sum = 0;
    
    for(int i=0; i<ar_count; i++) sum += ar[i];
    
    return sum;
}