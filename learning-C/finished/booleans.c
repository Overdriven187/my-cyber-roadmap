#include <stdio.h>
#include <stdbool.h>

// int main(){
//     bool isProgrammingFun = true;
//     bool isFishTasty = false;
//     printf("%d\n", isProgrammingFun);
//     printf("%d\n", isFishTasty);
//     return 0;
// }

//compare vars

// int main(){
//     int x = 10;
//     int y = 111;
//     printf("%d", x >= y);
//     return 0;
// }

//real life example: is a person old enough to vote

int main(){

    int myage = 24;
    int votingage = 19;

    //solution 1
    // if (myage >= votingage)
    // {
    //     printf("true");
    // }
    // else{
    //     printf("false");
    // }
    
    //solution 2
    printf("%s", myage >= votingage ? "true" : "false");
    return 0;
}