#include <stdio.h>

int main(void)
{
    int età;
    char inizialiNome;

    printf("Determina se una persona è maggiorenne\n");
    printf("Inserisci le iniziali di questa persona\n");
    scanf("%c", &inizialiNome);
    printf("Inserisci l'età di questa persona\n");
    scanf("%d", &età);

    if(età >= 18)
    {
        printf("%c. è un maggiorenne", inizialiNome);
    }
    else
    {
        printf("%c. non è un maggiorenne", inizialiNome);
    }
    return 0;
}
