#include<stdio.h>
int main(){
	float canh, chieucao;
	printf("moi ban nhap vao lan luot canh va chieu cao cua tam giac");
	scanf("%.2f %.2f",canh,chieucao);
	float dientich=canh*chieucao/2;
	printf("dien tich cua tam giac la %.2f",dientich);
	return 0; 
}
