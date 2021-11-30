#include <iostream>
using namespace std;
void print(int** x, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cout << x[i][j] << " ";
		cout << endl;
	}
}

int main()
{

	//Ввод, вывод


/*setlocale(LC_ALL, "rus");
cout << "Ввод массива: "<<endl;
int n, m;
cin >> n >> m;
int** x = new int* [n];
for (int i = 0; i < n; i++) {
	x[i] = new int[m];
}
for (int i = 0; i < n; i++) {
	for (int j = 0; j < m; j++) {
		cin >> x[i][j];
	}
}
cout << "Вывод массива: "<< endl;
print(x, n, m);
for (int i = 0; i < n; i++) delete[]x[i];
delete[]x;*/



//Вывести элементы главной диаганали



/*setlocale(LC_ALL, "rus");
cout << " Вывести элементы главной диаганали :  " << endl;
int n, m;
cin >> n >> m;
int** x = new int* [n];
for (int i = 0; i < n; i++) {
	x[i] = new int[m];
}
for (int i = 0; i < n; i++) {
	for (int j = 0; j < m; j++) {
		cin >> x[i][j];
		if (i == j) {
			cout << x[i][j] << " ";
		}
	}
}
for (int i = 0; i < n; i++) delete[]x[i];
delete[]x;*/



//Вывести элементы побочной


/*setlocale(LC_ALL, "rus");

cout << "Вывести элементы побочной:  " << endl;
int n, m;
cin >> n >> m;
int** x = new int* [n];
for (int i = 0; i < n; i++) {
	x[i] = new int[m];
}
for (int i = 0; i < n; i++) {
	for (int j = 0; j < m; j++) {
		cin >> x[i][j];
	}
}
for (int i = 0; i < n; ++i) {
	cout << x[i][n - i - 1] << " ";
}
cout << "Вывод массива: "<< endl;
for (int i = 0; i < n; i++) delete[]x[i];
delete[]x;*/



                                 //Вывести только нечётные столбцы 

	/*setlocale(LC_ALL, "rus");
	cout << "Ввод массива: " << endl;
	int n, m;
	cin >> n >> m;
	int** x = new int* [n];
	for (int i = 0; i < n; i++) {
		x[i] = new int[m];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> x[i][j];
			if (j % 2 == 0) {
				cout << x[i][j]<<" ";
			}
		}
	
	}

	for (int i = 0; i < n; i++) delete[]x[i];
	delete[]x;*/




	//Обнулить последнюю строку матрицы


	/*setlocale(LC_ALL, "rus");
	cout << "Ввод массива: " << endl;
	int n, m;
	cin >> n >> m;
	int** x = new int* [n];
	for (int i = 0; i < n; i++) {
		x[i] = new int[m];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> x[i][j];
			if (i == n-1) {
			x[i][j]=0;
			}
			cout << x[i][j] << " ";
		}
	}
	for (int i = 0; i < n; i++) delete[]x[i];
	delete[]x;*/




	                             //Обнулить элементы над главной диагональю





//setlocale(LC_ALL, "rus");
//cout << "Ввод массива: " << endl;
//int n, m;
//cin >> n >> m;
//int** x = new int* [n];
//for (int i = 0; i < n; i++) {
//	x[i] = new int[m];
//}
//for (int i = 0; i < n; i++) {
//	for (int j = 0; j < m; j++) {
//		cin >> x[i][j];
//		if (j > i) {
//			x[i][j] = 0;
//		}
//		cout << x[i][j];
//	}
//	
//}
//for (int i = 0; i < n; i++) delete[]x[i];
//delete[]x;



                                                 //Найти max_j min_i aij

setlocale(LC_ALL, "rus");
cout << "Ввод массива: " << endl;
int n, m;
int max = 0;
int min = 100;
cin >> n >> m;
int** x = new int* [n];
for (int i = 0; i < n; i++) {
	x[i] = new int[m];
}
for (int i = 0; i < n; i++) {
	for (int j = 0; j < m; j++) {
		cin >> x[i][j];
		if (x[i][j] > max) {
			max = x[i][j];
		}
		if(x[i][j] < min) {
			min = x[i][j];
		}
	}
}
cout << max <<" "<< min;
for (int i = 0; i < n; i++) delete[]x[i];
delete[]x;
}

