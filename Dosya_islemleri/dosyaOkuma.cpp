#include <stdio.h>
#include <string.h>

int main() {
    FILE *dosya;
    char satir[256];
    char *numara, *isim, *soyisim;

    // Dosyay� a�
    dosya = fopen("C:\\Users\\Bet�l DA�LI\\Desktop\\kayit.txt", "r");
    if (dosya == NULL) {
        printf("Dosya a�ma hatas�!\n");
        return 0;
    }

    // Dosyan�n sonuna kadar sat�r sat�r oku
    while (fgets(satir, sizeof(satir), dosya) != NULL) {
        // Sat�r� "#" karakterine g�re b�lelim
        numara = strtok(satir, "#");
        isim = strtok(NULL, "#");
        soyisim = strtok(NULL, "#");

        // E�er numara, isim ve soyisim NULL de�ilse, bilgileri yazd�r
        if (numara != NULL || isim != NULL || soyisim != NULL) {
        	printf("1111");
            printf("No: %s, �sim: %s, Soyisim: %s\n", numara, isim, soyisim);
        }
    }

    // Dosyay� kapat
    fclose(dosya);

    return 0;
}
