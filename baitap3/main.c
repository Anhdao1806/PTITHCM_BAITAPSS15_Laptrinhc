#include <stdio.h>
int main() {
    char chuoi[] = "Ho Le Anh Dao";
    char kitu;
    printf("Chuoi ban dau: %s\n", chuoi);
    printf("Nhap vao ky tu muon xoa: ");
    scanf(" %c", &kitu);
    printf("Chuoi sau khi xoa ky tu %c: ", kitu);
    for (int i = 0; chuoi[i] != '\0'; i++) {
        if (chuoi[i]!= kitu) {
        putchar(chuoi[i]);
        }
    }
    printf("\n");
    return 0;
}

