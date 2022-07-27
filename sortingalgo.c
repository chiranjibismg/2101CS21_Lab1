#include <stdio.h>
#include <math.h>
//2101CS21
//CHIRANJBI PRADHAN

  
void swap(int *xp, int *yp) // swapping fucntion 
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


int partition (int arr[], int low, int high)  // partition function for quick sort 
{ 
    int pivot = arr[high]; // pivot 
    int i = (low - 1); // Index of smaller element and indicates the right position of pivot found so far
  
    for (int j = low; j <= high - 1; j++) 
    { 
        // If current element is smaller than the pivot 
        if (arr[j] < pivot) 
        { 
            i++; // increment index of smaller element 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 


void quickSort(int arr[], int low, int high) // function which implements quick sort 
{ 
    if (low < high) 
    { 
        /* pi is partitioning index, arr[p] is now 
        at right place */
        int pi = partition(arr, low, high); 
  
        // Separately sort elements before 
        // partition and after partition 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 


void merge(int arr[], int l, int m, int r) //function that  merges the two array 
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
void mergeSort(int arr[], int l, int r) // function that uses recursion to implement merge sort 
{
    if (l < r) {
        int m = l + (r - l) / 2;
        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
 
void bubbleSort(int arr[], int n) // function that implements bubble sort
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}
void selectionSort(int arr[], int n)// function that implements selection sort 
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
void insertionSort(int arr[], int n) // function that implements insertion sort
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
    printf("5.Quick Sort\n") ;
  
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
    
    else if (option ==2)
    {
      selectionSort(a,n) ;
      printf("Sorted array is :- ")  ;
      for ( int i =0 ;i<n ;i++)
      {
        printf("%d ",a[i]) ;
      }
      printf("\n") ;
    }

    else if (option ==3)
    {
      bubbleSort(a,n) ;
      printf("Sorted array is :- ")  ;
      for ( int i =0 ;i<n ;i++)
      {
        printf("%d ",a[i]) ;
      }
      printf("\n") ;
    }

    else if (option ==4)
    {
      mergeSort(a,0,n-1) ;
      printf("Sorted array is :- ")  ;
      for ( int i =0 ;i<n ;i++)
      {
        printf("%d ",a[i]) ;
      }
      printf("\n") ;
    }

    
    else if (option ==5)
    {
      quickSort(a,0,n-1) ;
      printf("Sorted array is :- ")  ;
      for ( int i =0 ;i<n ;i++)
      {
        printf("%d ",a[i]) ;
      }
      printf("\n") ;
    }

    else{

      printf("Wrong input .Please try again \n") ;
    }


    
  return 0 ;
}