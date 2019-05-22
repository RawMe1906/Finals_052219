#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int a, b, x, temp;
	long arr[100];
	char q;

	cout << "Enter the number of integers you want to input: ";
	cin >> x;

	if (x>0)
	{
		for (a=0;a<x;a++)
		{
			cout << "Enter integer " << a + 1 << ": ";
			cin >> arr[a];
		}
	}
	else
		cout << "The program will now exit.";	

	for(a=0;a<x;a++)
	{
		if (arr[a]>=0 || arr[a]<0)
		{
			for (b=a+1;b<x;b++)
			{
				if (arr[a]>arr[b])
				{
				temp = arr[a];
				arr[a]=arr[b];
				arr[b]=temp;
				}
			}
		}
		else
		cout << "The program will now exit.";
	}
	cout << "\n" ;

	for (a=0;a<x;a++)
	{
		
		cout << arr[a] << " ";
	}

	_getch();
	return 0;
}