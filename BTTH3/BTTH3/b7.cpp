#include <iostream>
using namespace std;

int* timKiem(int *arr, int size, int target) {
	for (int i = 0; i < size; i++) {
		if (*arr == target) {
			return arr;
		}
		arr++;
	}
	return NULL;
}

int main() {
	int arr[] = { 2, 4, 6, 8, 10 };
	int size = sizeof(arr) / sizeof(int);
	int target = 6;
	int* ketQua = timKiem(arr, size, target);
	if (ketQua != NULL) {
		cout << "Tim thay " << target << " tai vi tri " << ketQua - arr << endl;
	}
	else {
		cout << "Khong tim thay " << target << " trong mang" << endl;
	}
	return 0;
}