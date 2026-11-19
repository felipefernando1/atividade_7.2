#include <stdio.h>
#include <stddef.h>

struct Ruim {
    char a;
    int b;
    char c;
};

struct Bom {
    int b;
    char a;
    char c;
};

int main(void) {
    printf("=== struct Ruim ===\n");
    printf("sizeof: %zu bytes\n", sizeof(struct Ruim));
    printf("offset a: %zu\n", offsetof(struct Ruim, a));
    printf("offset b: %zu\n", offsetof(struct Ruim, b));
    printf("offset c: %zu\n\n", offsetof(struct Ruim, c));

    printf("=== struct Bom ===\n");
    printf("sizeof: %zu bytes\n", sizeof(struct Bom));
    printf("offset b: %zu\n", offsetof(struct Bom, b));
    printf("offset a: %zu\n", offsetof(struct Bom, a));
    printf("offset c: %zu\n", offsetof(struct Bom, c));

    return 0;
}
