#include <stdio.h>
#include <math.h>
//2101CS21
//CHIRANJBI PRADHAN

  
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
 
    /* create temp arrays */
    int L[n1], R[n2];
 
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
    
        int m = l + (r - l) / 2;
 
        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
 
        merge(arr, l, m, r);
    }
}
 
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
  
  
    for (i = 0; i < n-1; i++)
    {
   
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
  
       
        swap(&arr[min_idx], &arr[i]);
    }
}
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n ; 
 
    printf("Enter the size of array to be sorted \n") ;
    scanf("%d",&n) ;
    int a[n] ;
    printf("Enter the elements of the array \n") ;
    for ( int i =0 ;i<n ;i++)
    {
      scanf("%d",&a[i]) ;
    }
    printf("Select the sorting algorithm you want to implement\n") ;
    printf("1.Insertion Sort\n") ;
    printf("2.Selection Sort\n") ;
    printf("3.Bubble Sort\n") ;
    printf("4.Merge Sort\n") ;
  
    int option ;
    scanf("%d",&option) ;
    
    
    printf("Unsorted array is :- ")  ;
    for ( int i =0 ;i<n ;i++)
    {
      printf("%d ",a[i]) ;
    }

    printf("\n") ;


    if (option ==1)
    {
      insertionSort(a,n) ;
      printf("Sorted array is :- ")  ;
      for ( int i =0 ;i<n ;i++)
      {
        printf("%d ",a[i]) ;
      }
      printf("\n") ;
    }
    
    if (option ==2)
    {
      selectionSort(a,n) ;
      printf("Sorted array is :- ")  ;
      for ( int i =0 ;i<n ;i++)
      {
        printf("%d ",a[i]) ;
      }
      printf("\n") ;
    }

    if (option ==3)
    {
      bubbleSort(a,n) ;
      printf("Sorted array is :- ")  ;
      for ( int i =0 ;i<n ;i++)
      {
        printf("%d ",a[i]) ;
      }
      printf("\n") ;
    }

    if (option ==4)
    {
      mergeSort(a,0,n-1) ;
      printf("Sorted array is :- ")  ;
      for ( int i =0 ;i<n ;i++)
      {
        printf("%d ",a[i]) ;
      }
      printf("\n") ;
    }


    
  return 0 ;
}