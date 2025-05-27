#include <stdio.h>

int main() {
    char x[6];
    x[0] = 'H';
    x[1] = 'e';
    x[2] = 'l';
    x[3] = 'l';
    x[4] = 'o';
    x[5] = '\0';
    printf("%s\n", x); // output: Hello

    x[2] = 'L';
    printf("%s\n", x); // output: HeLlo

    x[3] = '\0';
    printf("%s\n", x); //output: HeL


    /*
    - The size of a "String" stored in a C array is not the length of the array
    - C uses a special character '\0' that *marks*  the string end by convention
    - Character arrays need to allocate an extra byte to store the line-end character
    */

}