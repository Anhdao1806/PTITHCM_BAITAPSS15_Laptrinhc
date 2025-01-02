#include <stdio.h>
int main() {
    char str[] = "hello world";
    int dem[95] = {0};
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 32 && str[i] <= 126) {
        dem[str[i] - 32]++;
        }
    }
    for (int i = 0; i < 95; i++) {
        if (dem[i] > 0) {
        printf("%c : %d\n", i + 32, dem[i]);
        }
    }
    return 0;
}

