#include <stdio.h>
#define CHECK(PRED) printf("%s...%s\n", (PRED) ? "PASSED" : "**FAILED**", #PRED)

int arr_min(const int a[], size_t n);
size_t arr_index_of_first_min(const int a[], size_t n);
size_t arr_index_of_last_min(const int a[], size_t n);
int arr_count_min(const int a[], size_t n);

int main(void)
{
    int a[] = {23, 65, 23, 3, 65, 78, 4};
    int b[] = {45, 24, 3, 87, 67, 3, 3, 5, 54};
    
    int index_first = arr_index_of_first_min(b, 9);
    int index_last = arr_index_of_last_min(b, 9);
    
    printf("---------------------------------------------------\n");
    printf("functions 1:\n");
    printf("Lowest number in array is: %d\n", arr_min(a, 7));
    printf("---------------------------------------------------\n");
  
    printf("---------------------------------------------------\n");
    printf("functions 2:\n");
    printf("Array index of lowest element: %d\n", index_first);
    printf("---------------------------------------------------\n");
    
    printf("---------------------------------------------------\n");
    printf("functions 3:\n");
    printf("Array index of last occurrence of lowest element: %d\n", index_last);
    printf("---------------------------------------------------\n");
    
    printf("---------------------------------------------------\n");
    printf("functions 4:\n");
    printf("Number of times min element occurs: %d\n", arr_count_min(b, 9));
    printf("---------------------------------------------------\n");
    
    CHECK(arr_min(a, 7) == 3);
    CHECK(arr_min(a, 7) == 4);
    CHECK(arr_index_of_first_min(b, 9) == 2);
    CHECK(arr_index_of_first_min(b, 9) == 3);
    
    return 0;
}

/*returns value of smallest integer array of n elements*/
int arr_min(const int a[], size_t n) 
{
    size_t i;
    int min = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] < min)
            min = a[i];
    }
    return min;
}

/*returns index of the min array value. if number repeats then first 
  occurrence is returned*/
size_t arr_index_of_first_min(const int a[], size_t n)
{
    size_t i;
    int min = a[0];
    int index = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            index = i;
        }
    }
    return index;
}

/* return the index of the last minimum element that occurs */
size_t arr_index_of_last_min(const int a[], size_t n)
{
    size_t i;
    int min = a[0];
    int index = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] <= min)
        {
            min = a[i];
            index = i;
        }
    }
    return index;
}

/* returns the number of times the lowest element occurs in array */
int arr_count_min(const int a[], size_t n)
{
    size_t i;
    int min = a[0];
    int counter = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            counter = 0;
        }
        
        if (a[i] == min)
            counter++;
    }
        
    return counter;
}

