#include <iostream>

using namespace std;

int main()
{
	int liCount = 0, valor, sumatoria = 0, sumatoria2 = 0, Array[500], Array2[500], liCount2 = 0, Total = 0, liCount3 = 0;;

	cout << "Digitar hasta que numero desea hallar la sumatoria de todos los multiplos de ese numero: " << endl;
	cin >> valor;

	for (int x = 1; x < valor; x++)
	{
		if (x * 3 < valor)
		{
			Array[liCount] = x * 3;
			liCount++;
		}
		if (x * 5 < valor)
		{
			Array2[liCount2] = x * 5;
			liCount2++;
		}
	}

	for (int x = 0; x < liCount; x++)
	{
		sumatoria += Array[x];
	}

	for (int x = 0; x < liCount2; x++)
	{
		for (int y = 0; y < liCount; y++)
		{
			if (Array2[x] == Array[y])
			{
				liCount3++;
			}
		}
		if(liCount3 < 1)
			sumatoria2 += Array2[x];
		liCount3 = 0;
	}

	Total = sumatoria + sumatoria2;

	cout << "La suma total es: " << Total << endl;

	system("pause");
	return 0;
}