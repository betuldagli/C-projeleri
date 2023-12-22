#include <stdio.h>
#include <string.h>

int main() {
    FILE *dosya;
    char satir[256];
    char *numara, *isim, *soyisim;

    // Dosyayý aç
    dosya = fopen("C:\\Users\\Betül DAÐLI\\Desktop\\kayit.txt", "r");
    if (dosya == NULL) {
        printf("Dosya açma hatasý!\n");
        return 0;
    }

    // Dosyanýn sonuna kadar satýr satýr oku
    while (fgets(satir, sizeof(satir), dosya) != NULL) {
        // Satýrý "#" karakterine göre bölelim
        numara = strtok(satir, "#");
        isim = strtok(NULL, "#");
        soyisim = strtok(NULL, "#");

        // Eðer numara, isim ve soyisim NULL deðilse, bilgileri yazdýr
        if (numara != NULL || isim != NULL || soyisim != NULL) {
        	printf("1111");
            printf("No: %s, Ýsim: %s, Soyisim: %s\n", numara, isim, soyisim);
        }
    }

    // Dosyayý kapat
    fclose(dosya);

    return 0;
}
