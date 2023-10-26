//
//  main.c
//  Ders08
//
//  Created by Lokman DOĞAN on 23.10.2023.
//
/*
 KARAR YAPILARI: Programlamada evet yada hayır cevabının alındığı durumlardır.
 
 yaş = 5
 Yaş 5'e eşit mi?
 
 ortalama = 48
 ortalama 50 den büyük mü?
 
 sorunlarına verdiğimiz cevaplar evet yada hayır şeklinde cevaplanır.
 Genel olarak kullanımını gösterecek olursak:
 
 eğer (ortalama >= 50){ // Burada parantez içerisine matematiksel olarak büyük veya eşit sembollerini koyarak istediğimiz koşulu belirtiyoruz.
 Liste parantezinin içerisine yapılmasını istedğimiz işlemi yazıyoruz.
 }
 değilse {
 liste parantezi içerisine yapılmasını istediğimiz işlemi yazıyoruz.
 }
 
 şeklinde kullanılır. Yukarıdaki eğer ve değilse ifadelerini ingilizce olarak yazdığımızda genel olarak (if - else) kullanımdaki ifadeleri elde etmiş oluruz.
 
 eğer (hava yağmurluysa){
 Şemsiyeni yanına al
 }
 değilse {
 Şemsiyeni yanına alma!
 }
 
 C dilinde bu:
 if (hava == yağmur){
 şemsiye al
 }
 else {
 şemsiye alma
 }
*/
#include <stdio.h>

int main() { // Buradaki int main() parantezinin içinin boş olma durumu kullanımdan kaldırıldı, ancak bu değerlerin anlatıldığı derse kadar biz boş kullanacağız.
    /*
    int sayi = 5;
    if (sayi == 5){
        printf("Girilen değer doğru.\n");
    }
    else{
        printf("Girilen değer YANLIŞ.\n");
    }
    */
    /*
    int sayi1, sayi2, toplam;
    
    sayi1 = 40;
    sayi2 = 56;
    toplam = sayi1 + sayi2;
    
    if (toplam > 100){
        printf("Toplam değeriniz: %d - 100'den büyüktür!\n", toplam);
    }
    else {
        printf("Toplam değeriniz: %d - 100'den küçüktür.\n", toplam);
    }
    */
    
    printf("***** ÖĞRENCİ NOT ORTALAMASI HESAPLAMA SİSTEMİ *****\n\n");
    
    int s1, s2, ort;
    
    printf("1. sınav notunu girin: ");
    scanf("%d", &s1);
    printf("2. sınav notunu giriniz: ");
    scanf("%d", &s2);
    
    ort = (s1 + s2) / 2;
    printf("Ortalamanız: %d\n", ort);
    
    if (ort > 50) {
        printf("Tebrikler! Sınıfı geçtiniz :)\n");
    }
    else {
        printf("Üzgünüz sınıf tekrarı yapmalısınız :(\n");
    }
    
    return 0;
}

