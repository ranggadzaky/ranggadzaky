#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> // Untuk fungsi sleep

void drawRectangle(int panjang, int lebar) {
    // Menggambar kotak dengan loop for
    for (int i = 0; i < lebar; i++) {
        for (int j = 0; j < panjang; j++) {
            if (i == 0 || i == lebar - 1 || j == 0 || j == panjang - 1) {
                printf("*"); // Menampilkan asterisk untuk batas
            } else {
                printf(" "); // Menampilkan spasi di dalam kotak
            }
        }
        printf("\n"); // Pindah ke baris berikutnya
    }
}

void drawTriangle(int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n"); 
    }
}

int main() {
    int panjang, lebar, height;
    char choice[20];

    while (1) {
        printf("Pilih jenis gambar (persegi / segitiga / keluar): ");
        scanf("%s", choice);

        if (strcmp(choice, "persegi") == 0) { // Persegi Panjang
            printf("Masukkan panjang (10-100): ");
            scanf("%d", &panjang);
            printf("Masukkan lebar (5-75): ");
            scanf("%d", &lebar);
            
            if (panjang < 10 || panjang > 100) {
                printf("Panjang harus antara 10 dan 100.\n");
                continue;
            }
            if (lebar < 5 || lebar > 75) {
                printf("Lebar harus antara 5 dan 75.\n");
                continue;
            }
            
            drawRectangle(panjang, lebar);
        } else if (strcmp(choice, "segitiga") == 0) { // Segitiga
            printf("Masukkan tinggi segitiga (minimal 1): ");
            scanf("%d", &height);

            if (height < 1) {
                printf("Tinggi harus minimal 1.\n");
                continue;
            }

            drawTriangle(height);
        } else if (strcmp(choice, "keluar") == 0) { // Keluar
            printf("Keluar dari program.\n");
            return 0;
        } else { // Pilihan tidak valid
            printf("Pilihan tidak valid, silakan coba lagi.\n");
            continue;
        }

        printf("\nGambar telah ditampilkan.\n");
        sleep(1); 
    }
    return 0;
}
