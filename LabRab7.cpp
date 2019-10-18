#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int  j,  dlina, start, end;
	char st[100], chislo[100];
	cout << "Введите пожалуйста строку до 100 символов, содержащую 1 число с фиксированной точкой: " << endl;
	cin >> st;
	dlina = strlen(st);//Функция strlen видит начало Си-строки  и начинает сначала считать количество символов (байтов, отводимых под каждый символ), этот процесс выполняется до тех пор, пока не будет достигнут завершающий нулевой символ. 
	for (j = 1; j <= dlina; j++)
		if (st[j] == '.')
		{
			for (j = j - 1;j >= 0;j--)
			{
				/*if (st[j] == '-')
					start = j;*/
				if (isdigit(st[j]))
					start = j; 
			}
		    for (j = j + 1;j < dlina;j++)
			{
				if (isdigit(st[j]))
					end = j;
			}
		}
	cout << "Результат = ";
	for (j = start; j <= end; j++)
	{
		chislo[j] = st[j];
		cout << chislo[j];
	}
	return 0;
	system("pause");
}