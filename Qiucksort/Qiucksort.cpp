#include <iostream>
using namespace std;

//array of integers to hold values
int arr[20];
int cmp_count = 0; // number of comprasion
int mov_count = 0; // number of data movemnts
int n;

void input() {
	while (true)
	{
		cout << "Masukkan panajng element array: ";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\nMaksimum panjang array adalah 0" << endl;
	}
	cout << "\n------------------" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}
//swaps the element at index x with the element at index y
void swap(int x, int y)
{
	int temp;

	temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
}
void q_short(int low, int high) {
	int pivot, i, j;
	if (low > high)//langkah 1
		return;
	//Partition the list into two parts:
		//One containing elements less that or equal to pivot
		//Outher conntainning elements greather than pivot 

	pivot = arr[low];//langkah 2

	i = low + 1;//langkah 3
	j = high;//langkah 4

	while (i <= j)//langkah 10
	{
		//Search for an element greater than pivot
		while ((arr[i] <= pivot) && (i <= high))//langkah 5
		{
			i++;//langkah 6
			cmp_count++;
		}
		
