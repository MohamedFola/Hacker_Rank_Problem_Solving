/*
 * Complete the 'simpleArraySum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY ar as parameter.
 */

int simpleArraySum(int ar_count, int* ar) {
    int sum = 0;
    for(int i=0; i<ar_count ;i++){
        sum += ar[i];
    }
    return sum;
}