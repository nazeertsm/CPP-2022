#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    // 1.print Hello Students
    printf("Hello Students");
    printf("\n");// for next line

    // 2.print Hello in the first line and Students in the second line.
    printf("Hello\nStudents\n");

    // 3. print “MySirG” on the screen. (Remember to print in double quotes)
    printf("\"MySirG\"");
    printf("\n");// for next line

    /*4. WAP to find the area of the circle. Take radius of circle from user as input and print the result in below given format.
    Expected output format – “Area of circle is A having the radius R”. Replace A with area & R with radius.*/

    // 5. WAP to calculate the length of String using printf function.
    char str[] = "Hello";
    printf("size of string %s is  %d", str, sizeof(str));
    printf("\n");// for next line

    // 6. WAP to print the name of the user in double quotes.
    char name[] = "\"Hello , Amit Kumar\"";
    printf("user name is %s", name);
    printf("\n");// for next line

    // 7. WAP to print “%d” on the screen.
    printf("%%d");
    printf("\n");

    //8 WAP to print “\n” on the screen.
    printf("\\n");
    printf("\n"); // for next line
    //9. WAP to print “\\” on the screen.
    printf("\\\\");

    /* 10-WAP to take date as an input in below given format and convert the date format and display the result as given below
    User Input date format – “DD/MM/YYYY” (27/11/2022)
    Output format –
    “Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022)*/

    
    
    return 0;
}