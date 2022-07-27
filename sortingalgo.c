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


    
  return 0 ;
}