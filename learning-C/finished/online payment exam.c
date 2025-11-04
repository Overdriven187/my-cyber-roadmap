/*online payment exam*/
#include <stdio.h>
#include <stdbool.h>

int main(){
    float cartTotal = 75.00;
    float balance = 100.00;
    bool isPrimeMember = false;
    const float freeShippingLimit = 50.00;
    const float discount = 0.10;
    const float balanceWarning = 20.00;
    float newPriceAfterDiscount = cartTotal * (1.0f - discount);

    if (balance < newPriceAfterDiscount){
        printf("Payment failed: insufficient funds.\n");
    }
    else{
      printf("Payment successfull!\n");
          if (isPrimeMember == true)
        {
            printf("You are a prime member and receive a discount of 10%%\n");            
            printf("Price without discount: %.2f$\n", cartTotal);
            printf("Price with discount applied %.2f$\n", newPriceAfterDiscount);
            printf(isPrimeMember || newPriceAfterDiscount >= freeShippingLimit ? "Free shipping\n" : "Shipping cost: 5.00$");
            float newBalance = balance - newPriceAfterDiscount;
            printf(newBalance > 0 ? "no funds, your account is inactive\n" : "funds are avilable, your account is active\n");
            if (newBalance < 20)
            {
                printf("Low Balance warning!\n");
            }
            else{
                printf("New balance %.2f$\n", newBalance);
            }
            
        }
        else{
            float newBalance = balance - cartTotal;
            printf("you are not a prime member\n");
            printf("your cart total price is %.2f$\n", cartTotal);
            printf(cartTotal >= freeShippingLimit ? "Free shipping applied\n" : "Shipping cost: 5.00$\n");
            if (newBalance < balanceWarning)
            {
                printf("Low Balance warning!\n");
            }
            else{
                printf("thanks for your purchase. your new balance is %.2f$\n", newBalance);
            }

        }
    }
    return 0;
}