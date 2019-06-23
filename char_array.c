#include<stdio.h>

int main()
{
    char *fname = "ahmed";  //character array represented using a true pointer.
    char lname[20] = "ochieng"; //This is a character array

    printf("My first name is : %s\n", fname);
    printf("My last name is : %s\n\n", lname);
    printf("My first name three initials are : %c . %c . %c\n", fname[0], fname[1], fname[2]);
    printf("My first name three initials are : %c . %c . %c\n\n", *(fname + 0), *(fname + 1), *(fname + 2));
    printf("My last name three initials are : %c . %c . %c\n", lname[0], lname[1], lname[2]);
    printf("My last name three initials are : %c . %c . %c\n", *(lname + 0), *(lname + 1), *(lname + 2));

    fname = "eddy";

    lname[0] = 'o';
    lname[1] = 'w';
    lname[2] = 'u';
    lname[3] = 'o';
    lname[4] = 'r';
    lname[5] = '\0';

    printf("\nMy other first name is : %s\n", fname);
    printf("\nMy dad last name is : %s\n", lname);

    return 0;
}
