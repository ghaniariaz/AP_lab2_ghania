#include <iostream>
using namespace std;

class Matrix
{

public:
	void sum(int f[2][2],int s[2][2]);
	void subtract(int f[2][2],int s[2][2]);
	void multiply(int f[2][2] ,int s[2][2]);
};

void Matrix::sum(int f[2][2], int s[2][2])
{
	int sum[2][2];
	for(int i = 0; i < 2; i++)
		for(int j = 0; j < 2; j++)
			sum[i][j] = f[i][j] + s[i][j];

	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 2; j++)
			cout << sum[i][j] << "\t";
		cout << endl;
	}
}

void Matrix::subtract(int f[2][2], int s[2][2])
{
	int sub[2][2];
	for(int i = 0; i < 2; i++)
		for(int j = 0; j < 2; j++)
			sub[i][j] = f[i][j] - s[i][j];

	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 2; j++)
			cout << sub[i][j] << "\t";
		cout << endl;
	}
}

void Matrix::multiply(int f[2][2], int s[2][2])
{	
	int mul[2][2];
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			mul[i][j]=0;
			for(int k = 0; k < 2; k++)
				mul[i][j] += f[i][k] * s[k][j];
			
		}
	}

	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 2; j++)
			cout << mul[i][j] << "\t";
		cout << endl;
	}
}
