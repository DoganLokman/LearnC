//
//  main.c
//  Ders14
//
//  Created by Lokman DOĞAN on 28.10.2023.
//

#include <stdio.h>

int main() { // Buradaki int main() parantezinin içinin boş olma durumu kullanımdan kaldırıldı, ancak bu değerlerin anlatıldığı derse kadar biz boş kullanacağız.
    // while DÖNGÜSÜ
    /*
     while (şart) {
     
     }
     şeklinde tanımlanır.
    */
    /*
    int i;
    for (i = 1; i <= 5; i++) {
        printf("Merhaba Lokman!\n");
    }
    */
    /*
    int i;
    i=1;
    while (i <= 5) {
        printf("Merhaba Lokman!\n");
        i++;
    }
    */
    /*
    // 1 ile 10 arasındaki sayıları while ile listeleyelim.
    
    int i = 1;
    while (i <= 10) {
        printf("%d\n", i);
        i++;
    }
    */
    /*
    // 1 ile 20 arasındaki çift sayıları 14 hariç listeleyelim.
    
    int i = 1;
    
    while (i < 20) {
        if (i % 2 == 0 && i != 14) {
            printf("%d\n", i);
        }
        i++;
    }
    */
    
    // Girilen sayının faktöriyelini while ile hesaplatalım.
    
    int sayi, faktoriyel = 1;
    
    printf("Lütfen faktöriyelinin hesaplanmasını istediğiniz sayıyı giriniz: ");
    scanf("%d", &sayi);
    
    while (sayi > 1) {
        faktoriyel = faktoriyel * sayi;
        sayi--;
    }
    printf("%d\n", faktoriyel);
    
    return 0;
}
