/*POINTERS/ARRAYS*/

#include <stdio.h>

// int main()
// {
//     int ages[4] = {25, 50, 75, 100};
//     printf("%zu bytes\n", sizeof(ages));

//     for(int i = 0; i < 4; i++){
//         printf("%d\n", &ages[i]);
//     }
//     return 0;
// }

// int main(){
//     int mynumbers[4] = {25, 50, 75, 100};
//     int i;
//     for(i = 0; i < 4; i++){
//         printf("%p\n", &mynumbers[i]);
//     }
//     printf("%zu", sizeof(mynumbers));
// }

// int main(){
//     int mynumbers[4] = {25, 50, 75, 100};
//     printf("%p\n", mynumbers);
//     printf("%p\n", &mynumbers[0]);
//     printf("%d\n", *mynumbers);
//     printf("%d\n", *(mynumbers + 1));
//     printf("%d\n", *(mynumbers + 2));
//     for (int i = 0; i < 4; i++)
//     {
//         printf("\nNew Loop: %d\n", *(mynumbers + i));
//     }

// }

int main()
{
    int num = 5; // assign num the value of 5
    int *ptr = &num; // assign ptr the memory address of num
    *ptr = 20; // i dereference meaning i change from storing the address of num to the value of num in ptr?

    printf("%d\n", num); // print num which is 20?
}