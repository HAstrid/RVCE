#include<stdio.h>
#include"sort.h"
#define MAX 20

void main()
{
  int arr[MAX], i, limit, step, temp;
    // ask user for number of elements to be sorted
    printf("\n************************************************\n");
    printf("Enter the number of elements to be sorted: ");
    scanf("%d", &limit);
    printf("\n************************************************\n");
    // input elements if the array
    for(i = 0; i < limit; i++)
    {
        printf("Enter element no. %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("\n************************************************\n");
    printf("Array elements are :- \n");
    for(i = 0; i < limit; i++)
    {
        printf("\t%d",arr[i]);
    }


    printf("\n************************************************\n");

    while (1) {
      int ch;
      printf("\n************************************************\n");
      printf("\n1-Bubble Sort \n2-Selection Sort \n3-Insertion Sort \n4-Merge Sort \n5-Quick Sort \n6-Exit\n");
      printf("\n************************************************\n");
      printf("Enter your choice\n");
      scanf("%d",&ch);

      printf("\n************************************************\n");

      switch (ch) {
        case 1:
          printf("\n************* Bubble sort *************\n");
          bubbleSort(arr,limit);
          printf("\n************************************************\n");
          break;
        case 2:
          printf("\n************* Selection sort *************\n");
          SelectionSort(arr,limit);
          printf("\n************************************************\n");
          break;
        case 3:
        printf("\n************* Insertion sort *************\n");
        InsertionSort(arr,limit);
        printf("\n************************************************\n");
        break;
        case 4:
        printf("\n************* Merge sort *************\n");
        mergeSort(arr, 0, limit - 1);
        printf("\nSorted array using merge sort \n");
        for (i=0; i < limit; i++)
        printf("%d ", arr[i]);
        printf("\n************************************************\n");
        break;

      }

    }
}
