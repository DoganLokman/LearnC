//
//  main.c
//  Ders15
//
//  Created by Lokman DOĞAN on 28.10.2023.
//

#include <stdio.h>

int main() { // Buradaki int main() parantezinin içinin boş olma durumu kullanımdan kaldırıldı, ancak bu değerlerin anlatıldığı derse kadar biz boş kullanacağız.
    
    /*
     Switch / Case yapısı da bir kara yapısıdır.
    
     switch (degisken) {
     case 1: ....
     case 2: ....
     
     }
     şeklinde oluşturuluyor.
     
     */
    /*
    int sayi;
    printf("Lütfen ay numarasını giriniz: ");
    scanf("%d", &sayi);
    
    switch (sayi) {
        case 1:
            printf("Ocak\n");
            break; // her case i break ile bitirmek gerekmektedir.
        case 2:
            printf("Şubat\n");
            break;
        case 3:
            printf("Mart\n");
            break;
        case 4:
            printf("Nisan\n");
            break;
        case 5:
            printf("Mayıs\n");
            break;
        case 6:
            printf("Haziran\n");
            break;
        case 7:
            printf("Temmuz\n");
            break;
        case 8:
            printf("Ağustos\n");
            break;
        case 9:
            printf("Eylül\n");
            break;
        case 10:
            printf("Ekim\n");
            break;
        case 11:
            printf("Kasım\n");
            break;
        case 12:
            printf("Aralık\n");
            
        default:
            printf("%d sayılı ay bulunmamaktadir. Aylar 1'den başlar 12'de biter. Lütfen dikkat ediniz!\n", sayi);
            break;
    }
    */
    /*
    char ders;
    printf("Ders Kodu: ");
    scanf("%c", &ders);
    
    switch (ders) {
        case 't':
            printf("Türkçe\n");
            break;
        case 'm':
            printf("Matematik\n");
            break;
        case 'f':
            printf("Fen Bilgisi\n");
            break;
        case 's':
            printf("Sosyal Bilgiler\n");
            
        default:
            printf("Yanlış değer girdiniz.\n");
            break;
    }
    */
    
    int sayi;
    printf("Haftanın kaçıncı günü?: ");
    scanf("%d", &sayi);
    
    switch (sayi) {
        case 1:
            printf("Hatfanın ilk günü Pazartesi'dir.\n");
            break;
        case 2:
            printf("Hatfanın ikinci günü Salı'dır.\n");
            break;
        case 3:
            printf("Hatfanın üçüncü günü Çarşamba'dır.\n");
            break;
        case 4:
            printf("Hatfanın dördüncü günü Perşembe'dir\n");
            break;
        case 5:
            printf("Hatfanın beşinci günü Cuma'dır.\n");
            break;
        case 6:
            printf("Hatfanın altıncı günü Cumartesi'dir.\n");
            break;
        case 7:
            printf("Hatfanın son günü Pazar'dır.\n");
        default:
            printf("Lütfen 1 ile 7 arası bir sayı giriniz.\n");
            break;
    }
    
    return 0;
}
