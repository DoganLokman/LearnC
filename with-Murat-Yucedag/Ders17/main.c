//
//  main.c
//  Ders17
//
//  Created by Lokman DOĞAN on 29.10.2023.
//

#include <stdio.h>

int main() { // Buradaki int main() parantezinin içinin boş olma durumu kullanımdan kaldırıldı, ancak bu değerlerin anlatıldığı derse kadar biz boş kullanacağız.
    
    /*
     DİZİLER - Aynı türden verilerin oluşturduğu kümedeki verilerin bir arada tutulması için kullanılan yapılardır.
     
      - Tek Boyutlu Diziler:
        Şehirler dizisi, Tek basamaklı rakamlar, 0 ile 20 arasındaki çift sayılar, alfabedeki sesli harfler gibi örneklenebilir.
      
      - Çok Boyutlu Diziler:
     
     DeğişkenAdı []
     Veriler = {veri, veri}
     
    */
    /*
    int sayilar [] = {100, 200, 300, 400, 500, 600};
    
    printf("%d\n", sayilar[3]);
    */
    /*
    int sayilar [] = {100, 200, 300, 400, 500, 600};
    
    int x;
    x = sayilar[0];
    printf("%d\n", x);
    */
    /*
    char sehir[8] = {'I', 's', 't', 'a', 'n', 'b', 'u', 'l'};
    printf("%c\n", sehir[3]);
    */
    
    int sayi[4];
    sayi[0] = 25;
    sayi[1] = 34;
    sayi[2] = 41;
    sayi[3] = 58;
    
    printf("%d\n", sayi[3]);
    
    return 0;
}
