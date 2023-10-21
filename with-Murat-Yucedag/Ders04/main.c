//
//  main.c
//  Ders4
//
//  Created by Lokman DOĞAN on 19.10.2023.
//

#include <stdio.h>

int main() { // Buradaki int main() parantezinin içinin boş olma durumu kullanımdan kaldırıldı, ancak bu değerlerin anlatıldığı derse kadar biz boş kullanacağız.
    // int (integer) türü kullandığımız tam sayı verileri saklamak için kullanılan veri türüdür.
    // char değişkenlerde değeri okumak için %s kullanılırdı, sayısal değerleri okumak ve yazdırmak için %d kullanılır. %d decimal kelimesinden gelmektedir.
    /*
    int sayi; // integer türünün varsayılan değeri 0 dır.
    sayi = 6;
    printf("%d\n", sayi);
    */
    /*
    int sayi1, sayi2, toplam;
    
    sayi1 = 25;
    sayi2 = 65;
    toplam = sayi1 + sayi2;
    
    printf("Toplam değer: %d\n", toplam);
    */
    /*
    int sayi1, sayi2, topla, carp, fark, bol;
    
    sayi1 = 60;
    sayi2 = 20;
    topla = sayi1 + sayi2;
    carp = sayi1 * sayi2;
    fark = sayi1 - sayi2;
    bol = sayi1 / sayi2;
    
    printf("%d ve %d sayıları için: \n", sayi1, sayi2);
    printf("Sayıların toplamı: %d\n", topla);
    printf("Sayıların farkı: %d\n", fark);
    printf("Sayıların çarpımı: %d\n", carp);
    printf("Sayıların birbirine bölümü: %d\n", bol);
    */
    /*
    int s1, s2, islem;
    s1 = 10;
    s2 = 3;
    islem = s1 / s2;
    
    printf("%d ve %d sayıları için:\n", s1, s2);
    printf("Bölme işlemi sonucu: %d dir.\n", islem);
    // islem değişkeninin türü int olarak tanımlandığı için, yani tam sayı türü olduğu için iki değişkenimiz bir birine tam bölünmediği durumlarda sonucun tam sayılık kısmı alınıp küsürat kısmı görmezden gelinir.
    */
    /*
    // Kareni alan ve çevre hesaplaması
    
    int kenar, alan, cevre;
    kenar = 6;
    alan = kenar * kenar;
    cevre = kenar * 4;
    
    printf("Kener ayrıt ölçüsü %d cm olan bir karenin;\nAlanı: %d cm2\nÇevre uzunluğu: %d cm'dir.\n", kenar, alan, cevre);
    */
    
    // Kareni alan ve çevre hesaplaması
    
    int kisaKenar, uzunKenar, alan, cevre;
    kisaKenar = 6;
    uzunKenar = 9;
    alan = kisaKenar * uzunKenar;
    cevre = (kisaKenar + uzunKenar) * 2;
    
    printf("Kısa kenarı %d cm, uzun kenarı %d olan bir dikdörtgenin;\nAlanı: %d cm2\nÇevre uzunluğu: %d cm'dir.\n", kisaKenar, uzunKenar, alan, cevre);
    
    return 0;
}
