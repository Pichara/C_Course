#include <stdio.h>
#include <cstring>

int main(void){
    char buffer[50] = "";
    char name[50] = "Darrylll";
    char me[9] = " Pichara";
    int count = 0;

    //Copia a string para outra variavel
    strcpy(buffer, name); 
    printf("%s\n", buffer);
    
    //Retorna -1 se a primeira parametro for maior e 1 se o segundo for maior, 0 se for igual
    printf("%i\n", strcmp(me, name));

    //Retorna o tamanho da string
    printf("%i\n", strlen(name));
    printf("%i\n", strlen(me)); 

    //Da um append na primeira string
    printf("%s\n", strcat(name, me));

    //strncpy() e strcpy_s(): Copiam strings, mas com verificação de tamanho.
        //strncpy(dest, src, sizeof(dest) - 1);
        //strcpy_s(dest, sizeof(dest), src);
    //strncat() e strcat_s(): Concatena strings com limite de tamanho.
        //strncat(dest, src, 6);
        //strcat_s(dest, sizeof(dest), src);
    //strncmp(): Compara strings com limite de caracteres.
        //if (strncmp(str1, str2, 3) == 0) {
    //strnlen(): Calcula o comprimento da string, limitado a um número máximo de caracteres.
        //size_t len = strnlen(str, 5);

    //sprintf
    char buffer[50];
    int idade = 30;
    sprintf(buffer, "I am %d years old.", idade); //Faz um store de uma variavel dentro dentro de uma string
    printf("%s\n", buffer);  // Saída: I am 30 years old.

    //snprintf
    char buffer2[50];
    int idade2 = 30;
    snprintf(buffer2, sizeof(buffer2), "I am %d years old.", idade2);
    printf("%s\n", buffer2);  // Saída: I am 30 years old.

    return 0;
}