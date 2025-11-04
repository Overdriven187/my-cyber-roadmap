#include <stdio.h>

/*declare variables either outside or inside main
if declared only outside and not inside or elsewhere then 
the value wont change
if declared after first declaration then value will change to latest
int myNum = 15;
float myFloat = 19.99;
char myChar = 'D';*/

int main(){
    /*normal prints of types
    printf("%i\n", myNum);
    printf("%f\n", myFloat);
    printf("%c\n", myChar);*/
    
    /*combination
    printf("My age is %i and my letter is %c\n", myNum, myChar);
    print without storing
    printf("my age is %i and my letter is %c", 15, 'D');*/

    /*calculation of int
    int x = 5;
    int y = 111;
    int sum = x + y;
    printf("%d", sum);*/

    /*declare and calc multiple variables of same type
    int x = 5, y = 10, z = 50;
    printf("%d", x + y + z);*/
    
    /*same value to multiple variables of same type
    int x, y, z;
    x = y = z = 50;
    printf("%d", x, y, z);*/
    
    /*real life example of storing data
    int studentID = 15;
    int studentAge = 23;
    float studentFee = 19.99;
    char StudentGrade = 'B';

    printf("Student id: %d\n", studentID);
    printf("Student age: %d\n", studentAge);
    printf("Student Fee: %f\n", studentFee);
    printf("Student grade: %c\n", StudentGrade);*/

    /*real life example of calculate area of rectangle
    int length = 4;
    int width = 6;
    int area;
    area = 6 * 4;

    printf("the Length is: %d\n", length);
    printf("the Width is: %d\n", width);
    printf("the calculated are is: %d\n", area);*/
    
    return 0;
}
