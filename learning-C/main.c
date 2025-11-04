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


int main(){
    int mynumbers[4] = {25, 50, 75, 100};
    printf("%p\n", mynumbers);
    printf("%p\n", &mynumbers[0]);
}