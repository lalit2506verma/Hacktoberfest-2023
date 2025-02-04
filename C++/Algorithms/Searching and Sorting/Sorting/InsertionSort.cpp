// implementation of insertion sort
// Time Complexity: O(N^2)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

// Function to sort an array using insertion sort
void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;

		// Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

// Function to print an array
void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	int arr[] = { 46, 75, 98, 23, 14, 100, 40, 89, 45, 67, 10, 7 };
	int N = sizeof(arr) / sizeof(arr[0]);

	cout << "Given array: ";
	printArray(arr, n);

	// Function call
	insertionSort(arr, n);
	cout << "\nSorted array: ";
	printArray(arr, n);

	return 0;
}