//
//  main.c
//  Ders10
//
//  Created by Lokman DOĞAN on 26.10.2023.
//

#include <stdio.h>

int main() { // Buradaki int main() parantezinin içinin boş olma durumu kullanımdan kaldırıldı, ancak bu değerlerin anlatıldığı derse kadar biz boş kullanacağız.
    
    /*
     DÖNGÜLER: Tekrar gerektiren durumlarda kullanılan yapılara döngüler denir.
        printf("Merhaba"); kodunu 100 kere yazdıracağımız zaman tek tek yazmak olabilir ancak kullanışlı değildir. Bu durumlar için döngüler kullanılmaktadır.
    For döngüsü: Bu döngünün üç tane parametresi vardır. (Başlangıç parametresi; Bitiş parametresi; Artış miktarı)
     Döngülerde genellikle i değişkeni kullanılır.
    */
    /*
    int i;
    for (i = 1; i < 10; i++) {
        printf("Merhaba Kocaeli.\n");
    }
    */
    /*
    int sayi;
    for (sayi = 0; sayi <= 30; sayi++) {
        printf("%d\n", sayi);
    }
    */
    /*
    int k;
    for (k = 1; k <= 20; k++) {
        printf("%d - Merhaba Sivas.\n", k);
    }
    */
    /*
    int sayi;
    sayi = 3;
    sayi+=4; //burada sayi değişkeni += den sonra vereceğimiz değer miktarı kadar artış yapar.
    printf("%d\n", sayi);
    */
    /*
    int c;
    for (c = 0; c <= 20; c += 3) {
        printf("%d\n", c);
    }
    */
    
    int i;
    for (i=1; i<=30; i+=4) {
        printf("%d - İyi çalışmalar arkadaşlar.\n", i);
    }
    
    return 0;
}
