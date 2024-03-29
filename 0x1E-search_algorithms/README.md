Search Algorithms
Linear search mandatory Score: 0.0% (Checks completed: 0.0%) Write a function that searches for a value in an array of integers using the Linear search algorithm
Prototype : int linear_search(int *array, size_t size, int value); Where array is a pointer to the first element of the array to search in size is the number of elements in array And value is the value to search for Your function must return the first index where value is located If value is not present in array or if array is NULL, your function must return -1

Binary search mandatory Score: 0.0% (Checks completed: 0.0%) Write a function that searches for a value in a sorted array of integers using the Binary search algorithm
Prototype : int binary_search(int *array, size_t size, int value); Where array is a pointer to the first element of the array to search in size is the number of elements in array And value is the value to search for Your function must return the index where value is located You can assume that array will be sorted in ascending order You can assume that value won’t appear more than once in array If value is not present in array or if array is NULL, your function must return -1 You must print the array being searched every time it changes. (e.g. at the beginning and when you search a subarray) 2. Big O #0 mandatory Score: 0.0% (Checks completed: 0.0%) What is the time complexity (worst case) of a linear search in an array of size n? 3. Big O #1 mandatory Score: 0.0% (Checks completed: 0.0%) What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?

Repo:

GitHub repository: alx-low_level_programming Directory: 0x1E-search_algorithms File: 3-O

Big O #2 mandatory Score: 0.0% (Checks completed: 0.0%) What is the time complexity (worst case) of a binary search in an array of size n?
Repo:

GitHub repository: alx-low_level_programming Directory: 0x1E-search_algorithms File: 4-O

Big O #3 mandatory Score: 0.0% (Checks completed: 0.0%) What is the space complexity (worst case) of a binary search in an array of size n?
Repo:

GitHub repository: alx-low_level_programming Directory: 0x1E-search_algorithms File: 5-O

Big O #4 mandatory Score: 0.0% (Checks completed: 0.0%) What is the space complexity of this function / algorithm?
int **allocate_map(int n, int m) { int **map;

 map = malloc(sizeof(int *) * n);
 for (size_t i = 0; i < n; i++)
 {
      map[i] = malloc(sizeof(int) * m);
 }
 return (map);
} Repo:

GitHub repository: alx-low_level_programming Directory: 0x1E-search_algorithms File: 6-O

Jump search #advanced Score: 0.0% (Checks completed: 0.0%) Write a function that searches for a value in a sorted array of integers using the Jump search algorithm
Prototype : int jump_search(int *array, size_t size, int value); Where array is a pointer to the first element of the array to search in size is the number of elements in array And value is the value to search for Your function must return the first index where value is located You can assume that array will be sorted in ascending order If value is not present in array or if array is NULL, your function must return -1 You have to use the square root of the size of the array as the jump step. You can use the sqrt() function included in <math.h> (don’t forget to compile with -lm) Every time you compare a value in the array to the value you are searching for, you have to print this value (see example) wilfried@0x1E-search_algorithms$ cat 100-main.c #include <stdio.h> #include <stdlib.h> #include "search_algos.h"

/**

main - Entry point

Return: Always EXIT_SUCCESS */ int main(void) { int array[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }; size_t size = sizeof(array) / sizeof(array[0]);

printf("Found %d at index: %d\n\n", 6, jump_search(array, size, 6)); printf("Found %d at index: %d\n\n", 1, jump_search(array, size, 1)); printf("Found %d at index: %d\n", 999, jump_search(array, size, 999)); return (EXIT_SUCCESS); } wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 100-main.c 100-jump.c -lm -o 100-jump wilfried@0x1E-search_algorithms$ ./100-jump Value checked array[0] = [0] Value checked array[3] = [3] Value found between indexes [3] and [6] Value checked array[3] = [3] Value checked array[4] = [4] Value checked array[5] = [5] Value checked array[6] = [6] Found 6 at index: 6

Value checked array[0] = [0] Value found between indexes [0] and [3] Value checked array[0] = [0] Value checked array[1] = [1] Found 1 at index: 1

Value checked array[0] = [0] Value checked array[3] = [3] Value checked array[6] = [6] Value checked array[9] = [9] Value found between indexes [9] and [12] Value checked array[9] = [9] Found 999 at index: -1

Repo:

GitHub repository: alx-low_level_programming Directory: 0x1E-search_algorithms File: 100-jump.c

Big O #5 #advanced Score: 0.0% (Checks completed: 0.0%) What is the time complexity (average case) of a jump search in an array of size n, using step = sqrt(n)?
Repo:

GitHub repository: alx-low_level_programming Directory: 0x1E-search_algorithms File: 101-O

Interpolation search #advanced Score: 0.0% (Checks completed: 0.0%) Write a function that searches for a value in a sorted array of integers using the Interpolation search algorithm
Prototype : int interpolation_search(int *array, size_t size, int value); Where array is a pointer to the first element of the array to search in size is the number of elements in array And value is the value to search for Your function must return the first index where value is located You can assume that array will be sorted in ascending order If value is not present in array or if array is NULL, your function must return -1 To determine the probe position, you can use : size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low])) Every time you compare a value in the array to the value you are searching, you have to print this value (see example below) wilfried@0x1E-search_algorithms$ cat 102-main.c #include <stdio.h> #include <stdlib.h> #include "search_algos.h"

/**

main - Entry point

Return: Always EXIT_SUCCESS */ int main(void) { int array[] = { 0, 0, 1, 2, 2, 2, 2, 3, 3, 4, 4, 5, 6, 6, 7, 8, 8, 8, 9, 9 }; size_t size = sizeof(array) / sizeof(array[0]);

printf("Found %d at index: %d\n\n", 3, interpolation_search(array, size, 3)); printf("Found %d at index: %d\n\n", 7, interpolation_search(array, size, 7)); printf("Found %d at index: %d\n", 999, interpolation_search(array, size, 999)); return (EXIT_SUCCESS); } wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 102-main.c 102-interpolation.c -o 102-interpolation wilfried@0x1E-search_algorithms$ ./102-interpolation Value checked array[6] = [2] Value checked array[7] = [3] Found 3 at index: 7

Value checked array[14] = [7] Found 7 at index: 14

Value checked array[2109] is out of range Found 999 at index: -1 Repo:

GitHub repository: alx-low_level_programming Directory: 0x1E-search_algorithms File: 102-interpolation.c

Exponential search #advanced Score: 0.0% (Checks completed: 0.0%) Write a function that searches for a value in a sorted array of integers using the Exponential search algorithm
Prototype : int exponential_search(int *array, size_t size, int value); Where array is a pointer to the first element of the array to search in size is the number of elements in array And value is the value to search for Your function must return the first index where value is located You can assume that array will be sorted in ascending order If value is not present in array or if array is NULL, your function must return -1 You have to use powers of 2 as exponential ranges to search in your array Every time you compare a value in the array to the value you are searching for, you have to print this value (See example) Once you’ve found the good range, you need to use a binary search: Every time you split the array, you have to print the new array (or subarray) you’re searching in (See example) wilfried@0x1E-search_algorithms$ cat 103-main.c #include <stdio.h> #include <stdlib.h> #include "search_algos.h"

/**

main - Entry point

Return: Always EXIT_SUCCESS */ int main(void) { int array[] = { 0, 1, 2, 3, 4, 7, 12, 15, 18, 19, 23, 54, 61, 62, 76, 99 }; size_t size = sizeof(array) / sizeof(array[0]);

printf("Found %d at index: %d\n\n", 62, exponential_search(array, size, 62)); printf("Found %d at index: %d\n\n", 3, exponential_search(array, size, 3)); printf("Found %d at index: %d\n", 999, exponential_search(array, size, 999)); return (EXIT_SUCCESS); } wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 103-main.c 103-exponential.c -o 103-exponential wilfried@0x1E-search_algorithms$ ./103-exponential Value checked array[1] = [1] Value checked array[2] = [2] Value checked array[4] = [4] Value checked array[8] = [18] Value found between indexes [8] and [15] Searching in array: 18, 19, 23, 54, 61, 62, 76, 99 Searching in array: 61, 62, 76, 99 Found 62 at index: 13

Value checked array[1] = [1] Value checked array[2] = [2] Value found between indexes [2] and [4] Searching in array: 2, 3, 4 Found 3 at index: 3

Value checked array[1] = [1] Value checked array[2] = [2] Value checked array[4] = [4] Value checked array[8] = [18] Value found between indexes [8] and [15] Searching in array: 18, 19, 23, 54, 61, 62, 76, 99 Searching in array: 61, 62, 76, 99 Searching in array: 76, 99 Searching in array: 99 Found 999 at index: -1 Repo:

GitHub repository: alx-low_level_programming Directory: 0x1E-search_algorithms File: 103-exponential.c

Advanced binary search #advanced Score: 0.0% (Checks completed: 0.0%) You may have noticed that the basic binary search does not necessarily return the index of the first value in the array (if this value appears more than once in the array). In this exercise, you’ll have to solve this problem.
Write a function that searches for a value in a sorted array of integers.

Prototype : int advanced_binary(int *array, size_t size, int value); Where array is a pointer to the first element of the array to search in size is the number of elements in array And value is the value to search for Your function must return the index where value is located You can assume that array will be sorted in ascending order If value is not present in array or if array is NULL, your function must return -1 Every time you split the array, you have to print the new array (or subarray) you’re searching in (See example) You have to use recursion. You may only use one loop (while, for, do while, etc.) in order to print the array wilfried@0x1E-search_algorithms$ cat 104-main.c #include <stdio.h> #include <stdlib.h> #include "search_algos.h"

/**

main - Entry point

Return: Always EXIT_SUCCESS */ int main(void) { int array[] = { 0, 1, 2, 5, 5, 6, 6, 7, 8, 9 }; size_t size = sizeof(array) / sizeof(array[0]);

printf("Found %d at index: %d\n\n", 8, advanced_binary(array, size, 8)); printf("Found %d at index: %d\n\n", 5, advanced_binary(array, size, 5)); printf("Found %d at index: %d\n", 999, advanced_binary(array, size, 999)); return (EXIT_SUCCESS); } wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 104-main.c 104-advanced_binary.c -o 104-advanced_binary wilfried@0x1E-search_algorithms$ ./104-advanced_binary Searching in array: 0, 1, 2, 5, 5, 6, 6, 7, 8, 9 Searching in array: 6, 6, 7, 8, 9 Searching in array: 8, 9 Found 8 at index: 8

Searching in array: 0, 1, 2, 5, 5, 6, 6, 7, 8, 9 Searching in array: 0, 1, 2, 5, 5 Searching in array: 5, 5 Found 5 at index: 3

Searching in array: 0, 1, 2, 5, 5, 6, 6, 7, 8, 9 Searching in array: 6, 6, 7, 8, 9 Searching in array: 8, 9 Searching in array: 9 Found 999 at index: -1 Repo:

GitHub repository: alx-low_level_programming Directory: 0x1E-search_algorithms File: 104-advanced_binary.c

Jump search in a singly linked list #advanced Score: 0.0% (Checks completed: 0.0%) You might think that linear search is not as effective as any other algorithm, right? Well, we should see what happens with a singly linked list.
Please define the following data structure in your search_algos.h header file:

/**

struct listint_s - singly linked list
@n: Integer
@index: Index of the node in the list
@next: Pointer to the next node
Description: singly linked list node structure */ typedef struct listint_s { int n; size_t index; struct listint_s *next; } listint_t; Write a function that searches for a value in a sorted list of integers using the Jump search algorithm.
Prototype : listint_t *jump_list(listint_t *list, size_t size, int value); Where list is a pointer to the head of the list to search in size is the number of nodes in list And value is the value to search for Your function must return a pointer to the first node where value is located You can assume that list will be sorted in ascending order If value is not present in head or if head is NULL, your function must return NULL You have to use the square root of the size of the list as the jump step. You can use the sqrt() function included in <math.h> (don’t forget to compile with -lm) Every time you compare a value in the list to the value you are searching, you have to print this value (see example) NOTE: You can find here the functions used in the example. You don’t need to push them, we will compile your file with our own implementation during the correction.

wilfried@0x1E-search_algorithms$ cat 105-main.c #include <stdio.h> #include <stdlib.h> #include "search_algos.h"

listint_t *create_list(int *array, size_t size); void print_list(const listint_t *list); void free_list(listint_t *list);

/**

main - Entry 