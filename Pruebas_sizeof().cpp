// C++ Program to print first and last element in an array
#include <iostream>
using namespace std;
int main()
{
	int arr[] = { 4, 5, 7, 13, 25, 65, 98 };
	int f, l, n;
	n = sizeof(arr) / sizeof(arr[0]);
	cout << sizeof(arr) << endl;
	cout << sizeof(arr[0]) << endl;
	cout << n << endl;
	f = arr[0];
	l = arr[n - 1];
	cout << "First element: " << f << endl;
	cout << "Last element: " << l << endl;
	
	int arr1[] = { 1, 2, 3, 4, 7, 98,
		0, 12, 35, 99, 14 };
	cout << "Number of elements: "
		<<(sizeof(arr1) / sizeof(arr1[0])) << endl;
	
	cout << "sizeof(arr1): " << sizeof(arr1) << endl;
	cout << "sizeof(arr1[0]): " << sizeof(arr1[0]) << endl;
	return 0;
}
