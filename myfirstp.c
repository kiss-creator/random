#include<stdio.h>

//main datatypes in C that i most of the time use
//int, float, char , auto , bool  

// Now i am goonna build a simple calculator that just do +, -, *, / but main reason i build this calculator is i learn many things in c with this program -> variables, data types, contolflow, operators and pbl method 

int main(void) {
    printf("Welcome to simple calculator program!\n") ;


    float first , second , result  ;
    char operator ; 

//I create infinie while loop here bcz 1 is always true 
    while(1)  { 
        printf("Enter first number : \n") ;
        if(scanf("%f", &first) != 1) {
            printf("Error! Enter number only!\n") ;
            while(getchar() != '\n') ;
            continue ; 
        }
        printf("Enter your operator (+, -, * , /)  : \n") ;
        scanf(" %c", &operator) ;

        if(operator != '+' &&
                operator != '-' &&
                operator != '*' &&
                operator != '/') {
            printf("ERROR! Enter valid operator\n") ;
            continue ;
        }

        printf("Enter second number : \n") ;
        if(scanf("%f", &second) != 1) {
            printf("Error! Enter number only!\n") ;
            while(getchar() != '\n') ;
            continue ;
        }

        if(operator == '/' && second == 0) {
            printf("ERROR! divion by zero\n") ;
            continue ;
        }

        //here is main logic part of this fucking bullshit program!
        if(operator == '+') {
            result = first + second ;
        } else if(operator == '-') {
            result = first - second ;
        } else if(operator == '*') {
            result = first * second ;
        } else {
            result = first / second ;
        }
        printf("Result : 1st num: %6.1f (%c) 2nd num: %6.1f is : %6.1f\n", first , operator, second, result) ;
        break  ;
    }
     return 0 ;
}
