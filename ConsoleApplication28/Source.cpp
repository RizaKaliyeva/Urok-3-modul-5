#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <math.h>
#include <conio.h>
#include <time.h>

using namespace std;



#define sizeArr 20



int main()

{

	srand(time(NULL));

	setlocale(LC_ALL, "Russian");

	int z;

	do

	{

		cout << "Kakoe zadanie?" << endl;

		cin >> z;

		switch (z)

		{

		case 1:
		{
			/*задаем левую и правую границы поиска
			int count = 0;
			int left = 0;
			int right = 19;
			найденный индекс элемента равен -1 (элемент не найден)
			int IsSearch = -1;

			while (left <= right)
			{
			count++;

			int mid = (left + right) / 2;
			if (key == k[mid])
			{
			IsSearch = mid;
			break;
			}

			if (key < k[mid])
			right = mid - 1;
			else
			left = mid + 1;
			}
			if (IsSearch == -1)
			cout << "Element ne naiden!" << endl;
			else
			cout << "k[" << IsSearch << "]=" << k[IsSearch] << "(za " << count << " prohodov)" << endl;
			cout << endl;*/

		}
		break;

		case 2:
		{
			/*1.	Ввести два целочисленных массива − по 10 элементов в каждом.
			Сформировать новый массив, на четных местах которого будут элементы с нечетными индексами из первого массива,
			а на нечетных – с четными индексами из второго.*/
			int k[10], a[10], b[10];
			for (int i = 0; i < 10; i++)
			{
				k[i] = 1 + rand() % 99;
				cout << k[i] << endl;
			}
			cout << "-------------------------------" << endl;
			for (int i = 0; i < 10; i++)
			{
				a[i] = 1 + rand() % 99;
				cout << a[i] << endl;
			}
			cout << "-------------------------------" << endl;
			for (int i = 0; i < 10; i++)
			{
				if (i % 2 == 0)
				{
					b[i] = k[i + 1];
				}
			}
			for (int i = 0; i < 10; i++)
			{
				if (i % 2 != 0)
				{
					b[i] = a[i - 1];
				}
			}
			for (int i = 0; i < 10; i++)
			{
				cout << b[i] << endl;
			}
		}
		break;

		case 3:
		{
			//2.	Ввести целочисленный массив, состоящий из 17 - ти элементов(двузначные целые числа).Вычислить сумму цифр этого массива
			int k[17], sum = 0;
			for (int i = 0; i < 17; i++)
			{
				k[i] = 10 + rand() % 80;
				cout << k[i] << endl;
			}
			cout << "-------------------------------" << endl;
			for (int i = 0; i < 17; i++)
			{
				sum += k[i];
			}
			cout << sum << endl;
		}
		break;

		case 4:
		{
			//3.	Ввести два массива X и Y, состоящих из 10 - ти элементов целого типа.Сформировать массив S, состоящий из одинаковых элементов исходных массивов
			int k[10], a[10], b[10] = { 0 }, c = 0;
			for (int i = 0; i < 10; i++)
			{
				k[i] = 1 + rand() % 4;
				cout << k[i] << endl;
			}
			cout << "-------------------------------" << endl;
			for (int i = 0; i < 10; i++)
			{
				a[i] = 1 + rand() % 4;
				cout << a[i] << endl;
			}
			cout << "-------------------------------" << endl;
			for (int i = 0; i < 10; i++)
			{
				if (k[i] == a[i])
				{
					b[i] = k[i];
					c++;
				}
			}
			for (int i = 0; i < c; i++)
			{
				cout << b[i] << endl;
			}
		}
		break;

		case 5:
		{
			//4.	Дан массив вещественных чисел Z(16).Определить разность между суммой элементов c четными индексами и суммой элементов, индексы которых кратны трем
			int k[16], sum = 0, sum3 = 0, raz;
			for (int i = 0; i < 16; i++)
			{
				k[i] = 10 + rand() % 80;
				cout << k[i] << endl;
			}
			cout << "-------------------------------" << endl;
			for (int i = 0; i < 16; i++)
			{
				if (i % 2 == 0)
					sum += k[i];
				if (i / 3 == 0)
					sum3 += k[i];
			}
			raz = sum - sum3;
			cout << "Raznost' = " << raz << endl;


		}
		break;

		case 6:
		{
			//5.	Ввести массив, состоящий из 12 элементов действительного типа.Расположить элементы в порядке убывания.Определить количество  происшедших при этом перестановок.
			int k[12], min, temp, s = 0;
			for (int i = 0; i < 12; i++)
			{
				k[i] = 1 + rand() % 80;
				cout << k[i] << endl;
			}
			cout << "-------------------------------" << endl;


			for (int i = 0; i < 12; i++)

			{
				min = i;
				for (int j = i + 1; j< 12; j++)
				{
					if (k[j] < k[min])
					{
						min = j;
						s++;
					}
				}
				temp = k[i];

				k[i] = k[min];

				k[min] = temp;
			}
			cout << endl;

			for (int a = 0; a < 12; a++)
			{
				cout << k[a] << endl;
			}
			cout << "Schetchik = " << s << endl;
		}
		break;

		case 7:
		{
			//6.	Ввести с клавиатуры целочисленный массив, состоящий из 11 элементов.Вычислить сумму нечетных по значению отрицательных элементов и заменить элементы кратные трем на эту сумму.
			int k[11], sum = 0;
			for (int i = 0; i < 11; i++)
			{
				cout << "Vvedite chisla" << endl;
				cin >> k[i];
			}
			for (int i = 0; i < 11; i++)
			{
				cout << k[i] << endl;
			}
			cout << "--------------" << endl;
			for (int i = 0; i < 11; i++)
			{
				if (k[i] < 0 && k[i] % 2 != 0)
					sum += k[i];
			}
			for (int i = 0; i < 11; i++)
			{
				if (k[i] / 3 == 0)
					k[i] = sum;
			}
			for (int i = 0; i < 11; i++)
			{
				cout << k[i] << endl;
			}
		}
		break;

		case 8:
		{
			//7.	Дан массив вещественных чисел.Определить элемент массива(значение и индекс), который наиболее удален от заданного вещественного числа S.
			int k[11], s, max = 0;
			for (int i = 0; i < 11; i++)
			{
				k[i] = 1 + rand() % 80;
				cout << k[i] << endl;
			}
			cout << "Vvedite chislo" << endl;
			cin >> s;
			for (int j = 0; j < 11; j++)
			{
				if (k[j] > k[max])
					max = j;
			}
			cout << "-------------" << endl;
			cout << k[max] << endl;

		}
		break;

		case 9:
		{
			/*9.	Определить количество локальных минимумов в заданном числовом массиве.
			(Локальный минимум в числовом массиве – это последовательность трех рядом стоящих чисел, 426
			в которой среднее число меньше стоящих слева и справа от него).*/
			int k[11], b = 0;
			for (int i = 0; i < 11; i++)
			{
				k[i] = 1 + rand() % 80;
				cout << k[i] << endl;
			}
			for (int i = 0; i < 11; i++)
			{
				if (k[i] > k[i + 1] && k[i + 1] < k[i + 2])
				{
					b++;
				}
			}
			cout << "------------" << endl;
			cout << b << endl;


		}
		break;

		case 10:
		{
			/*10.	В заданном целочисленном массиве Z(15) положительных,
			отрицательных и нулевых чисел определить сумму и вывести последовательность значений элементов,
			которые расположены между первым отрицательным и нулевым элементами.*/
			int k[15], sum = 0, ot, z0;
			for (int i = 0; i < 15; i++)
			{
				k[i] = -10 + rand() % 15;
				cout << k[i] << endl;
			}
			for (int i = 0; i < 15; i++)
			{
				sum += k[i];
			}
			for (int i = 0; i < 15; i++)
			{
				if (k[i] < 0)
				{
					ot = i;
					break;
				}
				if (k[i] == 0)
				{
					z0 = i;
					break;
				}
			}
			cout << "----------------" << endl;
			for (ot; ot < z0; ot++)
			{
				cout << k[ot];
			}
		}
		break;

		case 11:
		{
			//11.	В заданном целочисленном массиве удалить элементы, которые встречаются более двух раз.
			int k[20], i, count = 0, del;
			for (int i = 0; i < 20; i++)
			{
				k[i] = 1 + rand() % 10;
				cout << i << " - " << k[i] << endl;
			}

			int hh = 0;
			for (i = 0; i < 20; i++)
			{
				hh = k[i];
				count = 0;
				for (int j = 0; j < 20; j++)
				{
					if (k[i] == k[j])
					{
						count++;
					}
				}

				if (count > 2)
				{
					for (int j = 0; j < 20; j++)
					{
						if (hh == k[j])
						{
							k[j] = 0;
						}
					}
				}
				
				/*	if (k[i] == del)
					{
						k[i] = 0;
					}*/
			
			}
			cout << "-------------------" << endl;
			for (int i = 0; i < 20; i++)
			{
				cout << i << " - " << k[i] << endl;
			}

		}
		break;

		case 12:
		{
			//12.	Ввести массив, состоящий из 10 - ти элементов целого типа.Сформировать новый, расположив сначала все отрицательные элементы и нули, после чего - положительные, сохраняя порядок их следования.
			int k[10], a[10] = { 0 };
			for (int i = 0; i < 10; i++)
			{
				k[i] = -5 + rand() % 10;
				cout << i << " - " << k[i] << endl;
			}
			for (int i = 0; i < 10; i++)
			{
				if (k[i] < 0 || k[i] == 0)
					a[i] = k[i];
			}
			cout << "----------" << endl;
			for (int i = 0; i < 10; i++)
			{
				cout << i << " - " << a[i] << endl;
			}
			for (int i = 0; i < 10; i++)
			{
				if (k[i] > 0)
					a[i] = k[i];
			}
			cout << "----------" << endl;
			for (int i = 0; i < 10; i++)
			{
				cout << i << " - " << a[i] << endl;
			}

		}
		break;

		}

	} while (z <= 0);



	system("pause");

}