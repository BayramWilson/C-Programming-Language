#include <stdio.h> // this means input output
/* I am a comment */
int main() {
    printf("Hello World\n");
    printf("Answer %d\n", 42);
    printf("Name %s\n", "sarah");
    printf("x %.1f i %d\n", 3.5, 100);
    // int input
    int usf, euf;
    printf("Enter US Floor\n");
    scanf("%d", &usf);
    euf = usf - 1;
    printf("EU Floor %d\n", euf);
    // string input
    char name[100];
    printf("Enter name\n");
    scanf("%100s", name);
    printf("Hello %s\n", name);
    // line input
    char line[1000];
    printf("Enter line\n");
    scanf("%[^\n]1000s", line);
    printf("Line: %s\n", line);
    //line input (safe)
    char line[1000];
    printf("Enter line\n");
    fgets(line, 1000, stdin);
    printf("Line: %s\n", line);

    // REad a File
    char line[1000];
    FILE *hand;
    hand = fopen("romeo.txt", "r");
    while( fgets(line, 1000, hand) != NULL ) {
        printf("%s", line);
    }

    // counted loop
    int i;
    for(i=0; i<5; i++) {
        printf("%d\n", i);
    }

    // Max / Min v2
    int first = 1;
    int val, maxval, minval;

    while(scanf("%d", &val) != EOF ) {
        if ( first || val > maxval ) maxval = val;
        if ( first || val < minval ) minval = val;
        first = 0;
    }
    printf("Maximum %d\n", maxval);
    printf("Minimum %d\n", minval);

    // Guessing Game
    int guess;
    while(scanf("%d", &guess) != EOF ) {
        if ( guess == 42 ) {
            printf("Nice work!\n");
            break;
        }
        else if ( guess < 42 )
            printf("Too low - guess again\n");
        else   
            printf("Too Gigh -guess again!\n");
    }
    
    // Functions (call by value)

    int mymult();
    int retval;

    retval = mymult(6, 7);
    printf("Answer: %d\n", retval);

}
int mymult(a, b)
    int a,b;
{
    int c = a * b;
    return c;
}
