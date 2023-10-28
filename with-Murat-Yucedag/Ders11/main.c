//
//  main.c
//  Ders11
//
//  Created by Lokman DOĞAN on 28.10.2023.
//

#include <stdio.h>

int main() { // Buradaki int main() parantezinin içinin boş olma durumu kullanımdan kaldırıldı, ancak bu değerlerin anlatıldığı derse kadar biz boş kullanacağız.
    
    /*
     DÖNGÜLER / 2 (Sayaç)
     
     
    */
    /*
    int sayac = 0;
    int i;
    
    for (i=1; i <= 10; i++) {
        sayac = sayac + i;
        
    }
    */
    /*
     // Faktöriyel Hesabı
    int i;
    int fakt = 1;
    
    for (i = 1; i <= 6; i++) {
        fakt = fakt * i;
    }
    
    printf("6! değeri = %d\n", fakt);
    */
    
    // Klavyeden girilen sayının faktöriyeli
    int i, sayi;
    int fakt = 1;
    
    printf("Faktöriyeli alınacak sayıyı girin: ");
    scanf("%d", &sayi);
    
    for (i=1; i <= sayi; i++) {
        fakt = fakt*i;
    }
    
    printf("%d! = %d\n", sayi, fakt);
    
     
    return 0;
}
