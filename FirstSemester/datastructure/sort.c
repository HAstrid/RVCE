#include<stdio.h>
#define MAX 20

void bubbleSort(int arr[], int size);
void SelectionSort(int arr[], int size);
void InsertionSort(int arr[], int size);

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void print(int arr[], int size)
{
    printf("\nSorted Array : \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void main()
{

    int arr[MAX], i, limit, step, temp;
    printf("Enter the limit of array ");
    scanf("%d", &limit);

    printf("Enter array element \n");
    for (i = 0; i < limit; i++)
    {
        printf("Enter element no. %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Array elements are :- \n");
    for (i = 0; i < limit; i++)
    {
        printf("\t%d", arr[i]);
    }

    while (1)
    {
        int ch;
        printf("\n1-Bubble Sort \n2-Selection Sort \n3-Insertion Sort \n4-Exit\n");
        printf("Enter your choice\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            bubbleSort(arr, limit);
            break;
        case 2:
            SelectionSort(arr, limit);
            break;
        case 3:
            InsertionSort(arr, limit);
            break;
    }
}
}

void bubbleSort(int arr[], int size)
{
    int i, j, temp;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // swap the elements
                swap(&arr[j], &arr[j + 1]);
                }
        }
    }
    // print the sorted array
    print(arr,size);
}

void SelectionSort(int arr[], int size)
{
    int i;
    for (i = 0; i < size - 1; i++)
    {
        int Imin = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[Imin])
                Imin = j;
         }
         swap(&arr[Imin], &arr[i]);
    }
    print(arr,size);
}

void InsertionSort(int arr[], int size)
{
    int i, hole, value;
    for (i = 1; i < size; i++)
    {
        value = arr[i];
        hole = i;
        while (hole > 0 && arr[hole - 1] > value)
        {
            arr[hole] = arr[hole - 1];
            hole--;
        }
        arr[hole] = value;
    }
    print(arr,size);
   
}

