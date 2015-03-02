#include <iostream>
#include "matrix.h"
using namespace std;

int main()
{
	int m, n,a,b;
	int ch;
	char op;
	Matrix obj;
	
 	int first[2][2];
	cout << "Enter first matrix: "<< endl;

	for(int i = 0; i < 2; i++)
		for(int j = 0; j < 2; j++)
			cin >> first[i][j];
	cout << endl;

	
	cout << "Enter second matrix: "<< endl;
	int second[2][2];
	for(int i = 0; i < 2; i++)
		for(int j = 0; j < 2; j++)
			cin >> second[i][j];
	cout << endl;
	
	do
	{
		cout << "What computation would you like to perform? "<< endl;
		cout << "1. Multiplication" << endl;
		cout << "2. Addition" << endl;
		cout << "3. Subtraction" << endl;
		cin >> ch;
		switch(ch)
		{
			case 1:
				obj.multiply(first,second);
			break;
			case 2:
				obj.sum(first,second);
			break;
			case 3:
				obj.subtract(first,second);
			break;
			default:
				cout << "invalid option" << endl;
		}
		cout<<"Do you want to exit? y/n"<<endl;
		cin>>op;
	} while(op != 'y');

	return 0;
}
