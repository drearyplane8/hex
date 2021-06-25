#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void PrintHelp() {
    printf("Usage: hex /argument\n");
    printf("hex /h - generates hex numbers to convert to decimal\n");
    printf("hex /d - generates decimal numbers to convert to hex\n");
    printf("hex /? - shows this help message\n\n");
}

int main(int argc, char *argv[]) {

    if (argc != 2) {
        printf("Invalid amount of arguments\n");
        PrintHelp();
        return 0;
    }

    int input, num;

    srand(time(NULL));

    while (1) {

        num = rand() % 255;

        if (argv[1][1] == 'h') {
            printf("Convert 0x%x into decimal\n", num);
            scanf("%d", &input);
        } else if (argv[1][1] == 'd') {
            printf("Convert %d into hexadecimal\n", num);
            scanf("%x", &input);
        } else if (argv[1][1] == '?') {
            PrintHelp();
            return 0;
        } else {
            printf("Invalid argument\n");
            return 1;
        }

        if (num == input)
            printf("Correct\n");
        else printf("Incorrect\n");
    }
}
