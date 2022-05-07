#include "C:\Users\dongo\Desktop\BAITAP\Session\Headers\maxmin.h"


int timMax(int a[], int n){
	int max = a[0];
	for(int i = 1; i<n ; i++){
		if(max < a[i])
			max = a[i];
	}
	return max;
}

int timMin(int a[], int n){
	int min = a[0];
	for(int i = 1; i<n ; i++){
		if(min > a[i])
			min = a[i];
	}
	return min;
}
