#include <stdio.h>

int main() {
    for (int x = 1; x <= 3; x=x+1) {
        for (int y = 1; y <= 3; y=y+1) {
            int num = (x - 1) * 3 + y;
            printf("%d %d %d\n", num, x, y);
        }
    }
    return 0;
}