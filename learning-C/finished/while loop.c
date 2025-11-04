#include <stdio.h>

// int main(){
//     int i = 0;
//     while (i < 50000)
//     {
//         printf("%d\n", i);
//         i++;
//     }

// }

// int main(){
//     int countdown = 3;

//     while (countdown > 0)
//     {
//         printf("%d\n", countdown);
//         countdown--;
//     }
//     printf("habbi new year");
//     return 0;

// }

// int main(){
//     int i = 1;

//     do
//     {
//         printf("%d\n", i);
//         i++;
//     } while (i < 5);

// }

// int main(){
//     int number;

//     do
//     {
//         printf("enter a positive number: ");
//         scanf("%d", &number);
//     } while (number > 0);

// }

// int main(){
//     int countdown = 1;

//     while (countdown > 0)
//     {
//         printf("%d\n", countdown);
//         countdown--;
//     }
//     printf("happy new year");
//     return 0;
// }

// int main(){
//     int i = 1;
//     while (i <= 10)
//     {
//         printf("%d\n", i);
//         i += 2;
//     }

// }

// int main(){
//     int numbers = 12345;
//     int revNumbers = 0;
//     while (numbers)
//     {
//         revNumbers = revNumbers * 10 + numbers % 10;
//         numbers /= 10;
//     }
//     printf("%d\n", revNumbers);

// }

// int main()
// {
//     int dice = 5;

//     while (dice <= 6)
//     {
//         if (dice < 6)
//         {
//             printf("no yatzy\n");
//         }
//         else
//         {
//             printf("yatzy!\n");
//         }
//         dice = dice + 1;
//     }
// }

/*atm withdrawm sim*/

int main()
{
    float balance = 100.00;
    float withdrawal;
    const int correctPin = 1234;
    int enteredPin;
    int attempts = 0;

    while (attempts < 3)
    {
        printf("please enter your 4 digit Bank Pin: ");
        scanf("%d", &enteredPin);
        if (enteredPin == correctPin && balance > 0)
        {
            printf("your pin is correct. Access granted\n");
            while (balance > 0)
            {
                printf("your current bank balance is %.2f$\n", balance);
                printf("enter amount to withdraw: ");
                scanf("%f", &withdrawal);
                if (withdrawal < 0)
                {
                    printf("Amount Invalid!\n");
                }
                else if (withdrawal == 0)
                {
                    printf("invalid amount\n");
                    break;
                }

                else if (withdrawal > balance)
                {
                    printf("Insufficient Funds!\nPayout amount: %.2f$\nAvailable balance: %.2f$\n", withdrawal, balance);
                }
                else
                {
                    balance = balance - withdrawal;
                    printf("Payout of %.2f$ successful\n your new bank balance is %.2f$\n", withdrawal, balance);
                    if (balance == 0)
                    {
                        printf("bank account empty. thanks for using our service\n");
                        break;
                    }
                    
                }
            }
            break;
        }
        else if (enteredPin != correctPin && balance > 0)
        {
            attempts++;

            if (attempts == 3)
            {
                printf("Account locked. Please contact your bank.");
            }
            printf("Wrong PIN. Try again\n");
        }

    }
}