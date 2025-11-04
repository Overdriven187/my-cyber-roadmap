#include <stdio.h>
//constants
int main(){
    const int MYNUM = 15;
    //const MYNUM = 10; --> error because a const is a value that is read only
    printf("%i", MYNUM);
    return 0;
}