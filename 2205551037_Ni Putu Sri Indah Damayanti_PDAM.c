#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void cover(){
    printf("\t\t\t------------------------------------------------------\n");
    printf("\t\t\t|---------------------WELCOME------------------------|\n");
    printf("\t\t\t|------------------PROGRAM PDAM----------------------|\n");
    printf("\t\t\t|====================================================|\n");
    printf("\t\t\t|                OLEH               ||      NIM      |\n");
    printf("\t\t\t|>> Laurensia Dini Marys Haryanto   ||   2205551028  |\n");
    printf("\t\t\t|>> Ni Putu Sri Indah Damayanti     ||   2205551037  |\n");
    printf("\t\t\t|>> Alfredo Felix Maruba            ||   2205551038  |\n");
    printf("\t\t\t------------------------------------------------------\n");
}


int validasi(){
	int angka;
    char karakter;
    if (scanf("%d%c",&angka,&karakter)!= 2 || angka<=0 || angka > 2 || karakter != '\n'){
        fflush(stdin);
        printf("\t\tInput invalid! Masukkan menu yang benar : ");
        return validasi();
    } else {
        return angka;
    }
}

int validasi2(){
	int angka;
    char karakter;
    if (scanf("%d%c",&angka,&karakter)!= 2 || angka<=0 || angka > 3 ){
        fflush(stdin);
        printf("\t\tInput invalid! Masukkan menu yang benar : ");
        return validasi2();
    } else {
        return angka;
    }
}


int inputan(){
	int angka;
    char karakter;
    if (scanf("%d%c",&angka,&karakter)!= 2 || angka<=0){
        fflush(stdin);
        printf("\t\tInput invalid! Masukkan menu yang benar : ");
        return inputan();
    } else {
        return angka;
    }
}


int main(){
	
	cover();
	/*	DEKRALASI VARIABEL	*/
	int bangunan;		//MENAMPUNG BANGUNAN
	char gol[5];		//MENAMPUNG GOLONGAN BANGUNAN
	int air_l, air_s, total_air;		//UNTUK PERHITUNGAN AIR
	int daya; 		//UNTUK MENAMPUNG DAYA LISTRIK
	float tarif;		//TARIF PEMAKAIAN AIR
	int pilihan;		//UNTUK PILIHAN SUBSIDI ATAU TIDAK || UNTUK MENGETAHUI JENIS NIAGA
	float denda;		//UNTUK MENYIMPAN DENDA
	float pemeliharaan;		//UNTUK MENAMPUNG BIAYA PEMELIHARAAN
	
    printf("==================================\n");
	printf("====*      Jenis Bangunan    *====\n");
	printf("===      [1] Rumah Tangga      ===\n");
	printf("====*    [2] Usaha           *====\n");
	printf("==================================\n\n");
	printf("\nMasukan Jenis Bangunan\n>> ");
	bangunan = validasi();
	
	/*	KONDISI BANGUNAN	*/
    system("cls");
	if(bangunan == 1){
		pemeliharaan = 10.00;

		printf(" Pilihan Golongan\n");
		printf("1. Non Niaga Bersubsidi\n");
		printf("2. Non Niaga Tanpa Subsidi\n>> ");
		pilihan = validasi();
		
		system("cls");
        if(pilihan == 1){
            printf("Golongan Rumah\n");
            printf(" A1 (brem <= 3.99), (daya = 450 || 900)\n");
            printf(" A2 (brem >= 4.00 || <= 6.99), (daya = 450 || 900)\n");
            printf(" A3 (brem >= 7.00 || <= 10.00), (daya = 450 || 900)\n");
            printf(" A4 (brem > 10), (daya = 450 || 900)\n");
			printf("Masukan golongan rumah\n>> ");
			scanf("%s", gol);
			printf("Masukan daya listrik\n>> ");
			daya = inputan();
			
			/*	PROSES PENGGUNAAN AIR	*/
			printf("Masukan pemakaian air bulan lalu\n>> ");
			air_l = inputan();
			printf("Masukan pemakaian air bulan sekarang\n>> ");
			air_s = inputan();
			
			total_air = air_s - air_l;
			
			if(strcmp(gol, "A1")==0){
				if(daya = 450){
					if(total_air >= 0 || total_air <= 10){
						tarif = total_air * 1.780;
					}else if(total_air > 10 || total_air <= 20){
						tarif = total_air * 2.060;
					}else if(total_air > 20){
						tarif = total_air * 5.880;
					}
				}else if(daya = 900){
					if(total_air >= 0 || total_air <= 10){
						tarif = total_air * 2.060;
					}else if(total_air > 10 || total_air <= 20){
						tarif = total_air * 2.340;
					}else if(total_air > 20){
						tarif = total_air * 5.940;
					}
				}
			}else if(strcmp(gol, "A2")==0){
				if(daya = 450){
					if(total_air >= 0 || total_air <= 10){
						tarif = total_air * 2.340;
					}else if(total_air > 10 || total_air <= 20){
						tarif = total_air * 2.620;
					}else if(total_air > 20){
						tarif = total_air * 5.940;
					}
				}else if(daya = 900){
					if(total_air >= 0 || total_air <= 10){
						tarif = total_air * 2.620;
					}else if(total_air > 10 || total_air <= 20){
						tarif = total_air * 2.900;
					}else if(total_air > 20){
						tarif = total_air * 6.060;
					}
				}
			}else if(strcmp(gol, "A3")==0){
				if(daya = 450){
					if(total_air >= 0 || total_air <= 10){
						tarif = total_air * 2.900;
					}else if(total_air > 10 || total_air <= 20){
						tarif = total_air * 3.180;
					}else if(total_air > 20){
						tarif = total_air * 6.120;
					}
				}else if(daya = 900){
					if(total_air >= 0 || total_air <= 10){
						tarif = total_air * 3.180;
					}else if(total_air > 10 || total_air <= 20){
						tarif = total_air * 3.460;
					}else if(total_air > 20){
						tarif = total_air * 6.180;
					}
				}
			}else if(strcmp(gol, "A4")==0){
				if(daya = 450){
					if(total_air >= 0 || total_air <= 10){
						tarif = total_air * 3.460;
					}else if(total_air > 10 || total_air <= 20){
						tarif = total_air * 3.740;
					}else if(total_air > 20){
						tarif = total_air * 6.240;
					}
				}else if(daya = 900){
					if(total_air >= 0 || total_air <= 10){
						tarif = total_air * 3.740;
					}else if(total_air > 10 || total_air <= 20){
						tarif = total_air * 4.020;
					}else if(total_air > 20){
						tarif = total_air * 6.300;
					}
				}
			}
		}else if(pilihan == 2){
            printf("Golongan Rumah\n");
            printf(" A1 (brem <= 3.99), (daya = 1300 || >1300)\n");
            printf(" A2 (brem >= 4.00 || <= 6.99), (daya = 1300 || >1.300)\n");
            printf(" A3 (brem >= 7.00 || <= 10.00), (daya = 1300 || >1.300)\n");
            printf(" A4 (brem > 10), (daya = 1300 || >1300)\n");
			printf("Masukan golongan rumah\n>> ");
			scanf("%s", gol);
			printf("Masukan daya listrik\n>> ");
			daya = inputan();
			
			/*	PROSES PENGGUNAAN AIR	*/
			printf("Masukan pemakaian air bulan lalu\n>> ");
			air_l = inputan();
			printf("Masukan pemakaian air bulan sekarang\n>> ");
			air_s = inputan();
			
			total_air = air_s - air_l;
			
			if(strcmp(gol, "A1")==0){
				if(daya = 1300){
					if(total_air >= 0 || total_air <= 10){
						tarif = total_air * 6.340;
					}else if(total_air > 10 || total_air <= 20){
						tarif = total_air * 9.200;
					}else if(total_air > 20){
						tarif = total_air * 9.600;
					}
				}else if(daya > 1300){
					if(total_air >= 0 || total_air <= 10){
						tarif = total_air * 6.420;
					}else if(total_air > 10 || total_air <= 20){
						tarif = total_air * 9.350;
					}else if(total_air > 20){
						tarif = total_air * 9.650;
					}
				}
			}else if(strcmp(gol, "A2")==0){
				if(daya = 1300){
					if(total_air == 0 || total_air <= 10){
						tarif = total_air * 6.490;
					}else if(total_air > 10 || total_air <= 20){
						tarif = total_air * 9.500;
					}else if(total_air > 20){
						tarif = total_air * 9.800;
					}
				}else if(daya > 1300){
					if(total_air >= 0 || total_air <= 10){
						tarif = total_air * 6.570;
					}else if(total_air > 10 || total_air <= 20){
						tarif = total_air * 9.650;
					}else if(total_air > 20){
						tarif = total_air * 9.950;
					}
				}
			}else if(strcmp(gol, "A3")==0){
				if(daya = 1300){
					if(total_air >= 0 || total_air <= 10){
						tarif = total_air * 6.640;
					}else if(total_air > 10 || total_air <= 20){
						tarif = total_air * 9.800;
					}else if(total_air > 20){
						tarif = total_air * 10.100;
					}
				}else if(daya > 1300){
					if(total_air >= 0 || total_air <= 10){
						tarif = total_air * 6.720;
					}else if(total_air > 10 || total_air <= 20){
						tarif = total_air * 9.950;
					}else if(total_air > 20){
						tarif = total_air * 10.250;
					}
				}
			}else if(strcmp(gol, "A4")==0){
				if(daya = 1300){
					if(total_air == 0 || total_air <= 10){
						tarif = total_air * 6.790;
					}else if(total_air > 10 || total_air <= 20){
						tarif = total_air * 10.100;
					}else if(total_air > 20){
						tarif = total_air * 10.400;
					}
				}else if(daya > 1300){
					if(total_air >= 0 || total_air <= 10){
						tarif = total_air * 6.879;
					}else if(total_air > 10 || total_air <= 20){
						tarif = total_air * 10.250;
					}else if(total_air > 20){
						tarif = total_air * 10.550;
					}
				}
			}
		}
	}else if(bangunan == 2){
		pemeliharaan = 20.00;
		
		printf("Jenis Usaha\n");
		printf("1. Niaga Kecil\n");
		printf("2. Niaga Sedang\n");
		printf("3. Niaga Besar\n>> ");
		pilihan = validasi2();
		
        system("cls");
        printf("Daya Listrik : \n");
        printf(" 450\n");
        printf(" 900\n");
        printf(" 1.300\n");
        printf(" >1.300\n");
		printf("Masukan daya listrik\n>> ");
		daya = inputan();
		
		/*	PROSES PENGGUNAAN AIR	*/
		printf("Masukan pemakaian air bulan lalu\n>> ");
		air_l = inputan();
		printf("Masukan pemakaian air bulan sekarang\n>> ");
		air_s = inputan();
			
		total_air = air_s - air_l;
	
		if(pilihan == 1){
			if(daya =450){
				if(total_air >= 0 || total_air <= 10){
					tarif = total_air * 9.200;
				}else if(total_air > 10 || total_air <= 20){
					tarif = total_air * 9.850;
				}else if(total_air > 20){
					tarif = total_air * 10.950;
				}
			}else if(daya =900){
				if(total_air >= 0 || total_air <= 10){
					tarif = total_air * 9.500;
				}else if(total_air > 10 || total_air <= 20){
					tarif = total_air * 10.150;
				}else if(total_air > 20){
					tarif = total_air * 11.250;
				}
			}else if(daya = 1300){
				if(total_air >= 0 || total_air <= 10){
					tarif = total_air * 9.800;
				}else if(total_air > 10 || total_air <= 20){
					tarif = total_air * 10.450;
				}else if(total_air > 20){
					tarif = total_air * 11.550;
				}
			}else if(daya > 1300){
				if(total_air >= 0 || total_air <= 10){
					tarif = total_air * 10.100;
				}else if(total_air > 10 || total_air <= 20){
					tarif = total_air * 10.750;
				}else if(total_air > 20){
					tarif = total_air * 11.850;
				}
			}
		}else if(pilihan == 2){
			if(daya =450){
				if(total_air >= 0 || total_air <= 10){
					tarif = total_air * 10.400;
				}else if(total_air > 10 || total_air <= 20){
					tarif = total_air * 11.050;
				}else if(total_air > 20){
					tarif = total_air * 12.150;
				}
			}else if(daya =900){
				if(total_air >= 0 || total_air <= 10){
					tarif = total_air * 10.700;
				}else if(total_air > 10 || total_air <= 20){
					tarif = total_air * 11.350;
				}else if(total_air > 20){
					tarif = total_air * 12.550;
				}
			}else if(daya =1300){
				if(total_air >= 0 || total_air <= 10){
					tarif = total_air * 11.000;
				}else if(total_air > 10 || total_air <= 20){
					tarif = total_air * 11.650;
				}else if(total_air > 20){
					tarif = total_air * 13.150;
				}
			}else if(daya > 1300){
				if(total_air >= 0 || total_air <= 10){
					tarif = total_air * 11.300;
				}else if(total_air > 10 || total_air <= 20){
					tarif = total_air * 11.950;
				}else if(total_air > 20){
					tarif = total_air * 13.950;
				}
			}
		}else if(pilihan == 3){
			if(daya =450){
				if(total_air >= 0 || total_air <= 10){
					tarif = total_air * 11.600;
				}else if(total_air > 10 || total_air <= 20){
					tarif = total_air * 12.250;
				}else if(total_air > 20){
					tarif = total_air * 14.750;
				}
			}else if(daya =900){
				if(total_air >= 0 || total_air <= 10){
					tarif = total_air * 11.900;
				}else if(total_air > 10 || total_air <= 20){
					tarif = total_air * 12.550;
				}else if(total_air > 20){
					tarif = total_air * 15.050;
				}
			}else if(daya =1300){
				if(total_air >= 0 || total_air <= 10){
					tarif = total_air * 12.200;
				}else if(total_air > 10 || total_air <= 20){
					tarif = total_air * 12.850;
				}else if(total_air > 20){
					tarif = total_air * 15.850;
				}
			}else if(daya > 1300){
				if(total_air >= 0 || total_air <= 10){
					tarif = total_air * 12.500;
				}else if(total_air > 10 || total_air <= 20){
					tarif = total_air * 13.150;
				}else if(total_air > 20){
					tarif = total_air * 16.650;
				}
			}
		}
	}
	
	if(total_air >100){
		denda = total_air * 0.20;
	}else if(total_air < 10){
		denda =total_air * 0.10;
	}
	
	printf("TOTAL penggunaan air bulan ini\n>> %d\n", total_air);
	printf("TOTAL denda\n>> %.2f\n", denda);
	tarif = denda + tarif + pemeliharaan;
	printf("TOTAL pembayaran\n>> %.2f", tarif);

	return 0;
}
