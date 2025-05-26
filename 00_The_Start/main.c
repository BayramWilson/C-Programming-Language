#include <stdio.h> // this means input output
/* I am a comment */
int main() {
    printf("Hello World\n");
    printf("Answer %d\n", 42);
    printf("Name %s\n", "sarah");
    printf("x %.1f i %d\n", 3.5, 100);
    int usf, euf;
    printf("Enter US Floor\n");
    scanf("%d", &usf);
    euf = usf - 1;
    printf("EU Floor %d\n", euf);
}