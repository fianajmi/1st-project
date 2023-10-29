#include <stdio.h>
#include <stdlib.h>

int main(){
	
	double tukar_usd = 250; // 1 DOLLAR KE IDR
	double tukar_sar = 150; // 1 RIYADH KE IDR
	double jumlah_usd, jumlah_sar;
	
	printf("Masukkan Jumlah Dollar : $");
	scanf("%lf", &jumlah_usd);
	printf("Masukkan Jumlah Riyadh : R");
	scanf("%lf", &jumlah_sar);
	
	double IDR_dari_USD = jumlah_usd * tukar_usd;
	double IDR_dari_SAR = jumlah_sar * tukar_sar;
	
	printf("%.lf USD setara dengan %.lf IDR\n", jumlah_usd, IDR_dari_USD);
	printf("%.lf SAR setara dengan %.lf IDR\n", jumlah_sar, IDR_dari_SAR);
	
	return 0;
	
}