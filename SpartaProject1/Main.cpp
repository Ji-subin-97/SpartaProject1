#include <iostream>

using namespace std;

int sum(int* arr, size_t arrSize);
double avg(int* arr, size_t arrSize);
void sort(int* arr, size_t arrSize, int num);

template <typename T>
void printArr(T* arr, size_t arrSize)
{
	cout << "[ ";
	for (int i = 0; i < arrSize; i++) {
		cout << arr[i] << " ";
	}
	cout << "]";
}


int main()
{
	const int SIZE = 5;
	int arr[SIZE];
	int num = 0;
	
	cout << "배열 값 5개를 입력해주세요.\n";
	for (int &value : arr) {
		cin >> value;
	}
	
	// 합계, 평균
	cout << "[합계]: " << sum(arr, SIZE) << "\n";
	cout << "[평균]: " << avg(arr, SIZE) << "\n";

	// 정렬
	cout << "오름차순: 1 / 내림차순: 2 = ";
	cin >> num;
	sort(arr, SIZE, num);
	printArr(arr, SIZE);

	return 0;
}

int sum(int* arr, size_t arrSize) 
{
	int total = 0;

	for (int i = 0; i < arrSize; i++) {
		total += arr[i];
	}

	return total;
}

double avg(int* arr, size_t arrSize) 
{
	return static_cast<double>(sum(arr, arrSize)) / arrSize;
}

void sort(int* arr, size_t arrSize, int num) 
{
	int temp;

	for (int i = 0; i < arrSize - 1; i++) {
		for (int j = 0; j < arrSize - i - 1; j++) {
			if (num == 2) 
			{
				if (arr[j] < arr[j + 1]) {
					temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
			else 
			{
				if (arr[j] > arr[j + 1]) {
					temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}

		}
	}

}