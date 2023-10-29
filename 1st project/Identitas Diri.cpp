#include <stdio.h>

int main(){
	
	char nama[30], alamat[20], nomor[15], kelamin[10];
	
	// input data pribadi
	printf("Masukkan Nama : "),gets(nama);
	printf("Masukkan Alamat : "),gets(alamat);
	printf("Masukkan Nomor : "),gets(nomor);
	printf("Masukkan Kelamin : "),gets(kelamin);
	
	// menampilkan hasil output
	printf("\n IDENTITAS DIRI \n");
	printf("1. Nama : %s\n" , nama);
	printf("2. Alamat : %s\n" , alamat);
	printf("3. Nomor : %s\n" , nomor);
	printf("4. Kelamin : %s\n" , kelamin);
	
	return 0;
	
}