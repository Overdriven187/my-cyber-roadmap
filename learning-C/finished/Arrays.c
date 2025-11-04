#include <stdio.h>
#include <string.h>
// array and sizeof calc
/*int main()
{
    int numbers[] = {1, 10, 20, 30, 12, 53, 542, 123};

    char grades[] = {'a', 'b', 's'};

    char names[] = "test";

    // calc size of array for numbers
    // printf("%d\n", sizeof(numbers));
    //  printf("%d", sizeof(numbers[0]));

    int size = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }
    // printf("%d", numbers[0]);
}*/

// 2D arrays
/*int main()
{
    char numpad[][3] = { {'1', '2', '3'},
                         {'4', '5', '6'},
                         {'7', '8', '9'},
                         {'*', '0', '#'} };

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%c ", numpad[i][j]);
        }
        printf("\n");
    }
}*/

// string arrays
// int main()
// {
//     char fruits[][10] = {"apple",
//                          "banana",
//                          "coconut"};
//     int size = sizeof(fruits) / sizeof(fruits[0]);

//     fruits[0][0] = 'e';
//     fruits[0][4] = 'A';

//     fruits[1][0] = 'a';
//     fruits[1][5] = 'B';

//     fruits[2][0] = 't';
//     fruits[2][6] = 'c';
//     for (int i = 0; i < size; i++)
//     {
//         printf("%s\n", fruits[i]);
//     };
// }

// example
//  int main()
//  {

//     char names[4][25] = {0};
//     int rows = sizeof(names) / sizeof(names[0]);
//     for (int i = 0; i < rows; i++)
//     {
//         printf("enter a name: ");
//         fgets(names[i], sizeof(names[i]), stdin);
//         names[i][strlen(names[i]) - 1] = '\0';
//     }
//     for(int i = 0; i < rows; i++){
//         printf("%s\n", names[i]);
//     }
// }

// 3d arrays
int main()
{
    int arr[2][2][3] = {
        {
            {1, 2},
            {3, 4}
        },
        {
            {5,6},
            {7,8}
        }
    };

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("%d ", arr[i][j][k]);
            };
        }
    }
}