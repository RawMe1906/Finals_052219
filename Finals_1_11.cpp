#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	int x;
	double sum=0, y;

	cout << "***   This program calculates the sum of the terms of a harmonic series.   ***" << endl;
	cout << "\nInput the last term of the harmonic series: ";
	cin >> x;

	if (x>0)
	{
		for (y=1;y<=x;y++)
		{
			sum += 1 / y;
		}
		cout << "\n" << endl; 
		cout << "Size of harmonic series: " << x;
		cout << "\n\n";
		cout << "\tHarmonic Series:" << endl;
		cout << "\n";
		
		for (y=1;y<x;y++)
		{
			cout << "1/" << y << " + ";
		}
		cout << "1/" << x << " = ";
		cout << setprecision(4) << fixed << sum;
	}
	else if (x<0)
	{
		for (y=x;y<=-1;y++)
		{
			sum += 1 / y;
		}
		cout << "\n" << endl; 
		cout << "Size of harmonic series: " << -1 * x;
		cout << "\n\n";
		cout << "\t~Harmonic Series~" << endl;
		cout << "\n";
		
		for (y=x;y<-1;y++)
		{
			cout << "1/" << y << " + ";
		}
		cout << "1/" << -1 << " = ";
		cout << setprecision(4) << fixed << sum;
	}
	else
		cout << "No term in harmonic series.";
	
	_getch();
	return 0;
}
