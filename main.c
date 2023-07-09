#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define pi 3.14159265358979323846

// Struct
struct Student
{
    char name[50];
    int age;
    float gpa;
};

// write a function that takes two params N and X and prints all roundings of N between 0 and X digits .
void print_places(float N, int X)
{
    for (int i = 0; i < X; i++)
    {
        printf("%.*f\n", i, N);
        /*
            %.*f: format specifier is used to print a floating-point number with a variable precision(i).
        */
    }
}

//---------------------------------------------------Array----------------------------------------------------------------
void arr_ptr_basics()
{
    // declare array
    int arr[5];

    // pointer
    int my_int = 10;
    int *int_pointer;
    int_pointer = &my_int;
    *int_pointer = 20; // change the value of my_int to 20

    // pointer arithmatic
    int array[10];
    int *p = NULL;
    p = &array[0]; // Get address of the first entry in the array
    *(p + 0) = 5;  // Set the contents of array[0] to 5
    *(p + 4) = 10; // Set the contents of array[4] to 10
}

// function passing pointers:    DONT HAVE TO RETURN
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// function passing array: only pass address of first element
void print_array(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

//------------------------------------------------------------------------------------------------------------------------

//------------------------------------------------String-----------------------------------------------------------------------

void string_ptr()
{

    // same way
    char *s = "hello";
    char a[5] = "hello";
    char b[] = "hello";
    strcpy(a, "hello");

    printf("%s\n", s); // hello
    printf("%p,s");    // address

    // string.h library
    strcpy(a, "hello");
    strcat(a, "world");
    strlen(a);
    // compare 2 string use strcmp DO NOT USE ==
    strcmp(a, b); // return 0 if equal

    // list of strings
    char *list[3] = {"hello", "world", "!"};
    // print list of strings
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", list[i]);
    }
}

//-----------------------------------------------------------------------------------------------------------------------------

int main()
{

    print_places(pi, 5);

    // print \ and % symbol
    printf("\n \\ and %% \n");

    struct Student s1;
    s1.age = 20;
    s1.gpa = 3.5;
    strcpy(s1.name, "john");

    return 0;
}
