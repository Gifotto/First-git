#include <iostream>
#include <time.h>

using namespace std;

void zap_m(int** pArr, int s1, int s2)
{
	for (int i = 0; i < s1; i++)
	{
		for (int j = 0; j < s2; j++)
		{
			//pArr[i][j] = rand() % 201 - 100;
			pArr[i][j] = 1 + rand() % 3;
		}
	}
}
void viv_m(int** pArr, int s1, int s2)
{
	for (int i = 0; i < s1; i++)
	{
		for (int j = 0; j < s2; j++)
		{
			cout << pArr[i][j] << "\t";
		}
		cout << endl << endl << endl << endl;
	}
}

int main()
{
	setlocale(0, "");
	srand(time(NULL));
	//int m1 = 5, m2 = 5;//m1 - строки , m2 - столбцы
	int s1, s2;

	cout << "\nстроки: ";
	cin >> s1;
	cout << "\nстолбцы: ";
	cin >> s2;
	cout << endl;

	/*s1 = 3;
	s2 = 3;*/

	int maxStolb = -10000, minStrok = 10000;

	int** Arr = new int* [s1];		//указатель на указатель
	for (int i = 0; i < s1; i++)
	{
		Arr[i] = new int[s2];
	}

	int* maxStol = new int [s1];
	int* minStro = new int [s2];

	zap_m(Arr, s1, s2);

	viv_m(Arr, s1, s2);

	//int ii = -1, jj = -1;

	for (int i = 0; i < s1; i++)
	{
		for (int j = 0; j < s2; j++)
		{
			//cout << Arr[i][j] << "\t";
			if (Arr[i][j] < minStrok)
				minStrok = Arr[i][j];
		}
		minStro[i] = minStrok;
		//cout << " min = " << minStrok << endl;
		minStrok = 10000;
	}

	cout << endl << endl;

	for (int j = 0; j < s2; j++)
	{
		for (int i = 0; i < s1; i++)
		{
			if (Arr[i][j] > maxStolb)
				maxStolb = Arr[i][j];
		}
		maxStol[j] = maxStolb;
		//cout << " max = " << maxStolb << endl;
		maxStolb = -10000;
	}

	//- балл за то что не добавила в друзья геншине
	
	for (int i = 0; i < s1; i++)
	{
		cout << minStro[i] << "\t";
	}
	
	cout << endl << endl;

	for (int i = 0; i < s2; i++)
	{
		cout << maxStol[i] << "\t";
	}

	cout << endl;

	for (int i = 0; i < s1; i++)
	{
		for (int j = 0; j < s2; j++)
		{
			if (maxStol[j]==minStro[i])
			{
				cout << "i = " << i << endl;
				cout << "j = " << j << endl;
				break;
			}
		}
	}
	

	for (int i = 0; i < s1; i++)
	{
		delete[]Arr[i];
	}
	delete[]Arr;
	delete[] maxStol, minStro;

	cout << endl << endl << endl << endl;

	return 0;
}