#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "Testes", aux;
    int tam = strlen(str)-1;

    for (int i = 0; i <= tam/2; i++){
        aux = str[i];
        str[i] = str[tam - i];
        str[tam - i] = aux;
    }
    printf("%s\n", str);
}