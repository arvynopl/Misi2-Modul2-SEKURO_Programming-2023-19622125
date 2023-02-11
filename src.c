#include <stdio.h>
#include <stdlib.h>

void main(){
    char *jawaban1;
    char *nama[50];
    int *jawaban2;
    int *jawaban3;
    char *menu[50];

    printf("Apakah Anda mau membuka atau menutup toko? %c\n", &jawaban1);
    scanf("%c", &jawaban1);

    if(&jawaban1 == "Y"){
        printf("=====SELAMAT DATANG DI WARUNG ROGER=====\n");
        
        printf("Sebelumnya, boleh kami tahu nama Kakak? %s\n", &nama);
        scanf("%s", &nama);

        printf("Salam kenal %s, terdapat 3 pilihan untuk Anda\n", &nama);
        
        printf("1. Menu\n 2. Beli\n 3. Keluar\n Pilihan yang diambil: %d\n", &jawaban2);
        scanf("%d", &jawaban2);

        if(&jawaban2 == 1){
            printf("ID MENU || NAMA MENU || KATEGORI || HARGA\n");
            printf("F01 || Rendang || MAKANAN || 25.000\n");
            printf("F02 || Ayam Pop || MAKANAN || 20.000\n");
            printf("F03 || Gulai Tunjang || MAKANAN || 30.000\n");
            printf("F04 || Dendeng Kering || MAKANAN || 35.000\n");
            printf("F05 || Telur Bulat Balado || MAKANAN || 15.000\n");
            printf("B01 || Es Teh Manis || MINUMAN || 5.000\n");
            printf("B02 || Es Teh Tawar || MINUMAN || 3.000\n");
            printf("B03 || Es Jeruk || MINUMAN || 8.000\n");
            printf("B04 || Es Kelapa || MINUMAN || 10.000\n");
            printf("B05 || Es Kelapa Jeruk || MINUMAN || 16.000\n");

            printf("2. Beli\n 3. Keluar\n Pilihan yang diambil: %c\n", &jawaban2);
            scanf("%d", &jawaban2);
        }
        
        else if(&jawaban2 == 2){

            for(&jawaban3 != 0; &jawaban3 == 1;){
                printf("0. Bayar\n 1. Tambah\n Pilihan yang diambil: %d\n", &jawaban3);
                scanf("%d", &jawaban3);
            }    
        }
    }
}

// Mohon maaf sebelumnya, saya belum bisa untuk menyelesaikan semuanya.