#include <stdio.h>
#include <string.h>
int main() {
    char chuoi[] = "Hello my gmail is test123@gmail.com";
    int demChuCai = 0;
    int demChuSo = 0;
    int kyTuDacBiet=0;
    for (int i = 0; chuoi[i] != '\0'; i++) {
        if ((chuoi[i] >= 'a' && chuoi[i] <= 'z') || (chuoi[i] >= 'A' && chuoi[i] <= 'Z')) {
            demChuCai++;
        }
        if (chuoi[i]>= '0' && chuoi[i]<='9'){
            demChuSo++;
        }else if ((chuoi[i] < '0' || chuoi[i] > '9') && (chuoi[i] < 'A' || chuoi[i] > 'Z') && (chuoi[i] < 'a' || chuoi[i] > 'z') && chuoi[i] != ' '){
            kyTuDacBiet++;
        }
    }
        printf("Chuoi: \"%s\"\n", chuoi);
        printf("So ky tu la chu cai trong chuoi la: %d\n", demChuCai);
        printf("So ky tu la chu so trong chuoi la: %d\n", demChuSo);
        printf("So ky tu dac biet trong chuoi la: %d\n", kyTuDacBiet);
        return 0;
}



