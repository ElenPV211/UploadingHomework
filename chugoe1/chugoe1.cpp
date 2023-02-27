#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
	const int n = 10;

    int X[n], Y[n], S[n] = {};
	int i = 0, tmp = 0;
    cout << "Введите элементы массива X\n";
	
		for (int i = 0; i < 10; i++)
		{
			cin >> X[i];
		}	

cout << "Введите элементы массива Y\n";

for (int i = 0; i < 10; i++)
{
	cin >> Y[i];
}

cout << "Вывод элементов массива S: ";


for (int i = 0; i < 10; i++)
{
	for (int j = 0; j < 10; j++)
	{

		if (X[i] != Y[j])

		{
			Y[j] != S[i];
		}
		else
			S[i] = X[i];
	}
	if (S[i] != 0)
	{
		cout << S[i] << " ";
	}
}

}

