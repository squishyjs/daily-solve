#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>

void print_tree() {
    printf("   *   \n  ***  \n ***** \n*******\n");
}

int main(void) {
    int base = 1;
    for (int i = 1; i < 5; ++i) {
        for (int j = 0; j < base; ++j) {
            printf("%c", '*');
        }
        printf("\n");
        base += 2;
    }

    printf("\n");
    char str[] = "Printf() Statement Version: ";
    puts(str);

    print_tree();

    return 0;
}
