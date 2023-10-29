//
//  main.c
//  Ders18
//
//  Created by Lokman DOĞAN on 30.10.2023.
//

#include <stdio.h>

int main() { // Buradaki int main() parantezinin içinin boş olma durumu kullanımdan kaldırıldı, ancak bu değerlerin anlatıldığı derse kadar biz boş kullanacağız.
    
    /*
    int sayilar[] = {3, 13, 7, 75, 58, 44};
    
    //printf("%d\n", sayilar[2]);
    
    int i;
    
    for (i = 0; i < 6; i++) {
        printf("%d\n", sayilar[i]);
    }
    */
    
    int sayilar[] = {10, 15, 20, 35};
    
    int toplam = 0;
    int i;
    
    for (i = 0; i < 4; i++) {
        toplam = toplam + sayilar[i];
    }
    
    printf("Toplam: %d\n", toplam);


    return 0;
}
