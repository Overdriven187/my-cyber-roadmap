#include <stdio.h>

// int main(){
//     int sum = 0;
//     for (int i = 0; i <= 5; i++){
//         printf("%d\n", i);
//         sum = sum + i;
//     }
//     printf("sum is %d", sum);
// }

// int main(){
//     int i;
//     for (i = 5; i > 0; i--)
//     {
//         printf("%d\n", i);
//     }

// }

// int main()
// {
//     int sum = 0;
//     for (int i = 1; i <= 100; i++)
//         if (i % 2 == 0)
//         {
//             sum = sum + i;
//         }
//     printf("Sum of even numbers: %d\n", sum);
//     return 0;
// }

// int main(){
//     int sum = 0;
//     for (int i = 0; i <= 100; i++)
//     if (i % 2 != 0)
//     {
//         sum = sum + i;
//     }
//     printf("Sum of odd numbers: %d\n", sum);
//     return 0;
// }

/*nested loops*/

// int main()
// {
//     int i, j;
//     for (i = 1; i <= 2; ++i)
//     {
//         printf("outer: %d\n", i);

//         for (j = 1; j <= 3; ++j)
//         {
//             printf(" Inner: %d\n", j);
//         }
//     }
//     return 0;
// }

// int main()
// {
//     int i, j;
//     for (i = 1; i <= 3; i++)
//     {
//         for (j = 1; j <= 3; j++)
//         {
//             printf("%d ", i * j);
//         }
//         printf("\n");
//     }

// }

// int main()
// {
//     int i, j;

//     for (i = 1; i <= 5; i++)
//     {
//         for (j = 6; j > i; j--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }

/*real life examples*/

// int main(){
//     int i;
//     for (i = 2; i <= 512; i *= 2){
//         printf("%d\n", i);
//     }
// }

// int main()
// {
//     for (int num = 1; num <= 5; num++)
//     {
//         for (int i = 1; i <= 10; i++)
//         {
//             printf("%d x %d = %d\n", num, i, num * i);
//         }
//         printf("\n");
//     }

//     return 0;
// }