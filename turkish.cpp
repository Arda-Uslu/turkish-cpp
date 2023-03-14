#include "turkish.hpp"


sinif A BASLANGIC

    genel
        tam_sayi a noktali_virgul
        A PB tam_sayi PS noktali_virgul
    ozel

BITIS noktali_virgul

A alan A PB tam_sayi c PS BASLANGIC
    yazdir giren_akinti c giren_akinti yenisatir noktali_virgul
BITIS

tam_sayi hesapla PB tam_sayi x PS BASLANGIC

    A a PB x PS noktali_virgul

BITIS

tam_sayi ANA BASLANGIC

    tam_sayi a ATA 10 noktali_virgul
    uzun b noktali_virgul
    metin son ATA "KAYBETTIN" noktali_virgul

    yazdir giren_akinti a giren_akinti yenisatir noktali_virgul

    veir_al cikan_akinti b noktali_virgul

    eger PB b buyukesitmi 10 PS BASLANGIC
        hesapla PB b PS noktali_virgul
    BITIS 
    degilse eger PB b kucukmu 0 PS BASLANGIC
        yazdir giren_akinti "furki--" giren_akinti yenisatir noktali_virgul
        BITIR noktali_virgul
    BITIS degilse BASLANGIC
        yazdir giren_akinti son giren_akinti yenisatir noktali_virgul
    BITIS 

    DONDUR sifir noktali_virgul

BITIS