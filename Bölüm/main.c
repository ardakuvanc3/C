#include<stdio.h>

void main() {

    int sayi;
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    
    (sayi % 5 == 0 && sayi % 3 == 0) ? printf("Bolunuyor") : printf("Bolunmuyor");

}