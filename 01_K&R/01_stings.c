// Chapter 1
#include <stdio.h>
int main(){
    // chapter 1.1
    // Stting / Character Constants
    char x[3] = "Hi"; // Here use double quotes
    char y[3] = {'H', 'i'}; // Here use single quotes
    printf("x %s\n", x); // output: x Hi
    printf("y %s\n", y); // output: y Hi
    printf("%s\n","Hi"); // output: Hi |check the double quotes
    printf("%c%c%c\n", 'H', 'i', 'i'); // output: Hii |check the single quotes
    /*
    - In C single quotes are a character and double quoztes are a character array (neither are a string)
    - In C, a character is a byte - a short (typically 8-bit) integer
    */

    // Character Sets
}