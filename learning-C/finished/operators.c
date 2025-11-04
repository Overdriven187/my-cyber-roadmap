#include <stdio.h>
#include <stdbool.h>
/*Operators*/

// int main(){
//     int sum1 = 14 + 16;
//     printf("%i\n", sum1);
//     int sum2 = sum1 + 10;
//     printf("%i\n", sum2);
//     int sum3 = sum2 + sum2;
//     printf("%i", sum3);
//     return 0;
// }

// int main(){
//     int x = 10;
//     int y = 3;

//     printf("sum: %d\n", x + y);
//     printf("division: %d\n", x / y);
//     printf("multip:%d\n", x * y);
//     printf("substr: %d\n", x - y);
//     printf("modulus: %d\n", x % y);

//     //increment/decrement
//     int z = 5;
//     ++z;
//     printf("incremented 5: %d\n", z);
//     --z;
//     printf("decremented 6: %d\n", z);
//     return 0;
// }

//real life example incr/decr

// int main(){
//     int peopleInRoom = 0;
//     //3 people enter
//     peopleInRoom++;
//     peopleInRoom++;
//     peopleInRoom++;
//     printf("%d people joined\n", peopleInRoom);
//     //1 person leaves
//     peopleInRoom--;
//     printf("%d people are left", peopleInRoom);
//     return 0;
// }

/*assignment operators*/

// int main(){
//     int x = 10; //assign 10 to x using the =
//     printf("%d\n", x);
//     int x2 = 20;
//     printf("%d\n", x2);
//     x2 += 5; //5 is additioned onto x2
//     printf("%d", x2);
//     return 0;
// }

//real life example

// int main(){
//     int savings = 100;
//     printf("%d current savings\n", savings);
//     savings += 50;
//     printf("%d new savings", savings);
//     return 0;
// }

/*comparison operators*/

// int main(){
//     int x = 5;
//     int y = 6;
//     printf("%d", x >= y);    //--> result 0 = false; result 1 = true

//     return 0;
// }

//real life example

// int main(){
//     int age = 18;
//     printf("%d\n", age >= 18);
//     printf("%d\n", age < 18);
//     return 0;
// }

//compare if passlength 5 is greater or equal to 8; is passlength smaller than 8
// int main(){
//     int passlength = 5;
//     printf("%d\n", passlength >= 8);
//     printf("%d\n", passlength < 8);
//     return 0;
// }

/*logical operators*/

// int main(){
//     bool isLoggedIn = true;
//     bool isAdmin = false;
    
//     printf("regular user: %s\n", (isLoggedIn && !isAdmin) ? "true": "false");
//     printf("Has access: %s\n", (isLoggedIn || isAdmin) ? "true": "false");
//     printf("not logged in: %s\n", (!isLoggedIn) ? "true" : "false");
//     return 0;
// }

/*operator precedence*/

// int main(){
//     int result1 = 2 + 3 * 4;
//     int result2 = (2 + 3) *4;
//     int result3 = 10 - 2 + 5;
//     int result4 = 10 - (2 + 5);

//     printf("%d\n", result1);
//     printf("%d\n", result2);
//     printf("%d\n", result3);
//     printf("%d\n", result4);
//     return 0;
// }