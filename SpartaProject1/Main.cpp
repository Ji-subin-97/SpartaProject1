#include <iostream>

using namespace std;

int sum(int* arr, size_t arrSize);
double avg(int* arr, size_t arrSize);
void sort(int* arr, size_t arrSize);

int main()
{
	const int SIZE = 5;
	int arr[SIZE];

	cout << "배열 값 5개를 입력해주세요.\n";
	for (int &value : arr) {
		cin >> value;
	}

	cout << "[합계]: " << sum(arr, SIZE) << "\n";
	cout << "[평균]: " << avg(arr, SIZE) << "\n";

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