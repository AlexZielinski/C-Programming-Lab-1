# C-Programming-Lab-1

C programming lab 1 for COMP 2510

4 functions to implement.

----------------------------------------------------------------------------------------
Function 1: 
            int arr_min(const a[], size_t n);

    Returns the value of the smallest integer in the integer array 'a' of 'n' elements, 
    ie. returns the minimum value of the array.
    pre-condition: n >= 1

----------------------------------------------------------------------------------------
Function 2: 
            size_t arr_index_of_first_min(const int a[], size_t n); 
             
    Returns the index of the minimum value in the integer array 'a' of 'n' elements,
    if the minimum value occurs more than once in the array, returns the index of its
    first occurence.
    pre condition: n >= 1
    restriction: loop through the array at most once.
    
----------------------------------------------------------------------------------------
Function 3: 
            size_t arr_index_of_last_min(const a[], size_t n);
            
    Returns the index of the minimum value in the integer array 'a' of 'n' elements,
    if the minimum value occurs more than once in the array, returns the index of its
    last occurence.
    pre condition: n >= 1
    restriction: loop through the array at most once.
    
----------------------------------------------------------------------------------------
Function 4:
            int arr_count_min(const a[], size_t n);
            
    Returns the number of times the minimum value occurs in the integer array 'a' of 'n'
    elements.
    pre-condition: n >= 1
    restriction: loop through array at most once.