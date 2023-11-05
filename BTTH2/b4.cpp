#include <iostream>
using namespace std;
double power(double x, int n);

int main() {
	double x;
	int n;
	cout << " x: ";
	cin >> x;
	cout << "n: ";
	cin >> n;

	double result = power(x, n);
	cout << x << "^" << n << " = " << result << std::endl;
	system("pause");
	return 0;
}

double power(double x, int n) {
	if (n == 0) {
		return 1;
	}
	double half = power(x, n / 2);
	if (n % 2 == 0) {
		return half * half;
	}
	else if (n > 0) {
		return half * half * x;
	}
	else {
		return half * half / x;
	}
}



