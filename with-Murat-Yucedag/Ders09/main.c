//
//  main.c
//  Ders09
//
//  Created by Lokman DOĞAN on 26.10.2023.
//

#include <stdio.h>

int main() { // Buradaki int main() parantezinin içinin boş olma durumu kullanımdan kaldırıldı, ancak bu değerlerin anlatıldığı derse kadar biz boş kullanacağız.
    
    /*
     Kara yapılarında kullanılan çeşitli operatörler vardır. Bunları bu derste inceleyeceğiz.
        Mod Alma --> % sembolü kullanılır,
        Ve --> && sembolü,
        Veya --> || sembolü kullanılır.
        Eşit midir? --> == sembolü,
        Eşit değilse --> != sembolü,
    */
    /*
    int sayi;
    sayi = 9;
    
    if (sayi % 2 == 0) {
        printf("Sayı Çifttir.\n");
    }
    else {
        printf("Sayı Tektir.\n");
    }
    */
    /*
    int x;
    printf("Lütfen bir sayı giriniz: ");
    scanf("%d", &x);
    
    if (x % 5 == 0) {
        printf("Sayı 5'e tam bölünmektedir.\n");
    }
    else {
        printf("Girdiğiniz sayı 5'e bölünmüyor...\n");
    }
    */
    /*
    int sayi;
    
    printf("Lütfen bir sayı giriniz: ");
    scanf("%d", &sayi);
    
    if (sayi % 3 == 0 && sayi % 5 == 0) {
        printf("Sayı 3'e ve 5'e tam bölünür...\n");
    }
    else {
        printf("Sayı 3'e ve 5'e tam bölünmez...\n");
    }
    */
    /*
    int sayi;
    
    printf("Lütfen bir sayı giriniz: ");
    scanf("%d", &sayi);
    
    if (sayi % 3 == 0 || sayi % 5 == 0) {
        printf("Sayı 3'e veya 5'e tam bölünür...\n");
    }
    else {
        printf("Sayı 3'e veya 5'e tam bölünmez...\n");
    }
    */
    
    printf("***** SUYUN SICAKLIĞINA GÖRE DURUMU *****\n");
    
    int su;
    
    printf("Suyun sıcaklık değerini yazını: ");
    scanf("%d", &su);
    
    if (su <= 0) {
        printf("Su (katı) buz halindedir.\n");
    }
    if (su > 0 && su < 100) {
        printf("Su sıvı halindedir.\n");
    }
    if (su >= 100) {
        printf("Su (gaz) buhar halindedir.\n");
    }
    return 0;
}
