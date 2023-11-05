#include<iostream>
#include<cstdlib>
using namespace std;

void initRandom(int **matrix, int r, int c)
{
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			matrix[i][j] = rand() % 10;
}

void print(int **matrix, int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			cout << matrix[i][j] << " ";
		cout << endl;

	}
}

void multiply(int **matrix1, int **matrix2, int **res, int r1, int c1, int r2, int c2)
{
	for (int i = 0; i < r1; i++)
		for (int j = 0; j < c2; j++)
		{
			res[i][j] = 0;
			for (int k = 0; k < c1; k++)
				res[i][j] += matrix1[i][k] * matrix2[k][j];
		}
}
void add(int **matrix1, int **matrix2, int **res, int r, int c)
{
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			res[i][j] = matrix1[i][j] + matrix2[i][j];
}
int main()
{
	int c1, r1, c2, r2;
	cin >> r1 >> c1 >> c2 >> r2;
	if (c1 != r2)
	{
		cout << " khong nhan dc";
		return 0;
	}
	int **matrix1 = new int*[r1];
	int **matrix2 = new int*[r2];
	int **res = new int*[r1];
	for (int i = 0; i < r1; i++)
	{
		matrix1[i] = new int[c1];
		res[i] = new int[c1];
	}
	for (int i = 0; i < r2; i++)
		matrix2[i] = new int[c2];
	initRandom(matrix1, r1, c1);
	initRandom(matrix2, r2, c2);

	print(matrix1, r1, c1);

	print(matrix2, r2, c2);

	add(matrix1, matrix2, res, r1, c1);
	print(res, r1, c2);

	multiply(matrix1, matrix2, res, r1, c1, r2, c2);
	print(res, r1, c2);

	for (int i = 0; i < r1; i++)
	{
		delete[]matrix1[i];
		delete[]res[i];
	}
	for (int i = 0; i < r2; i++)
		delete[]matrix2[i];
	system("pause");
	return 0;
}