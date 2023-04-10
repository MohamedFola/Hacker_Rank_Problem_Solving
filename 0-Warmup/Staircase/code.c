/*
 * Complete the 'staircase' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void staircase(int n) {
    for(int i=0; i<n; ++i){
        for(int j=0; j<n-1-i; ++j) printf(" ");
        for(int z=0; z<i+1; ++z) printf("#");
        printf("\n");
    }
}