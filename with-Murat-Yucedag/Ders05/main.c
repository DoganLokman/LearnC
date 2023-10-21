//
//  main.c
//  Ders5
//
//  Created by Lokman DOĞAN on 21.10.2023.
//

#include <stdio.h>

int main() { // Buradaki int main() parantezinin içinin boş olma durumu kullanımdan kaldırıldı, ancak bu değerlerin anlatıldığı derse kadar biz boş kullanacağız.
    
    /*
    int sayi;
    printf("Bir sayı giriniz: ");
    scanf("%d", &sayi); // scanf("%d", sayi); şeklinte kullanıldığında hata verir. Aritmetik işlemlerde & işaretiyle girilmesi gerekmektedir.
    printf("Girmiş olduğunuz sayı: %d\n", sayi); // Burada neden & ile tanımlamadığımızı ileride öğreneceğiz.
    */
    /*
    int sayi1, sayi2, toplam, fark, carpim;
    printf("Birinci sayıyı giriniz: ");
    scanf("%d", &sayi1);
    printf("İkinci sayıyı giriniz: ");
    scanf("%d", &sayi2);
    toplam = sayi1 + sayi2; // Burada toplam değişkeninin başına tekrar int şeklinde tür belirtmemeliyiz. Bu hata almamıza sebep olur. Bir kere tanımladık zaten.
    fark = sayi1 - sayi2;
    carpim = sayi1 * sayi2;
    printf("%d ile %d değerlerinin işlemlerinin sonuçları şu şekilde:\n%d + %d = %d\n", sayi1, sayi2, sayi1, sayi2, toplam);
    printf("%d - %d = %d\n", sayi1, sayi2, fark);
    printf("%d x %d = %d\n", sayi1, sayi2, carpim);
    */
    /*
    int kenar, cevre, alan;
    printf("----- Karede Çevre Uzunluğu ve Alan Hesaplama -----\n");
    printf("Lütfen karenin bir kenar uzunluğunu yazınız: ");
    scanf("%d", &kenar);
    cevre = kenar * 4;
    alan = kenar * kenar;
    printf("Bir kenarının uzunluğu %d olan karenin;\nÇevresi: %d \nAlanı:%d.\n", kenar, cevre, alan);
    */
    /*
    int sinav1, sinav2, sinav3, ortalama;
    
    printf("----- Ders Notu Ortalaması Hesaplama -----\n");
    printf("İlk sınavın notunu yazınız: ");
    scanf("%d", &sinav1);
    
    printf("İkinic sınavın notunu giriniz: ");
    scanf("%d", &sinav2);
    
    printf("Üçüncü sınavın notunu giriniz: ");
    scanf("%d", &sinav3);
    
    ortalama = (sinav1 + sinav2 + sinav3) / 3;
    printf("Bu öğrencinin;\n1. Sınav Notu: %d\n2. Sınav Notu: %d\n3. Sınav Notu: %d\nOrtalama Notu: %d\n", sinav1, sinav2 ,sinav3, ortalama);
    */
    
    // Su = 25 ₺
    // Mısır = 75 ₺
    // Kola = 50 ₺
    // Bilet = 125 ₺
    
    int su, kola, bilet, misir, toplam;
    printf("----- Sinema Tutar Hesaplama -----\n");
    
    printf("Mısır Adeti: ");
    scanf("%d", &misir);
    
    printf("Kola Adeti: ");
    scanf("%d", &kola);
    
    printf("Su adeti: ");
    scanf("%d", &su);
    
    printf("Bilet Adeti: ");
    scanf("%d", &bilet);
    
    toplam = (su * 25) + (misir * 75) + (kola * 50) + (bilet * 125);
    
    printf("%d adet su, %d adet mısır, %d adet kola, %d adet bilet.\nToplam tutar: %d ₺'dir.\n", su, misir, kola, bilet, toplam);
    
    
    
    return 0;
}
