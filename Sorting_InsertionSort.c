#include<stdio.h>

void printArray(int array[], int size)
{
  int i;
  for (i=0; i < size; i++)
    printf("%d ", array[i]);
  printf("\n");
}

void insertionSort(int array[], int n)
{
  int i, key, j,shift=0,flag=0;
  for (i = 0; i < n; i++)
  {
    key = array[i];
    j = i-1;
    printf("While i = %d\n",i);
    printf("Element = %d\n",array[i]);
    while (j >= 0 && array[j] > key)
    {                     // find the correct position of the element
      array[j+1] = array[j];        // shift all lesser elements
      printf("Elements shifted is %d\n", array[j]);
      flag=1;
      shift++;
      j = j-1;
    }
    if(flag){
        shift++;
        flag=0;
    }

    array[j+1] = key;           // place the element at position
    printf("Array after %d iterations - \n",i+1);
    printArray(array, n);   // During Sorting
    printf("\n");
  }
  printf("No of Shifts: %d\n",shift);
}

int main()
{
  //int array[] = {2,4,1,3,5};
  //int n = 5; 
  int array[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
  int n = 10; 
  /* we can calculate the number of elements in an array by using sizeof(array)/sizeof(array[0]).            */
  printf("Un-Sorted array: \n");
  printArray(array, n);     // Unsorted array
  insertionSort(array, n);     // Call the sorting routine
  printf("\nSorted array: \n");
  printArray(array, n);   // Sorted array
  return 0;
}