#include <stdio.h>

void main() {
    int sayi;

    printf("Bir sayi girin: ");
    scanf("%d", &sayi);

    if (sayi == 0)
    {
        printf("Girilen sayi 0'dir.\n");
    }
    else if (sayi > 0){
        printf("Girilen sayi pozitiftir.\n");
    }
    else {
        printf("Girilen sayi negatiftir.\n");
    }
    
}