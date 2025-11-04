#include <stdio.h>
#include <stdbool.h>
int main(){
    /*normal if*/
    // if (20 > 19){
    //     printf("20 is greater than 19");
    // }
    // int x = 20;
    // int y = 2;
    // if (x > y){
    //     printf("x is greater than y");
    // }

    /*else*/
    // int time = 20;
    // if (time < 18){
    //     printf("good day");
    // }
    // else{
    //     printf("good evening");
    // }

    /*else if*/
    // int time = 22;
    // if (time < 10){
    //     printf("good morning");
    // }
    // else if (time < 20){
    //     printf("good day");
    // }
    // else {
    //     printf("good evening");
    // }
    
    /*ternary operator*/
    //normal if...else test
    // int time = 20;
    // if (time < 18){
    //     printf("good day");
    // }
    // else{
    //     printf("good evening");
    // }

    //instead of long statement make use of 1 line ternary operator
    // int time = 20;
    // printf("%s", (time < 18) ? "good day" : "good evening"); //version 1
    // (time < 18) ? printf("good day") : printf("good evening"); //version 2
    
    /*nested if*/
    // int x = 15;
    // int y = 25;

    // if (x > 10){
    //     printf("x is greater than 10\n");
    //     if (y > 20){
    //         printf("y is also greater than 20\n");
    //     }
    // }

    /*real life example of nested if*/
    // int age = 20;
    // bool isCitizen = true;

    // if (age >= 18){
    //     printf("you are old enough to vote\n");

    //     if (isCitizen){
    //         printf("and you are a citizen. you can vote!\n");
    //     }
    //     else {
    //         printf("you are old enough but not a citizen!\n");
    //     }
    // }
    // else{
    //     printf("you are not old enough to vote!\n");
    // }

    /*logical operators with if..else*/

    //AND &&
    // int a = 200;
    // int b = 33;
    // int c = 500;

    // if (a > b && c > a){
    //     printf("both conditions are true\n");
    // }

    //OR ||

    // int a = 200;
    // int b = 33;
    // int c = 500;

    // if (a > b || a > c){
    //     printf("at least on of the conditions is true");
    // }

    // NOT !   IT REVERSES A CONDITIONS
    // int a = 33;
    // int b = 222;

    // if (!(a > b))
    // {
    //     printf("a is NOT greater than b");
    // }
    // else {
    //     printf("a is greater than b");
    // }

    /*real life example of logical operator use*/
    // bool isLoggedIn = true;
    // bool isAdmin = true;
    // int securityLevel = 4; // 1 is highest level

    // if (isLoggedIn && (isAdmin || securityLevel <= 2)){
    //     printf("access granted");
    // }
    // else {
    //     printf("access not granted");
    // }

    /*REAL LIFE EXAMPLES*/
    // int doorCode = 1337;

    // if (doorCode == 1337){
    //     printf("door opening please enter...");
    // }
    // else{
    //     printf("code incorrect please try again");
    // }

    // int mynum = 0;
    
    // if (mynum > 0){
    //     printf("number is positive");
    // }
    // else if (mynum < 0){
    //     printf("number is negative");
    // }
    // else{
    //     printf("the number is 0");
    // }

    // int myage = 25;
    // int votingage = 18;

    // if (myage >= votingage){
    //     printf("you are old enough. you can vote");
    // }
    // else{
    //     printf("you are to young. you can not vote");
    // }

    // int age = 17;
    // int citizenship = false;

    // if (age >= 18){
    //     printf("you are old enough to vote\n");
    //     if (citizenship){
    //         printf("you are also a citizen. you can vote\n");

    //     }
    //     else {
    //         printf("you are old enough but not a citizen. you can not vote\n");
    //     }
    // }
    // else{
    //     printf("you are not old enough to vote");
    // }

    // int mynum = 6;

    // if (mynum % 2 == 0){
    //     printf("%d is even", mynum);
    // }
    // else {
    //     printf("%d is odd", mynum);
    // }

    //check temperature (celsius)
    
    // int temperature = 10;
    // if (temperature < 0){
    //     printf("its fucking freezing");
    // }
    // else if (temperature < 20)
    // {
    //     printf("its cool");
    // }
    // else{
    //     printf("its warm");
    // }
    
    //system access control
    
    bool isLoggedIn = true;
    bool isAdmin = true;
    int securityLevel = 3; //1 is highest
    if (isLoggedIn && (isAdmin || securityLevel <= 2)){
        printf("access granted\n");
    }
    else{
        printf("access denied");
    }
    return 0;
}

