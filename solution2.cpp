#include <iostream>
#include <clocale>

using namespace std;
// return
int* createArray_return(int arr_size) {
	int* numbers = new int[arr_size];
	for (int i = 0; i < arr_size; i++) {
		numbers[i] = rand();
	};
	return numbers;
}


int* printArray_return(int arr_size, int numbers[]) {
	for (int i = 0; i < arr_size; i++) {
		cout << numbers[i] << '\t';
	};
	cout << '\n';
	return numbers;
}


int* ChangeArray_return(int arr_size, int numbers[]) {
	for (int i = 0; i <= arr_size / 2 - 1; i++) {
		int saved;
		saved = numbers[i];
		numbers[i] = numbers[arr_size / 2 + i];
		numbers[arr_size / 2 + i] = saved;
	}
	return numbers;
}
// По ссылке
void createArray_ref(int*& (numbers), int arr_size) {
	for (int i = 0; i < arr_size; i++) {
		numbers[i] = rand();
	};
}


void printArray_ref(int*& (numbers), int arr_size) {
	for (int i = 0; i < arr_size; i++) {
		cout << numbers[i] << '\t';
	};
	cout << '\n';
}


void ChangeArray_ref(int*& (numbers), int arr_size) {
	for (int i = 0; i <= arr_size / 2 - 1; i++) {
		int saved;
		saved = numbers[i];
		numbers[i] = numbers[arr_size / 2 + i];
		numbers[arr_size / 2 + i] = saved;
	}
}
// По указателю
void createArray_poin(int* (numbers), int arr_size) {
	for (int i = 0; i < arr_size; i++) {
		numbers[i] = rand();
	};
}


void printArray_poin(int* (numbers), int arr_size) {
	for (int i = 0; i < arr_size; i++) {
		cout << numbers[i] << '\t';
	};
	cout << '\n';
}


void ChangeArray_poin(int* (numbers), int arr_size) {
	for (int i = 0; i <= arr_size / 2 - 1; i++) {
		int saved;
		saved = numbers[i];
		numbers[i] = numbers[arr_size / 2 + i];
		numbers[arr_size / 2 + i] = saved;
	}
}
// Пользовательский ввод
int user_input() {
	int arr_size;
	cout << "Введите длинну массива: ";
	cin >> arr_size;
	if (arr_size < 0) {
		cerr << "Неправильное число!";
		exit(1);
	}
	return arr_size;
}


// Вывод(см. название)
void solution2_return() {
	int arr_size;
	arr_size = user_input();
	int* numbers = createArray_return(arr_size);
	printArray_return(arr_size, numbers);
	numbers = ChangeArray_return(arr_size, numbers);
	printArray_return(arr_size, numbers);
	delete[] numbers;
}


void solution2_ref() {
	int arr_size;
	arr_size = user_input();
	int* numbers = new int[arr_size];
	createArray_ref(numbers, arr_size);
	printArray_ref(numbers, arr_size);
	ChangeArray_ref(numbers, arr_size);
	printArray_ref(numbers, arr_size);
	delete[] numbers;
}


void solution2_poin() {
	int arr_size;
	arr_size = user_input();
	int* numbers = new int[arr_size];
	createArray_poin(numbers, arr_size);
	printArray_poin(numbers, arr_size);
	ChangeArray_poin(numbers, arr_size);
	printArray_poin(numbers, arr_size);
	delete[] numbers;
}