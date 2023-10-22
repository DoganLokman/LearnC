//
//  main.c
//  Ders07
//
//  Created by Lokman DOĞAN on 22.10.2023.
//

#include <stdio.h>

int main() { // Buradaki int main() parantezinin içinin boş olma durumu kullanımdan kaldırıldı, ancak bu değerlerin anlatıldığı derse kadar biz boş kullanacağız.
    // Kulanıcıdan alınan değerlerin işlenmesi...
    /*
    float sayi1, sayi2, toplam;
    printf("İlk sayıyı giriniz: ");
    scanf("%f", &sayi1);
    printf("İkinci sayıyı giriniz: ");
    scanf("%f", &sayi2);
    
    toplam = sayi1 + sayi2;
    printf("Toplam değer: %f\n", toplam);
    */
    /*
    float a, b, c;
    printf("Birinci sayıyı giriniz: ");
    scanf("%f", &a);
    printf("İkinci sayıyı giriniz: ");
    scanf("%f", &b);
    
    c = a / b;
    printf("İki sayının bölümü: %f\n", c);
    */
    /*
    //Aylık maaşı 16000 ₺ olan bir kişinin maaşına %34.67 zam yapıldığında maaşı ne kadar olur...
    
    float maas, zamOran, zamMiktar, yeniMaas;
    
    maas = 16000;
    zamOran = 34.67;
    zamMiktar = maas*zamOran/100;
    printf("Maaşa yapılan zam miktarı: %f ₺\n", zamMiktar);
    yeniMaas = maas + zamMiktar; // yeniMaas = maas + maas * zamOran / 100; olarak direkt olarak tanımlanabilirdi.
    printf("Yeni maaş miktarı: %f ₺\n", yeniMaas);
    */
    /*
    float maas, oran, miktar, yeniMaas;
    
    printf("----- ZAMLI MAAŞ HESABI -----\n");
    printf("Maaşınızı yazınız: ");
    scanf("%f", &maas);
    printf("Zam oranını yazınız: ");
    scanf("%f", &oran);
    printf("Girilen maaş: %f\n", maas);
    yeniMaas = maas + maas * oran / 100;
    miktar = yeniMaas - maas; // Yeni maaştan önce hesaplasaydık bir önceki örnekteki gibi hesaplayacaktım. :)
    printf("Yeni maaşınız: %f ₺'dir.\nMaaşınıza yapılan zam miktarı: %f ₺'dir.\n", yeniMaas, miktar);
    */
    /*
    //Daire alanı ve çevresi hesaplama: Alan = π * r * r, Çevre = 2 * π * r
    
    float pi, r, alan, cevre;
    pi = 3.14;
    printf("----- DAİRENİN ALAN VE ÇEVRE HESABI -----\n");
    printf("Lütfen hesaplanmasını istediğiniz dairenin yarıçap değerini giriniz: ");
    scanf("%f", &r);
    
    alan = pi * r * r;
    cevre = 2 * pi * r;
    printf("Yarıçapı %f olan dairenin alanı: %f, çevresi: %f olarak bulunur.\n", r, alan, cevre);
    */
    
    // YGS 1 Puan Türü Hesaplama
    // Türkçe: 1.999
    // Matematik: 3.998
    // Sosyal: 1
    // Fen: 2.999
    // Taban: 100.160
    
    float TurkceNet, TurkceKat, matematikNet, matematikKat, sosyalNet, sosyalKat, fenNet, fenKat, taban, toplam;
    taban = 100.160;
    TurkceKat = 1.999;
    matematikKat = 3.998;
    sosyalKat = 1;
    fenKat = 2.999;
    
    printf("Türkçe netinizi giriniz: ");
    scanf("%f", &TurkceNet);
    
    printf("Matematik netinizi giriniz: ");
    scanf("%f", &matematikNet);
    
    printf("Sosyal Bilgiler netinizi giriniz: ");
    scanf("%f", &sosyalNet);
    
    printf("Fen Bilimleri netinizi giriniz: ");
    scanf("%f", &fenNet);
    
    toplam = taban + TurkceKat * TurkceNet + matematikKat * matematikNet + sosyalKat * sosyalNet + fenKat * fenNet;
    printf("YGS 1 Puanınız: %f\n", toplam);
    
    return 0;
}
