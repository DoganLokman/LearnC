//
//  main.c
//  Ders3
//
//  Created by Lokman DOĞAN on 19.10.2023.
//

#include <stdio.h>

int main() { //main parantezinin içini şimdilik siliyoruz. oradaki değerler anlatılacak!
    // Bu derste scanf fonksiyonu incelenecek.
    /*
    char kitapad[20] = "Kadın Beyni";
    printf("Kitap Adı: %s\n", kitapad); // Buradaki %s ifadesinde yer alan s string'den gelmektedir.
    */
    /*
    char kitapad[30]; // Burada bir değişkenin varlığından bahsettik ancak bu değişkene bir değer atamadık. Atama = ile yapılıyor. Burada yaptığımız şey bir değişkenimiz var ve türü char şeklinde belirtmiş olduk.
    printf("Kitabın adını giriniz: ");
    // scanf fonksiyonu kullanıcıdan/ziyaretçiden veri alınması için kullanılır. Yani kullanıcıya bir soru sorulur ve cevap beklenir. Verilen cevabın ne olduğunu scanf fonksiyonu ile tespit ederiz. Bu fonksiyonun formatı da aşağıdaki gibidir.
    scanf("%s", kitapad); // Burada kullanıcının girdiği kitap adını kitapad değişkenine atadık ve belleğe aldık.
    
    printf("Girmiş olduğunuz kitabın adı: %s.\n", kitapad);
    */
    
    /*
     scanf fonksiyonu kullanıldığında kullanıcının girdiği değer eğer boşluk karakterini içeriyorsa belleğe boşluğa kadar olan kısım alınır.
        Yani kullanıcı kitap adı olarak "Kadın Beyni" yazdığında belleğe sadece "Kadın" değeri alınır, boşluktan sonraki hiçbir veri belleğe alınmaz.
    */
    
    char Ad[10], Soyad[10], Yas[2], Sehir[13], Meslek[30];
    
    printf("Adınızı Yazınız: ");
    scanf("%s", Ad);
    printf("Soyadınızı Yazınız: ");
    scanf("%s", Soyad);
    printf("Yaşınızı Yazınız: ");
    scanf("%s", Yas);
    printf("Hangi Şehirde Yaşıyorsunuz? Lütfen yazınız: ");
    scanf("%s", Sehir);
    printf("Meleğiniz Nedir? Lütfen Yazınız: ");
    scanf("%s", Meslek);
    
    printf("\n\nSayın %s %s\n", Ad, Soyad);
    printf("Yaşnız: %s\n", Yas);
    printf("Mesleğiniz: %s - Yaşadığınız şehir: %s\n", Meslek, Sehir);
    printf("Aramıza hoşgeldiniz!\n");
    
    
    return 0;
}
