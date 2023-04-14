#include <iostream>
using namespace std;

int arr[20];	//array to be searched
int n;			//number of element in the array
int i;			//index of array element

void input()
{
	while (true)
	{
		cout << "enter the number of elements in the array: ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 20 elements. \n\n";
	}

	//accept array elements
	cout << "\n==================\n";
	cout << "enter array elements\n";
	cout << "======================";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}

void LinearSearch()
{
	char ch;
	int ctr;		//number of comparision

	do
	{
		//accept the number to be searched
		cout << "\nEnter the elements you want to search: ";	//langkah 1 algoritma
		int item;
		cin >> item;

		ctr = 0;
		for (i = 0; i < n; i++)				//langkah2,3,4 algoritma
		{
			ctr++;
			if (arr[i] == item)				//langkah 5 algoritma
			{
				cout << "\n" << "found a position" << (i + 1) << endl;
				break;
			}
		}
		if (i == n)							//langkah 5 algoritma
			cout << "\n" << item << "not found in the array\n";
		cout << "\nNumber of comparisions: " << ctr << endl;

		cout << "\nContinnue Search (y/n): ";
		cin >> ch;
	} while ((ch == 'y') || (ch == 'Y'));
}

int main()
{
	input();
	LinearSearch();
}
