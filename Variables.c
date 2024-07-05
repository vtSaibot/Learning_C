#include <stdio.h>

        // Variables = Variables are used to allocate space in memory to store different kinds of data,
        // there are multiple kinds of Variable Types like,
        // int == whole integers (uses 2 or 4 bytes)
        // char == single characters or with [] you can emulate a string, because C is not a OOP Language and strings are basicly objects (uses 1 byte per character)
        // float == floating point number (uses 4 bytes)
        // double == same as floats but can access bigger/larger numbers/decimals (uses 8 bytes)
        // long == capable of handling the largest numbers (uses 32 to 64 bytes)
        // to display/print out variables/data types we need to use Format Specifiers, more of that in an extra program

int main(){

    int age; // declaration
    age = 18; // initialization
    int realAge = 27; // declaration + initialization

    int year = 2024; // integer (uses 2 or 4 bytes)
    float price = 149.99; // floating point number (uses 4 bytes)
    char grade = 'A'; // single character (uses 1 byte)
    char myName[] = "Tobias"; //series of single characters used as an array to make strings (uses 1 byte per character)

    printf("The year i started learning C is %d,\n", year);
    printf("My next keyboard the Logitech MX Mini will cost me %.2f,\n", price);
    printf("I sadly did not achieve the grade %c very often, because i never really tried,\n", grade);
    printf("My name is %s and i hope i can stick to learning C/C++,\n", myName);
    return 0;
}