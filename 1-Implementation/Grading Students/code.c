/*
 * Complete the 'gradingStudents' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY grades as parameter.
 */

/*
 * To return the integer array from the function, you should:
 *     - Store the size of the array to be returned in the result_count variable
 *     - Allocate the array statically or dynamically
 *
 * For example,
 * int* return_integer_array_using_static_allocation(int* result_count) {
 *     *result_count = 5;
 *
 *     static int a[5] = {1, 2, 3, 4, 5};
 *
 *     return a;
 * }
 *
 * int* return_integer_array_using_dynamic_allocation(int* result_count) {
 *     *result_count = 5;
 *
 *     int *a = malloc(5 * sizeof(int));
 *
 *     for (int i = 0; i < 5; i++) {
 *         *(a + i) = i + 1;
 *     }
 *
 *     return a;
 * }
 *
 */

int Round(int Copy_intNumber)
{
    if ((Copy_intNumber % 5) == 3)
        return (Copy_intNumber + 2);
    else if ((Copy_intNumber % 5) == 4)
        return (Copy_intNumber + 1);
    else
        return Copy_intNumber;
}

int *gradingStudents(int grades_count, int *grades, int *result_count)
{
    int *result_Grades = malloc(grades_count * sizeof(int));
    (*result_count) = 0;
    int Local_intLoopCounter;

    for (Local_intLoopCounter = 0; Local_intLoopCounter < grades_count; Local_intLoopCounter++)
    {
        if (grades[Local_intLoopCounter] < 38)
            result_Grades[Local_intLoopCounter] = grades[Local_intLoopCounter];

        else if (grades[Local_intLoopCounter] == 38 || grades[Local_intLoopCounter] == 39)
            result_Grades[Local_intLoopCounter] = 40;

        else if (grades[Local_intLoopCounter] > 39 && grades[Local_intLoopCounter] <= 100)
            result_Grades[Local_intLoopCounter] = Round(grades[Local_intLoopCounter]);

        (*result_count)++;
    }

    return result_Grades;
}