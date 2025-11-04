/*EXAM*/
#include <stdio.h>
#include <stdbool.h>

int main(){
    float balance = 500.00;
    float withdrawAmount = 451.00;
    bool isVerified = true;
    int age = 18;
    const float minBalance = 50.00;

    if (isVerified && (age >= 18 || withdrawAmount <= balance)){
        printf("you are verified\n");
        printf("your current balance is %.2f$\n", balance);
        //calculation
        float new_balance = balance - withdrawAmount;
        printf("Withdrawal of %.2f$ successful. New balance: %.2f$\n", withdrawAmount, new_balance);
        printf(new_balance > 0 ? "account active" : "account inactive");
        if (new_balance < minBalance)
        {
            printf("\nWarning: balance is below the minmum limit of %.2f", minBalance);
        }
        
    }
    else{
        printf("Acess denied: account is not verified");
    }
    return 0;    
}