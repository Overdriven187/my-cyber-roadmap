//Movie ticket system exam
/*
check if person is allowed to go in the movie
&
if he gets teh discountprice
*/
#include <stdio.h>
#include <stdbool.h>

int main(){
    //vars
    int age = 16;
    int ticketprice = 12;
    int discountprice = 8;
    int movieAgeLimit = 12;

    printf("you are %d years old\n", age);
    printf("%s", age >= movieAgeLimit ? "you are old enough to see this movie\n" : "sorry you are to young for this movie\n");
    printf("%s", (age >= movieAgeLimit && 18 >= age) ? "you get the discount\n" : "no discount\n");
    return 0;
}