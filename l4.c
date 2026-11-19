#include <stdio.h>

union bytes {
    int i;
    unsigned char b[4];
};

int main(void) {
    union bytes u;
    u.i = 0x01020304;

    for (int j = 0; j < 4; j++) {
        printf("u.b[%d] = %02X\n", j, u.b[j]);
    }

    return 0;
}
