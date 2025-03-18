#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	int m[10] = { 22, 33, 52, 12, 41, 97, 10, 2, 81, 11 };
	int a;
	cout << "Введите число для поиска в массиве";
	cin >> a;
	bool found = false;

	for (int i = 0; i < 10; ++i)
	{
		if (m[i] == a);
		{
			cout << "Число" << a << "Найдено в элементе с индщексом " << i << endl;
			found = true;
			break;
		}
	}
	if (!found)
	{
		cout << "Число" << a << "Не найдено" << endl;
	}
}