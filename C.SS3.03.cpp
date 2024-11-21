#include<stdio.h>
int main(){
	float toan, van, anh;
	printf("hay nhap lan luot diem 3 mon toan van anh: ");
	scanf("%f %f %f",&toan,&van,&anh);
	float tong=toan+van+anh;
	float trungbinh=tong/3;
	printf("tong diem 3 mon la %.2f\n",tong);
	printf("trung binh diem la %.2f\n",trungbinh);
	return 0;
}
