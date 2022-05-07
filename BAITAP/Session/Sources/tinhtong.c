#include "C:\Users\dongo\Desktop\BAITAP\Session\Headers\tinhtong.h"

int tong (int a[], int n){
	int tong = 0;
	for(int i=0; i<n; i++){
		tong = tong + a[i];
	}
	return tong;
}