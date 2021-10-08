// Lab_04_1.cpp
// <Василик Юлія>
// Лабораторна робота № 4.1
// Цикли
// Варіант 2

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	int k, N;
	double S;
	cout << "k = "; cin >> k;
	cout << "N = "; cin >> N;

	S = 0;
	k = N;
	while (k <= 19)
	{
		S += sqrt(sin(k) * sin(k) + cos(N / k) * cos(N / k));
		k++;
	}
	cout << S << endl;


	S = 0;
	k = N;
	do {
		S += sqrt(sin(k) * sin(k) + cos(N / k) * cos(N / k));
		k++;
	} while (k <= 19);
	cout << S << endl;


	S = 0;
	for (k = N; k <= 19; k++)
	{
		S += sqrt(sin(k) * sin(k) + cos(N / k) * cos(N / k));
	}
	cout << S << endl;


	S = 0;
	for (k = 19; k >= N; k--)
	{
		S += sqrt(sin(k) * sin(k) + cos(N / k) * cos(N / k));
	}
	cout << S << endl;
	return 0;
}


