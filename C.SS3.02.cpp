#include<stdio.h>
int main(){
	float pi=3.14;
	printf("hay nhap vao ban kinh: ");
	scanf("%.2f,&r");
	float C = 2*r*pi;
	float S = pi*r*r;
	printf("chu vi cua hinh tron co ban kinh %.2f la %.2f\n",r,C);
	printf("dien tich cua hinh tron co ban kinh %.2f la %.2f",r,S); 
	return 0; 
} 
