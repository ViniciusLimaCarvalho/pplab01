#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rts[100];
    int i, len;

    printf("Insira uma palavra: ");
    fgets(str, 100, stdin);

    len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
   
    len = strlen(str);
    for (i = 0; i < len; i++) {
        rts[i] = str[len - i - 1];
    }
    rts[i] = '\0'; 

    printf("%s\n", rts);

    return 0;
}
