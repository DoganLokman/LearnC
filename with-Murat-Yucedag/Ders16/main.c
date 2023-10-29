//
//  main.c
//  Ders16
//
//  Created by Lokman DOĞAN on 28.10.2023.
//

#include <stdio.h>

int main() { // Buradaki int main() parantezinin içinin boş olma durumu kullanımdan kaldırıldı, ancak bu değerlerin anlatıldığı derse kadar biz boş kullanacağız.
    /*
    int sayi1, sayi2, sonuc;
    char islem;
    printf("Lütfen ilk sayıyı giriniz: ");
    scanf("%d", &sayi1);
    
    printf("Lütfen yapılacak işlemi giriniz: ");
    scanf("%s", &islem);
    
    printf("Lütfen ikinci sayıyı giriniz: ");
    scanf("%d", &sayi2);
    
    switch (islem) {
        case '+':
            sonuc = sayi1 + sayi2;
            printf("%d + %d işleminin sonucu: %d\n",sayi1, sayi2, sonuc);
            break;
        case '-':
            sonuc = sayi1 - sayi2;
            printf("%d - %d işleminin sonucu: %d\n",sayi1, sayi2, sonuc);
            break;
        case '*':
            sonuc = sayi1 * sayi2;
            printf("%d x %d işleminin sonucu: %d\n",sayi1, sayi2, sonuc);
            break;
        case '/':
            sonuc = sayi1 / sayi2;
            printf("%d / %d işleminin sonucu: %d\n",sayi1, sayi2, sonuc);
            break;
            
        default:
            printf("Lütfen geçerli bir işlem giriniz.\n");
            break;
    }
    */
    
    int sayi1, sayi2, sonuc, secim;
    
    printf("***** İŞLEM MENÜSÜ *****\n\n");
    printf("(1) - Karede alan hesabı.\n");
    printf("(2) - Girilen sayının küpünü bulma.\n");
    printf("(3) - Dairede alan ve çevre hesabı.\n");
    printf("(4) - 5x² + 7x + 9 işleminin sonucu için x e değer verin.\n");
    printf("(5) - Dikdörtgende alan ve çevre hesabı.\n\n");
    printf("Lütfen yukarıdaki işlemlerden birini, başındaki işlem numarasını girerek seçiniz: ");
    scanf("%d", &secim);
    
    switch (secim) {
            
        case 1:
            printf("Lütfen karenin bir kenarının uzunluğunu giriniz: ");
            scanf("%d", &sayi1);
            
            sonuc = sayi1 * sayi1;
            
            printf(" Bir kenarı %d olan karenin alanı = %d\n", sayi1, sonuc);
            break;
            
        case 2:
            printf("Küpünü bulmak istediğiniz sayıyı giriniz: ");
            scanf("%d", &sayi1);
            
            sonuc = sayi1 * sayi1 * sayi1;
            printf("%d sayısının küpü = %d\n", sayi1, sonuc);
            break;
            
        case 3:
            printf("Lütfen alan ve çevresini hesaplamak istediğiniz dairenin yarıçapını yazınız: ");
            scanf("%d", &sayi1);
            
            float alan, cevre;
            alan = 3.14 * sayi1 * sayi1;
            cevre = 2 * 3.14 * sayi1;
            printf("Yarıçapı %d olan dairenin;\nAlanı = %f\nÇevresi = %f\n", sayi1, alan, cevre);
            break;
            
        case 4:
            printf("Lütfen denklemde yerine koymak için x'e bir değer veriniz: 5");
            scanf("%d", &sayi1);
            
            sonuc = (5 * sayi1 * sayi1) + (7 * sayi1) + 9;
            printf("Girdiğiniz %d değerini 5x² + 7x + 9 denkleminde x yerine koyduğumuzda sonuç = %d olur.\n", sayi1, sonuc);
            break;
            
        case 5:
            printf("Dikdörtgenin KISA kenarının uzunluğunu yazınız: ");
            scanf("%d", &sayi1);
            
            printf("Dikdörtgenin UZUN kenar uzunluğunu yazınız: ");
            scanf("%d", &sayi2);
            
            int dikalan, dikcevre;
            
            dikalan = sayi1 * sayi2;
            dikcevre = 2 * (sayi1 + sayi2);
            
            printf("Kısa kenarı %d, uzun kenarı %d olan dikdörtgenin;\nAlanı = %d\nÇevresi = %d \n", sayi1, sayi2, dikalan, dikcevre);
            break;
            
        default:
            printf("Yanlış seçim yaptınız. Programı baştan başlatıp menüdeki numarası üzerinden işlem seçiniz...\n");
            break;
    }
    
    
    return 0;
}
