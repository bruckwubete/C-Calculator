#include <stdio.h>
#include <stdlib.h>

void printGreeting(void){
    printf("\
        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\
        ~                    Welcome to C-Calculator                  ~ \n\
        ~ This calculator will do a varaity of functions for you.     ~ \n\
        ~ Please follow the following steps.                          ~ \n\
        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
    );
}

int main(){
    printGreeting();
    return 0;
}
