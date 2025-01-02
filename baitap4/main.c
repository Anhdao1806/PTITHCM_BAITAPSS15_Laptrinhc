#include <stdio.h>
int main() {
    char str[] = "Ho Le Anh Dao";
    for (char c = 32; c <= 126; c++) {
        int count = 0;
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] == c) {
                count++;
            }
        }
        if (count > 0) {
            printf("'%c' : %d \n", c, count);
        }
    }
    return 0;
}

