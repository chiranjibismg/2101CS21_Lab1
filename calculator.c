#include <stdio.h>
#include <math.h>
//2101CS21
//CHIRANJBI PRADHAN

int fact(int number) // function that finds the factorial of and integer number 
{   
    int f =1 ;
    for(int i=1;i<=number;i++){    
      f=f*i;    
  }

  return f ; 
}

int main() {
    

    while (1)
    {
    printf("Enter an operation : \n");  // Choices are listed here
    printf("1.Addition\n") ;
    printf("2.Substraction\n") ;
    printf("3.Multiplication\n") ;
    printf("4.Division\n") ;
    printf("5.Factorial\n") ;
    printf("0.Exit\n") ;
    printf("(Enter the number corresponding to the integer) \n" ); 
    
    int option ;
    scanf("%d", &option); // imputs the option 
    
    
    if ( option==1){          // additon case
      printf("Enter 2 numbers to be added\n") ;
      double x, y ;
      scanf("%lf %lf",&x,&y) ;
      printf("Sum is %lf\n",(x+y))  ;

    }

    else if (option==2){ // substraction case
      printf("Enter 2 numbers to be substracted\n") ;
      double x , y; 
      scanf("%lf %lf",&x,&y) ;
      printf("Difference is %lf\n",(x-y)) ;
      
    }
    else if (option==3){ // multiplication case
    printf("Enter 2 numbers to be multiplied\n") ;
    double x , y; 
    scanf("%lf %lf",&x,&y) ;
    printf("Product is %lf\n",(x*y)) ;
      
    }

    else if (option==4){ // division case
    printf("Enter 2 numbers to be divided\n") ;
    double x , y; 
    scanf("%lf %lf",&x,&y) ;
    printf("Division is %lf\n",(x/y)) ;
      
    }
    else if (option==5){ // factorial case 
    printf("Enter number whose factorial is to be found\n") ;
    int x  ;
    scanf("%d",&x) ;
    printf("Factorial is %d\n",(fact(x))) ;
      
    }

    else if (option==0){         // exit conditon
      printf("Thank You. Exiting now.") ;
      return 0 ;
    }
    
    
    else {   //error case 
      printf("Wrong option selected please try again.\n") ; 
    }

    }

  return 0 ;
}