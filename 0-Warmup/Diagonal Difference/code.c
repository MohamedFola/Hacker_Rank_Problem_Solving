/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int diagonalDifference(int arr_rows, int arr_columns, int** arr){
    int first_diagonal = 0;
    int second_diagonal = 0;
    
    for(int i=0; i<arr_rows; ++i) first_diagonal += *(*(arr + i) + i);
    for(int j=arr_columns-1; j>=0; --j) second_diagonal += *(*(arr + arr_rows 
    - 1 - j) + j);
    
    int result = abs(first_diagonal - second_diagonal);
    
    return result;
    
}