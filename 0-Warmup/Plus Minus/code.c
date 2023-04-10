/*
 * Complete the 'plusMinus' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void plusMinus(int arr_count, int* arr) {
    float pos = 0;
    float neg = 0;
    float zeros = 0;
    
    for(int i=0; i<arr_count; i++){
        if(arr[i] > 0) ++pos;
        else if(arr[i] < 0) ++neg;
        else ++zeros;
    }    
    
    printf("%.6f\n", pos/arr_count);
    printf("%.6f\n", neg/arr_count);
    printf("%.6f", zeros/arr_count);
}