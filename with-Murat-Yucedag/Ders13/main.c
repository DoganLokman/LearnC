//
//  main.c
//  Ders13
//
//  Created by Lokman DOĞAN on 28.10.2023.
//

#include <stdio.h>

int main() { // Buradaki int main() parantezinin içinin boş olma durumu kullanımdan kaldırıldı, ancak bu değerlerin anlatıldığı derse kadar biz boş kullanacağız.
    /*
    // 1. soru: 1 ile 50 arasında 5'e tam bölünebilen sayıları listeleyen program
    
    int i;
    
    for (i = 1; i < 50; i++) {
        if (i % 5 == 0) {
            printf("%d\n", i);
        }
    }
    */
    
    //3 basamaklı sayıyı basamaklarına ayıran programı kodlayalım.
    
    int sayi;
    
    printf("Basamklarına ayrılacak üç basamaklı sayıyı yazınız: ");
    scanf("%d", &sayi);
    
    int birler, onlar, yuzler;
    
    yuzler = sayi / 100;
    printf("Yüzler basamağı: %d\n", yuzler);
    
    onlar = sayi / 10;
    onlar = onlar % 10;
    printf(" Onlar basamağı: %d\n", onlar);
    
    birler = sayi % 10;
    printf("Birler basamağı: %d\n", birler);
    
    return 0;
}
