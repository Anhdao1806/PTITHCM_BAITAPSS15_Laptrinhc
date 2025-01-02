#include <stdio.h>
#include <string.h>
int main() {
    char chuoi[] = "ho le anh dao";
    for (int i = 0; i < strlen(chuoi); i++) {
        if ( i == 0 || chuoi[i-1]==' ' ){
            if ( chuoi[i]>='a' && chuoi[i]<='z'){
                chuoi[i]=chuoi[i]-32;
            }
        }
    }
        printf("%s\n", chuoi);
        return 0;
    }
