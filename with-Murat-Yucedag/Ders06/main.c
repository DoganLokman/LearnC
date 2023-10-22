//
//  main.c
//  Ders06
//
//  Created by Lokman DOĞAN on 22.10.2023.
//

#include <stdio.h>

int main() { // Buradaki int main() parantezinin içinin boş olma durumu kullanımdan kaldırıldı, ancak bu değerlerin anlatıldığı derse kadar biz boş kullanacağız.
    // Float Değişkenler
    /*
     Char ve String değişkenleri çağırmak için %s, Integer değişkenleri çağırmak için %d kullanılırken Float değişkenleri çağırmak için %f ifadesi kullanılır...
    */
    /*
    float sayi;
    sayi = 5;
    printf("%f\n", sayi); // 5.000000 ifadesini yazdırır. Neden altı adet sıfır olduğunu öğreneceğiz.
    */
    /*
    float sayi1, sayi2, bolum;
    sayi1 = 7;
    sayi2 = 4;
    bolum = sayi1 / sayi2;
    printf("%f\n", bolum);
    */
    /*
    float deg1, deg2, toplam;
    deg1 = 6.54;
    deg2 = 3.65;
    toplam = deg1 + deg2;
    printf("%f\n", toplam);
    */
    /*
    float sinav1, sinav2, sinav3, ort;
    
    sinav1 = 75;
    sinav2 = 85;
    sinav3 = 40;
    ort = (sinav1 + sinav2 + sinav3) / 3;
    printf("1. sınav sonucu: %f\n2. sınav sonucu: %f\n3. sınav sonucu: %f\nÖğrencinin ders notu ortalaması: %f\n", sinav1, sinav2, sinav3, ort);
    */
    /*
    printf("----- İDEAL KİLO HESAPLAMA -----\n");
    // İdeal kilo hesabı formülü: (boy- 100 + yaş / 10) * 0.8 --> Kadın,     0.9 --> Erkekler için
    float boy, yas, idealKadın, idealErkek;
    boy = 178;
    yas = 39;
    idealKadın = (boy - 100 + yas / 10) * 0.8;
    idealErkek = (boy - 100 + yas / 10) * 0.9;
    printf("Boyu: %fcm, yaşı: %f olan;\nKadın birey için ideal kilo: %f kg,\nErkek birey için: %f kg'dir\n", boy, yas, idealKadın, idealErkek);
    */
    
    // ÖDEV: Uzun ve kısa kenar uzunlukları ondalıklı sayı olan dikdörtgenin çevre ve alan hesaplaması
    
    float uKenar, kKenar, cevre, alan;
    
    uKenar = 12.75;
    kKenar = 8.42;
    cevre = (uKenar + kKenar) * 2;
    alan = uKenar * kKenar;
    printf("Kısa kenar uzunluğu: %f, uzun kenar uzunluğu %f olan dik dörtgenin;\nAlanı: %f\nÇevresi: %f olarak bulunur.\n", kKenar, uKenar, alan, cevre);
    
    return 0;
}
