#include <stdio.h>

//char a = 1, b = 2, c = 3;
//
//int main(){
//    printf("%i%i%i", a, b, c);
//    return 0;
//}

//scientific numbers
//float f1 = 11e3;
//double d1 = 12e4;
//
//int main(){
//    printf("%f\n", f1);
//    printf("%lf", d1);
//    return 0;
//}

//set decimal precision
//float f1 = 3.5;
//double d1 = 19.99;
//
//int main(){
//    printf("%f\n", f1); //default
//    printf("%.1f\n", f1);
//    printf("%.2f\n", f1);
//    printf("%.0lf", d1);
//    return 0;
//}

//memory size
//int myInt;
//float myFloat;
//double myDouble;
//char myChar;
//
//int main(){
//    printf("bites for int: %zu\n", sizeof(myInt));
//    printf("bites for float: %zu\n", sizeof(myFloat));
//    printf("bites for double: %zu\n", sizeof(myDouble));
//    printf("bites for char: %zu", sizeof(myChar));
//    return 0;
//}

//real life example of memory size
//int main(){
//    int items = 50;
//    float cost_per_item = 9.99;
//    float total_cost = items * cost_per_item;
//    char currency = '$';
//    printf("number of items %i\n", items);
//    printf("cost per item %.2f\n", cost_per_item);
//    printf("total cost = %.2f %c\n", total_cost, currency);
//    return 0;
//}

//Type conversion
// int main(){
//     //implicit conversion
//     float f1 = 1;
//     printf("%f\n", f1);
//     int i1 = 1.11;
//     printf("%i\n", i1);
//     return 0;
// }

// int main(){
//     //implicit conversion
//     float sum = (float) 5 / 2;
//     printf("explicit conversion: %.1f\n", sum);

//     //explicit conversion
//     int sum1 = 5;
//     int sum2 = 2;
//     float summ = (float) 5 / 2;
//     printf("implicit conversion: %.1f", summ);
//     return 0;
// }

//real life example type conversion

// int main(){
//     int maxScore = 500;
//     int userScore = 187;
//     float percentage = (float) maxScore / userScore;
//     printf("the user percentage is: %.2f", percentage);
//     return 0;
// }

//more types
// int main(){
//     int normalInt = 10000;
//     double normalDouble = 3.14;

//     short int small = 100;
//     unsigned int count = 25;
//     long int big = 1234567890;
//     long long int veryBig = 9223372036854775807;
//     unsigned long long int huge = 18446744073709551615U;
//     long double precice = 3.141592653589793238;
//     printf("norm int: %d\n", normalInt);
//     printf("norm doub: %d\n", normalDouble);
//     printf("small: %hd\n", small);
//     printf("count: %u\n", count);
//     printf("big %ld\n", big);
//     printf("very big: %lld\n", veryBig);
//     printf("huge: %llu\n", huge);
//     printf("precise: %Lf\n", precice);
//     return 0;

// }

//check size of more types

int main(){
    printf("size of int: %zu bytes\n", sizeof(int));
    printf("size of double: %zu bytes\n", sizeof(int));
    printf("size of short int: %zu bytes\n", sizeof(short int));
    printf("size of unsigned int: %zu bytes\n", sizeof(unsigned int));
    printf("size of long int: %zu bytes\n", sizeof(long int));
    printf("size of long long int: %zu bytes\n", sizeof(long long int));
    printf("size of unsigned long long int: %zu bytes\n", sizeof(unsigned long long int));
    printf("size of long double: %zu bytes\n", sizeof(long double));
    return 0;
}