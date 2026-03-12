#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *buf = malloc(16);
    if (!buf) return 1;

    strcpy(buf, "test data");
    printf("before realloc: %s\n", buf);

    buf = realloc(buf, 1000000000000UL);

    if (!buf) {
        printf("realloc failed\n");
        return 1;
    }

    printf("after realloc: %s\n", buf);

    free(buf);
    return 0;
}
