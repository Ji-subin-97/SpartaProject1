#include <iostream>

using namespace std;

int sum(int* arr, size_t arrSize);
double avg(int* arr, size_t arrSize);
void sort(int* arr, size_t arrSize);

int main()
{
	const int SIZE = 5;
	int arr[SIZE];

	cout << "�迭 �� 5���� �Է����ּ���.\n";
	for (int &value : arr) {
		cin >> value;
	}

	cout << "[�հ�]: " << sum(arr, SIZE) << "\n";
	cout << "[���]: " << avg(arr, SIZE) << "\n";

	return 0;
}

int sum(int* arr, size_t arrSize) {
	int total = 0;

	for (int i = 0; i < arrSize; i++) {
		total += arr[i];
	}

	return total;
}

double avg(int* arr, size_t arrSize) {
	return static_cast<double>(sum(arr, arrSize)) / arrSize;
}