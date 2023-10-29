//
//  main.c
//  Ders19
//
//  Created by Lokman DOĞAN on 30.10.2023.
//

#include <stdio.h>

int main() { // Buradaki int main() parantezinin içinin boş olma durumu kullanımdan kaldırıldı, ancak bu değerlerin anlatıldığı derse kadar biz boş kullanacağız.
    /*
    char sehir[15];
    int i;
    
    for (i = 0; i < 3; i++) {
        printf("Şehri Yazınız: ");
        scanf("%s", sehir);
        printf("Yazdığınız şehir: %s", sehir);
        printf("\n");
    }
    */
    /*
    //Örnek 1
    char sehirler[3][20];
    int i, k;
    
    for (i = 0; i < 3; i++) {
        printf("Şehir adını giriniz: ");
        scanf("%s", sehirler[i]);
        printf("\n");
    }
    printf("Girdiğiniz Şehirler:\n");
    for (k = 0; k < 3; k++) {
        printf("%s\n", sehirler[k]);
    }
    */
    /*
    int dizi[100];
    int i, sayi;
    printf("Eleman sayısını yazınız: ");
    scanf("%d", &sayi);
    
    for (i = 0; i < sayi; i++) {
        printf("Dizinin %d. değerini girin: ", i+1);
        scanf("%d", &dizi[i]);
    }
    printf("\n\n");
    
    for (i = 0; i < sayi; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");
    */
    
    int dizi[100];
    int i, sayi, ort, tplm = 0;
    
    printf("Eleman sayısını yazınız: ");
    scanf("%d", &sayi);
    
    for (i = 0; i < sayi; i++) {
        printf("Dizinin %d. değerini yazınız: ", i+1);
        scanf("%d", &dizi[i]);
        tplm = tplm + dizi[i];
        ort = tplm / sayi;
    }
    printf("Dizideki sayıların toplamı = %d\n", tplm);
    printf("Dizideki sayıların ortalaması = %d\n", ort);
    
    return 0;
}
