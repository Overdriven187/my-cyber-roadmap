#include <stdio.h>

// int main(){
//     int myNum;
//     int myChar;

//     printf("Type a number and a character and press enter: \n");
//     scanf("%d %c", &myNum, &myChar);
//     printf("your number is : %d\n", myNum);
//     printf("your character is: %c", myChar);
// }

int main(){
    char firstName[30];
    printf("enter your first name: \n");
    fgets(firstName, sizeof(firstName), stdin);
    //scanf("%s", firstName);
    printf("hello %s", firstName);
}