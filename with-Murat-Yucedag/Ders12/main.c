//
//  main.c
//  Ders12
//
//  Created by Lokman DOĞAN on 28.10.2023.
//

#include <stdio.h>

int main() { // Buradaki int main() parantezinin içinin boş olma durumu kullanımdan kaldırıldı, ancak bu değerlerin anlatıldığı derse kadar biz boş kullanacağız.
    
    /*
    // Fibonacci serisinin ilk 10 elemanını listeleyen kodu yazalım
    
    int a,b,c,i;
    a = 1;
    b = 1;
    
    printf("%d\n%d\n", a, b);
    
    for (i = 1; i <= 8; i++) {
        c = a + b;
        a = b;
        b = c;
        printf("%d\n", c);
    }
    */
    
    // Tribonacci serisinin ilk 10 elemanını listeleyen kodu yazalım
    
    int a,b,c,d,i;
    a = 1;
    b = 1;
    c = 1;
    
    printf("%d\n%d\n%d\n", a, b, c);
    
    for (i = 1; i <= 7; i++) {
        d = a + b + c;
        a = b;
        b = c;
        c = d;
        printf("%d\n", d);
    }

    
    return 0;
}
