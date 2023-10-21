//
//  main.c
//  Ders2
//
//  Created by Lokman DOĞAN on 18.10.2023.
//

#include <stdio.h>

int main() { // Buradaki int main() parantezinin içinin boş olma durumu kullanımdan kaldırıldı, ancak bu değerlerin anlatıldığı derse kadar biz boş kullanacağız.
    // insert code here...
    /*
     METİNSEL DEĞİŞKENLER
     Değişken Nedir?
        Programda kullanılan verilerin bellkte tutması için gereken komutlardır.
     Değişken Türleri
        string
        int
        double
        float
        char
        long
        short
        gibi veri türleri vardır.
     
        String kelimesinin tam karşılığı İngilizceden dizi olarak çevrilebilir. C dilinde de bir metinsel veriyi bellekte tutma yöntemi o metinsel verinin her bir harfini ayrı ayrı karakterler olarak tutar ve bunları bir seri, dizi olarak getirir. Yani sehir adındaki değişkenimizin değeri SİVAS olsun. sehir değişkeninin değeri olan SİVAS harf harf depolanır, yani S,İ,V,A,S her biri bir karakter olarak tutulur ve değişkenin değeri bu karakterlerin bir dizisidir. Bu sebeple bu tür metinsel değerler string (str) türünde bellekte tutulur. Böylelikle char türününde sadece bir karakteri barındıran bir tür olduğunu da buradan sonuç olarak elde edebiliriz.
        Char türünde de bir karakterden fazla olan değerler tutulabilir. Yykarıdaki sehir değişkenini ele alırsak eğer biz burada SİVAS değerini char türünde tutabiliriz ancak sehir[5] şeklinde köşeli parantezler içerisinde bu char türündeki değişkenin içerisinde kaç adet karakteri seri olarak tutacağımızı belirtmeliyiz. Bütün şehirleri listelediğimiz bir veri işlemede en fazla karakter hangi şehir adında var ise o sayı belirtilmelidir. Eğer daha düşük bir değer belirtilirse yani sehir[3] şeklinde girersek şehir adının ilk 3 karakterini tutar ve örneğimize göre SİV şeklinde kalır. Aynı şekilde fazla bir değer yazabiliriz ancak şehrin adı o kadar uzun olmasada değişken fazla olan karakterlerin yerine null değer atayarak doldurur ve bu da bellekte fazladan yer tutmasına sebebiyet verir.
     Değişken Tanımlama
        Bir değişken şu şekilde tanımlanır;
            DeğişkenTürü DeğişkenAdı=Değeri
        
    */
    /*
    char kitapadi[20] = "Nutuk";
    char kitapyazar[10] = "Atatürk";
    
    
    printf("%s\n", kitapadi);
    printf("%s\n", kitapyazar);
    */
    /*
    char kitapturu[10] = "Roman Kitabı";
    printf("Kitap Türü: %s\n", kitapturu);
    */
    
    char kitapadi[20] = "Hayvan Çiftliği";
    char yazar[30] = "George Orwel";
    char tur[30]= "Roman";
    char sayfa[3] = "125";
    char basimyili[4] = "2007";
    
    printf("********** Kitap Tanıtım **********\n");
    printf("Kitap Adı: %s - Kitabın Yazarı: %s\n", kitapadi, yazar);
    printf("Kitabın Türü: %s\n", tur);
    printf("Sayfa sayısı: %s\n", sayfa);
    printf("Basım Yılı: %s\n", basimyili);
    
    
    return 0;
}
