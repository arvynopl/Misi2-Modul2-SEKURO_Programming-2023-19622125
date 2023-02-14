// Mohon maaf sebelumnya, saya belum bisa untuk menyelesaikan semua fiturnya sesuai spesifikasi yang diminta serta dokumentasi
#include <stdio.h>
#include <stdlib.h>

void main(){
    char jawaban1;
    char nama[50];
    int jawaban2;
    int jawaban3;
    int menu;
    int jumlahrendang;
    int jumlahpop;
    int jumlahtunjang;
    int jumlahdendeng;
    int jumlahtelur;
    int jumlahmanis;
    int jumlahtawar;
    int jumlahjeruk;
    int jumlahkelapa;
    int jumlahkelruk;
    int subharga1;
    int subharga2;
    int subharga3;
    int subharga4;
    int subharga5;
    int subharga6;
    int subharga7;
    int subharga8;
    int subharga9;
    int subharga10;
    int totalharga;

    printf("Apakah Anda mau membuka atau menutup toko? %c\n", jawaban1);
    scanf("%c", jawaban1);

    if(jawaban1 == 'Y'){
        printf("=====SELAMAT DATANG DI WARUNG ROGER=====\n");
        
        printf("Sebelumnya, boleh kami tahu nama Kakak? %s\n", nama);
        scanf("%s", nama);

        printf("Salam kenal %s, terdapat 3 pilihan untuk Anda\n", nama);
        
        printf("1. Menu\n 2. Beli\n 3. Keluar\n Pilihan yang diambil: %d\n", jawaban2);
        scanf("%d", jawaban2);

        if(jawaban2 == 1){
            printf("ID MENU || NAMA MENU || KATEGORI || HARGA\n");
            printf("1 || Rendang || MAKANAN || 25.000\n");
            printf("2 || Ayam Pop || MAKANAN || 20.000\n");
            printf("3 || Gulai Tunjang || MAKANAN || 30.000\n");
            printf("4 || Dendeng Kering || MAKANAN || 35.000\n");
            printf("5 || Telur Bulat Balado || MAKANAN || 15.000\n");
            printf("6 || Es Teh Manis || MINUMAN || 5.000\n");
            printf("7 || Es Teh Tawar || MINUMAN || 3.000\n");
            printf("8 || Es Jeruk || MINUMAN || 8.000\n");
            printf("9 || Es Kelapa || MINUMAN || 10.000\n");
            printf("10 || Es Kelapa Jeruk || MINUMAN || 16.000\n");

            printf("2. Beli\n 3. Keluar\n Pilihan yang diambil: %c\n", jawaban2);
            scanf("%d", jawaban2);
        }
        
        else if(jawaban2 == 2){

            for(jawaban3 != 0; jawaban3 == 1;){
                printf("0. Bayar\n 1. Tambah\n Pilihan yang diambil: %d\n", jawaban3);
                scanf("%d", jawaban3);

                if(jawaban3 == 1){
                    printf("Menu yang ingin dipilih (kode makanan): %d\n", menu);
                    scanf("%d", menu);
                    
                    switch(menu){
                        case 1:
                            printf("\n (1) Menu Rendang\n");
                            printf("Jumlah pesanan: %d\n", jumlahrendang);
                            scanf("%d", jumlahrendang);
                            printf("\n====================\n");
                            subharga1 = jumlahrendang * 25000;
                            break;
                        case 2:
                            printf("\n (2) Menu Ayam Pop\n");
                            printf("Jumlah pesanan: %d\n", jumlahpop);
                            scanf("%d", jumlahpop);
                            printf("\n====================\n");
                            subharga2 = jumlahpop * 20000;
                            break;
                        case 3:
                            printf("\n (3) Menu Gulai Tunjang\n");
                            printf("Jumlah pesanan: %d\n", jumlahtunjang);
                            scanf("%d", jumlahtunjang);
                            printf("\n====================\n");
                            subharga3 = jumlahtunjang * 30000;
                            break;
                        case 4:
                            printf("\n (4) Menu Dendeng Kering\n");
                            printf("Jumlah pesanan: %d\n", jumlahdendeng);
                            scanf("%d", jumlahdendeng);
                            printf("\n====================\n");
                            subharga4 = jumlahdendeng * 35000;
                            break;
                        case 5:
                            printf("\n (5) Menu Telur Bulat Balado\n");
                            printf("Jumlah pesanan: %d\n", jumlahtelur);
                            scanf("%d", jumlahtelur);
                            printf("\n====================\n");
                            subharga5 = jumlahtelur * 15000;
                            break;
                        case 6:
                            printf("\n (6) Menu Es Teh Manis\n");
                            printf("Jumlah pesanan: %d\n", jumlahmanis);
                            scanf("%d", jumlahmanis);
                            printf("\n====================\n");
                            subharga6 = jumlahmanis * 5000;
                            break;
                        case 7:
                            printf("\n (7) Menu Es Teh Tawar\n");
                            printf("Jumlah pesanan: %d\n", jumlahtawar);
                            scanf("%d", jumlahtawar);
                            printf("\n====================\n");
                            subharga7 = jumlahtawar * 3000;
                            break;
                        case 8:
                            printf("\n (8) Menu Es Jeruk\n");
                            printf("Jumlah pesanan: %d\n", jumlahjeruk);
                            scanf("%d", jumlahjeruk);
                            printf("\n====================\n");
                            subharga8 = jumlahjeruk * 8000;
                            break;
                        case 9:
                            printf("\n (9) Menu Es Kelapa\n");
                            printf("Jumlah pesanan: %d\n", jumlahkelapa);
                            scanf("%d", jumlahkelapa);
                            printf("\n====================\n");
                            subharga9 = jumlahkelapa * 10000;
                            break;
                        case 10:
                            printf("\n (10) Menu Es Kelapa Jeruk\n");
                            printf("Jumlah pesanan: %d\n", jumlahkelruk);
                            scanf("%d", jumlahkelruk);
                            printf("\n====================\n");
                            subharga10 = jumlahkelruk * 16000;
                            break;
                    }

                    
                }

                else{
                    printf("\nDaftar Pesanan\n");
                    printf("Jumlah || Nama Menu || Total Harga\n");
                    printf("\n====================\n");
                    printf("%d   || Rendang              || Rp.%d,- \n",jumlahrendang, subharga1);
                    printf("%d   || Ayam Pop             || Rp.%d,- \n",jumlahpop, subharga2);
                    printf("%d   || Gulai Tunjang        || Rp.%d,- \n",jumlahtunjang, subharga3);
                    printf("%d   || Dendeng Kering       || Rp.%d,- \n",jumlahdendeng, subharga4);
                    printf("%d   || Telur Bulat Balado   || Rp.%d,- \n",jumlahtelur, subharga5);
                    printf("%d   || Es Teh Manis         || Rp.%d,- \n",jumlahmanis, subharga6);
                    printf("%d   || Es Teh Tawar         || Rp.%d,- \n",jumlahtawar, subharga7);
                    printf("%d   || Es Jeruk             || Rp.%d,- \n",jumlahjeruk, subharga8);
                    printf("%d   || Es Kelapa            || Rp.%d,- \n",jumlahkelapa, subharga9);
                    printf("%d   || Es Kelapa Jeruk      || Rp.%d,- \n",jumlahkelruk, subharga10);
                    printf("\n====================\n");

                    totalharga = subharga1 + subharga2 + subharga3 + subharga4 + subharga5 + subharga6 + subharga7 + subharga8 + subharga9 + subharga10;
                    printf("\n====================\nTotal Harga: Rp.%d,-\n====================\n", totalharga);
                    printf("Senang bisa melayani Anda, terima kasih atas kunjungannya! Sampai jumpa di lain waktu!");
                }
            }    
        }

        else{
            printf("Senang bisa melayani Anda, terima kasih atas kunjungannya! Sampai jumpa di lain waktu!");
        }
    }
    
    else{
        printf("Mohon maaf fitur riwayat penjualan belum ada. Mohon menunggu untuk pengembangan versi berikutnya, terima kasih.");
    }
}