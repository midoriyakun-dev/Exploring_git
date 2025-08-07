//include header files

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//function prototypes
                      
//Main branch
//Use the CLI arguments to run the program
// Explore the return type and to retrieve the return type echo $
//Explore the corner cases


/*Create a simple Function to explore the possibilities of C
Sub_function body
 Try to implement a simple calc , 
                    as well a recursive func, 
                    Binary search , 
                    array input, 
                    Number compare, 
                    Capitalise, 
                    PARAMETR = N rotations reverse the string Maybe use the CLA in this scene for step or  circular roration  
                    pointer practice
                    some patterns
                    mem space allotment
                    linked list
                    stack
                    ques
                    tries -  3d arrays???
                    matrix
  */
  //int argc , char *argv[N]
  int main (){

    int a = 0 ; 
    int b = -1 ;
    int c = +1 ;

    const int A = 2 ; 
    char *p;
    char * first_name = NULL ;
    char * last_name = NULL ;
/*
    typedef struct day_type{

        string input;              //check and inmlement a map of bad good meh to 0 ,1, 2 and execute fucn for each conditional using different DS
        int map;

    } day_type;
*/
    float b = 3.14 ; 
    int day_type;
    
    A++; a++; b--; ++c; --a;

    printf("%i \n %i \n %i \n %i \n" , a, b, c ,A );
    printf("%p" , &p );
    printf("%d" , *p ); 
    printf("%s", first_name );

    printf("So my friend let's begin , Hi, hello world");
    printf("Whats your name?....   :- ");
    scanf("%s %s" , first_name , last_name);
    printf("Cool, good to know that ..... anyways .... Hello %s %s /n" , first_name,last_name );
    printf("So how was your day %s",first_name);
    scanf("%i",day_type);


    switch (day_type){
        case 0 :
        printf("Here's a linked list implementation");
        //linked list
            break;

        case 1 : 
        printf("Here's a Queqe implementation");
        //
            break;

        case 2 : 
        printf("here's a stack implementaion");
        //
            break;

        default : "Come on bro I am an toddle u know that so why input error now ??"
    }

    printf("How's u feeling rn bruh??");


    return 0;

  }