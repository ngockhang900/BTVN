#include "stdio.h"
//#include "iostream"
#include "C:\Users\dongo\Desktop\BAITAP\Session\Headers\tinhtong.h"
#include "C:\Users\dongo\Desktop\BAITAP\Session\Headers\maxmin.h"
#include "C:\Users\dongo\Desktop\BAITAP\Session\Headers\vitri.h"

//using namespace std;

void NhapMang(int a[], int n){
	for(int i=0; i<n; i++){
		printf("[%d] = ", i);
		scanf("%d", &a[i]);
	}
	
}

void XuatMang(int a[], int n){

	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}
}



int main(){
	int a[100];
	int n, x;
	
	do{
		printf("So luong phan tu cua mang (20<n<=100):  ");
		scanf("%d", &n);
		
	}while(n<1 || n>100);

	NhapMang(a, n);

	XuatMang(a, n);

	printf("\nTong = %d ", tong(a, n));

	printf ("\nMax = %d ", timMax(a, n));
	
	printf ("\nMin = %d ", timMin(a, n));
	
	//cout <<"\nNhap vao gia tri x can tim: ";
	//cin >> x;
	
	//int vitrix =TimX(a, n, x);
	//if (vitrix == -1){
	//	cout <<"gia tri x khong nam trong mang" <<endl;
	//}
	//else{
	//	cout <<"\nVi tri x trong mang la: " << vitrix << endl;
	//}
}