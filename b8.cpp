#include<iostream>
#include<cstdlib>
using namespace std;

struct MaTran {
	int cot=3;
	int dong=3;
	int**m2d;
};

void creat(MaTran &mt)
{
	mt.m2d = new int *[mt.dong];
	for (int i = 0; i < mt.dong; i++)
	{
		mt.m2d[i] = new int[mt.cot];
		for (int j = 0; j < mt.cot; j++)
		{
			mt.m2d[i][j] = rand() % 100;
		}
	}
}

void xuatMaTran(MaTran mt) {
	for (int i = 0; i < mt.dong; i++) {
		for (int j = 0; j < mt.cot; j++) {
			cout << mt.m2d[i][j] << " ";
		}
		cout << endl;
	}
}

int daonguoc(int n)
{
	int sum = 0;
	while (n > 0)
	{
		int temp = n % 10;
		sum = sum * 10 + temp;
		n /= 10;
	}
	return sum;
}


//chua hieu ro de noi gi ?, so doi xung ma tran hay la ma tran co so doi xung voi nhau ?
int tongdx(MaTran mt)
{
	int tong = 0;
	for (int i = 0; i < mt.dong; i++) {
		for (int j = 0; j < mt.cot; j++) {
			if (daonguoc(mt.m2d[i][j])==mt.m2d[i][j]) 
			{ 
				tong += mt.m2d[i][j];
			}
		}
	}
	return tong;
}

void freeMatrix(int **res, int row)
{
	for (int i = 0; i < row; i++)
		delete[]res[i];
	delete[]res;
}

int main()
{
	MaTran mt;
	creat(mt);
	xuatMaTran(mt);
	freeMatrix(mt.m2d, mt.dong);
	system("pause");
}