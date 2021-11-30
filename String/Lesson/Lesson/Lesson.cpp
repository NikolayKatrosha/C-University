
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	/*int a = 4;
	int b = 1;
	swap(b, a);
	cout << b << a;*/
	// 1. Находим мин элемент и ставим его на первое место
	// 2. Находим мин элемент в оставшейся части массива
	/*
	for( int j = 0; j<n-1; j++){
	int min = x[j];
	int posMin = j;
	for (int i= j+1; i<n;i++){
	if(x[i]<min) {
	min = x [i];
	posMin = i;
	     } 
	   }
	   swap(x[posMin],x[j]);
	   }
	*/





	/* Сортировка вставками
	
	* for(int i=1; i<n; i++) {
	for(int j=i; j>0 && x[j-1]>x[j]; j--)
	swap (x[j-1],x[j]);
	   } 
	} 
	*/




	/*Пузырьковая сортировка
	int n;
	cin >> n;
	int *x = new int [n];
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (x[j] > x[j + 1]) {
				int a = x[j]; 
				x[j] = x[j + 1]; 
				x[j + 1] = a; 
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << x[i] << " ";
	}*/
	


	//Сортировка выбором
	/*int n;
	cin >> n;
	int *x = new int [n];
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
	for (int j = 0; j < n - 1; j++) {
		int min = x[j];
		int posMin = j;
		for (int i = j + 1; i < n; i++) {
			if (x[i] < min) {
				min = x[i];
				posMin = i;
			}
		}
		swap(x[posMin], x[j]);
	}
	for (int i = 0; i < n; i++) {
		cout << x[i] << " ";
	}
}
*/


	//Сортировка вставками
	int n;
	cin >> n;
	int* x = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
	for (int i = 1; i < n; i++) {
		for (int j = i; j > 0 && x[j - 1] > x[j]; j--) {
			swap(x[j - 1], x[j]);
		}
	}
	for (int i = 0; i < n; i++) {
	cout << x[i] << " ";
	}
}

