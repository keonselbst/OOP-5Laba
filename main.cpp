#include<iostream>
#include"AndArray.h"
#include"OrArray.h"

int main()
{
	int sizeX1 = 0, sizeX2 = 0, sizeY1 = 0, sizeY2 = 0;
	Array* x1 = new AndArray, * x2 = new AndArray;
	Array* y1 = new OrArray, * y2 = new OrArray;
	char choice = '1';

	cout << "1) Create and print two AndArrays X1 and X2 \n";
	cout << "2) X1 + X2 \n";
	cout << "3) Procession for X1 \n";
	cout << "4) Create and print two OrArrays Y1 and Y2\n";
	cout << "5) Y1 + Y2 \n";
	cout << "6) Procession for Y1 \n";

	while (choice != '7')
	{
		cout << '\n' << "Enter your choice: "; cin >> choice;
		switch (choice)
		{
		case '1':
			cout << "Enter the size of X1: "; cin >> sizeX1;
			x1->recreate(sizeX1);
			cout << "Enter X1:\n"; cin >> x1;

			cout << "Enter the size of X2: "; cin >> sizeX2;
			x2->recreate(sizeX2);
			cout << "Enter X2:\n"; cin >> x2;

			cout << "X1 = " << x1 << '\n';
			cout << "X2 = " << x2 << '\n';
			break;
		case '2':
			cout << "X1 + X2 = " << x1->sum(x2) << '\n';
			break;
		case '3':
			x1->foreach();
			cout << "Processed X1 = " << x1 << '\n';
			break;
		case '4':
			cout << "Enter the size of Y1: "; cin >> sizeY1;
			y1->recreate(sizeY1);
			cout << "Enter Y1:\n"; cin >> y1;

			cout << "Enter the size of Y2: "; cin >> sizeY2;
			y2->recreate(sizeY2);
			cout << "Enter Y2:\n"; cin >> y2;

			cout << "Y1 = " << y1 << '\n';
			cout << "Y2 = " << y2 << '\n';
			break;
		case '5':
			cout << "Y1 + Y2 = " << y1->sum(y2) << '\n';
			break;
		case '6':
			y1->foreach();
			cout << "Processed Y1 = " << y1 << '\n';
			break;
		default:

			break;
		}
	}
	return 0;
}
