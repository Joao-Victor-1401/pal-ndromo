#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main() {
 setlocale(LC_ALL, "");
 int i, valor = 0;
 char palavra[50], inversa[50];

 printf("\nDigite uma palavra: ");
 gets(palavra);

 for(i = 0; palavra[i]; i++){
   palavra[i] = tolower(palavra[i]);
 }

 strcpy(inversa, palavra);

 strrev(inversa);

 valor = strcmp(palavra, inversa);

 if (valor == 0)
   printf("\nA palavra %s � um pal�ndromo\n", palavra);
 else
   printf("\nA palavra %s n�o � um pal�ndromo\n", palavra);

 return 0;
}
