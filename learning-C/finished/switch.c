#include <stdio.h>

// int main(){
//     int day = 72;

//     switch (day)
//     {
//         case 1:
//             printf("monday");
//             break;
//         case 2:
//             printf("tuesday");
//             break;
//         case 3:
//             printf("wednesday");
//             break;
//         case 4:
//             printf("thursday");
//             break;
//         case 5:
//             printf("friday");
//             break;
//         case 6:
//             printf("saturday");
//             break;
//         case 7:
//             printf("sunday");
//             break;
//         default:
//             printf("no weekday");
//     }
//     return 0;
// }

int main(){
    int choice = 1;
    char a[] = "\nenjoy your drink";
   switch (choice)
   {
    case 1:
        printf("water is 1$%s", a);
        break;
    case 2:
        printf("cola is 1.5$%s", a);
        break;
    case 3:
        printf("juice is 2$%s", a);
        break;
    case 4:
        printf("coffee is 2.5$%s", a);
        break;
    default:
        printf("Invalid selection. Please try again");
        break;
   } 
   return 0;
}