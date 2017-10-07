#include <stdio.h>
#include <string.h>
int main() {
    char str[101];
    int i;
    scanf("%s", str);
    for (i=0; i<strlen(str); i++) {
        if((i+1)%10 == 0) {
            printf("%c\n", str[i]);   
        } else {
            printf("%c", str[i]);
        }
    }
}

