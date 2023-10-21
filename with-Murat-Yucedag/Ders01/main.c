//
//  main.c
//  Ders1
//
//  Created by Lokman DOĞAN on 18.10.2023.
//

#include <stdio.h>

int main() { // Buradaki int main() parantezinin içinin boş olma durumu kullanımdan kaldırıldı, ancak bu değerlerin anlatıldığı derse kadar biz boş kullanacağız.
    // insert code here...
    /*
    Konsolda kodlarımızı yazdırmak için programlama dillerine göre değişiklik gösteren komutlar kullanılır:
     C dilinde => printf (Küçük harf ile yazılır, print formatted kelimelerinden gelmektedir.)
     C# dilinde => console.write
     Java dilinde => system.out.print
     şeklinde yazılır. Buna syntax denir.
    
    Komut satırında ifadeyi alt satıra geçirmek için başına \n sembolünü yazmamız gerekiyor.
    */
    printf("Merhaba Dünya!\n"); // Programlama dillerinin genelinde kod satırının bittiğini ; göstermek zorundayız.
    printf("*************** Kişi Bilgileri ***************\n");
    printf("Adı: Lokman\n");
    printf("Soyadı: DOĞAN\n");
    printf("Mesleği: Yönetim Bilişim Sistemleri Uzmanı\n");
    printf("Maaşı: Kadının yaşı erkeğin maaşı sorulmaz... :)\n");
    printf("Şehir: Kocaeli.\n");
    printf("***********************************************\n");
    printf("\n\n");
    printf("ÖDEV:\n");
    printf("Öğrenci 1\n");
    printf("---------------------------------------------\n");
    printf("Ad: Lokman\n");
    printf("Soyad: DOĞAN\n");
    printf("Sınıf: 4. Sınıf\n");
    printf("Meslek: Yönetim Bilişim Sistemleri Uzmanı\n");
    printf("İş: Muhasebe\n");
    printf("---------------------------------------------\n");
    printf("\n\n");
    printf("Öğrenci 2\n");
    printf("---------------------------------------------\n");
    printf("Ad: Kenan\n");
    printf("Soyad: KARABULUT\n");
    printf("Sınıf: 4. Sınıf\n");
    printf("Meslek: Kamu Yönetimi\n");
    printf("İş: Sendika Yöneticisi\n");
    printf("---------------------------------------------\n");
    printf("\n\n");
    printf("Öğrenci 3\n");
    printf("---------------------------------------------\n");
    printf("Ad: Çağrı Rıza\n");
    printf("Soyad: ÖNER\n");
    printf("Sınıf: 4. Sınıf\n");
    printf("Meslek: Bilgisayar Yüksek Mühendisi\n");
    printf("İş: Veri Güvenliği Uzmanı\n");
    printf("---------------------------------------------\n");    
    
    return 0;
}
