#include <stdio.h>
int main() {
    printf("%c %d\n",'A', 'A'); // output: A 65
    printf("%c %d\n",65, 'A' ); // output: A 65
    printf("%c %d\n",0x41, 'A' ); // output: A 65
    
    /* 
    - The C char type is just a number - character representations depend on the character set. 
    - Modern characters including 😀 are represented in multi-byte sequences using Unicode and UTF-8
      but in 1978 we used ASCII and other character sets.
    */
}