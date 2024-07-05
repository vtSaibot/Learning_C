#include <stdio.h>
#include <stdbool.h>

int main(){

    char a = 'C';                                           // single characters %c [1 Byte]
    char name[] = "Tobias";                                 // array of characters %s [1 Byte per character of the array]

    float b = 3.141592;                                     // 4 bytes (32 bits of precision) 6 - 7 digits %f
    double c = 3.1415922653589793;                          // 8 bytes (64 bits of precision) 15 - 16 digits %lf

    bool d = true;                                          // 1 byte (true or false) %d

    char e = 120;                                           // 1 byte (-128 to +127) %d or %c
    unsigned char f = 255;                                  // 1 byte (0 to +255) %d or %c

    short g = 32767;                                        // 2 bytes (-32,768 to +32,767) %d
    unsigned short h = 65536;                               // 2 bytes (0 to +65,535) %d

    int i = 2147483647;                                     // 4 bytes (-2,147,483,648 to +2,147,483,647) %d
    unsigned int j = 4294967295;                            // 4 bytes (0 to +4,294,967,295) %u

    long long int k = 9223372036854775807;                  // 8 bytes (-9 quintillion to +9 quintillion) %lld
    unsigned long long int l = 18446744073709551615U;       // 8 bytes (0 to +18 quintillion) %llu

    printf("%c\n", a); //character
    printf("%s\n", name); // character array
    printf("%f\n", b); // float
    printf("%lf\n", c); // double
    printf("%d\n", d);  // bool
    printf("%d\n", e);  // char as numeric value
    printf("%d\n", f);  // unsigned char as numeric value
    printf("%d\n", g);  // short
    printf("%d\n", h);  // unsigned short
    printf("%d\n", i);  // int
    printf("%u\n", j);  // unsigned int
    printf("%lld\n", k);  // long long int
    printf("%llu\n", l);  // unsigned long long int

    return 0;
}