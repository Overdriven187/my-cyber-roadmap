/*Fitness system exam*/
#include <stdio.h>
#include <stdbool.h>

int main(){
    int age = 17;
    bool isMember = true;
    bool hasSaunaPass = true;
    float entryPrice = 15.00;
    const float memberDiscount = 0.20;
    const int minAge = 16;
    float finalprice = isMember ? entryPrice * (1.0f - memberDiscount) : entryPrice;

    if (age >= minAge)
    {
        printf("access granted\n");
        if (isMember)
        {
            printf("you are a member and you receive a discount of 20%%\n");
            printf("your entry fee is: %.2f$\n", finalprice);
        }
        else{
            printf("please pay the normal price of %.2f\n", entryPrice);
        }
        printf(hasSaunaPass ? "sauna access granted\n" : "no sauna access\n");
        printf(finalprice > 0 ? "account active\n" : "account inactive\n");
        printf(isMember && age < 18 ? "junior member benefits applied\n" : "no junior benefits\n");
    }
    else{
        printf("access denied: too young\n minimum age is %i", minAge);
    }
    return 0;
}