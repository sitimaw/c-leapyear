#include <stdio.h>
int main (){
	int tahun, bulan;
	printf("~-~PROGRAM MENENTUKAN TAHUN KABISAT~-~\n\n");
	printf("Masukkan tahun: ");
	scanf("%d", &tahun);
	printf("Masukkan bulan: ");
	scanf("%d", &bulan);//input bulan dengan angka
//syarat untuk menentukan tahun kabisat sesuai algoritma yang ditentukan
	if(tahun % 400 == 0){
		printf("Tahun %d adalah TAHUN KABISAT\n", tahun);
	}else if(tahun % 100 == 0){
		printf("Tahun %d BUKAN TAHUN KABISAT\n", tahun);
	}else if(tahun % 4 == 0){
		printf("Tahun %d adalah TAHUN KABISAT\n", tahun);
	}else{
		printf("Tahun %d BUKAN TAHUN KABISAT\n", tahun);
	}
/*output jumlah hari dalam bulan
  output yang keluar berupa nama bulan sesuai angka yang diinput
  bulan-bulan dengan jumlah hari yang sama digolongkan dalam satu conditional 'if'*/
	printf("Jumlah hari pada bulan");
	if(bulan == 1 || bulan == 3 || bulan == 5 || bulan == 7 || bulan == 8 || bulan == 10 || bulan == 12){
		switch (bulan){
			case 1: printf(" Januari ");break;
			case 3: printf(" Maret ");break;
			case 5: printf(" Mai ");break;
			case 7: printf(" Juli ");break;
			case 8: printf(" Agustus ");break;
			case 10: printf(" Oktober ");break;
			case 12: printf(" Desember ");break;
		}//switch case digunakan agar bisa menampilkan nama bulan yang sesuai
		printf("tahun %d adalah 31\n", tahun);
	}
	if(bulan == 4 || bulan == 6 || bulan == 9 || bulan == 11){
		switch (bulan){
			case 4: printf(" April ");break;
			case 6: printf(" Juni ");break;
			case 9: printf(" September ");break;
			case 11: printf(" November ");break;
		}
		printf("tahun %d adalah 30\n", tahun);
	}
	if(tahun % 400 == 0 && bulan == 2){
		printf(" Februari tahun %d adalah 29\n", tahun);
	}else if(tahun % 100 == 0 && bulan == 2){
		printf(" Februari tahun %d adalah 28\n", tahun);
	}else if(tahun % 4 == 0 && bulan == 2){
		printf(" Februari tahun %d adalah 29\n", tahun);
	}else if(bulan == 2){
		printf(" Februari tahun %d adalah 28\n", tahun);
	}
	return 0;
}