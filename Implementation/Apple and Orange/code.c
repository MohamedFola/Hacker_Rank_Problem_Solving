#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Complete the 'countApplesAndOranges' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER s
 *  2. INTEGER t
 *  3. INTEGER a
 *  4. INTEGER b
 *  5. INTEGER_ARRAY apples
 *  6. INTEGER_ARRAY oranges
 */

void countApplesAndOranges(int s, int t, int a, int b, int apples_count, int *apples, int oranges_count, int *oranges)
{
    int apple_counter = 0, orange_counter = 0;

    for (int i = 0; i < apples_count; i++)
    {
        if ((a + apples[i] >= s) && (a + apples[i] <= t))
            apple_counter++;
    }

    for (int i = 0; i < oranges_count; i++)
    {
        if ((b + oranges[i] <= t) && (b + oranges[i] >= s))
            orange_counter++;
    }

    printf("%d\n%d", apple_counter, orange_counter);
}
