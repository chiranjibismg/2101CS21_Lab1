#include <stdio.h>
//2101CS21
//CHIRANJBI PRADHAN



int main() {
    

    while (1)
    {
    printf("Enter an operation : \n");
    printf("1.Addition\n") ;
 
    printf("0.Exit\n") ;
    
    int option ;
    scanf("%d", &option);
    
    
    if ( option==1){
      printf("Enter 2 numbers to be added\n") ;
      double x, y ;
      scanf("%lf %lf",&x,&y) ;
      printf("Sum is %lf\n",(x+y))  ;

    }


    else if (option==0){
      printf("Thank You. Exiting now.") ;
      return 0 ;
    }
    
    
    else {
      printf("Wrong option selected please try again.\n") ; 
    }

    }

  return 0 ;
}