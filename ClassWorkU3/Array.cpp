#include "Array.h"
#include "QS.h"

void Array7()
{
	cout << ". Дан массив размера N. Вывести его элементы в обратном порядке. " << endl;
	srand(time(NULL));

	int n = 0;
	cout << "Input N: " << endl;
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++)	arr[i] = rand() % 100;

	cout << endl << "Until: " << endl;
	for (int i = 0; i < n; i++) cout << arr[i] << " ";

	cout << endl << "After: " << endl;
	for (int i = n - 1; i >= 0; i--) cout << arr[i] << " ";
	cout << endl;
}

void Array11()
{
	cout << " Дан массив A размера N и целое число K (1 ≤ K ≤ N).\n\
Вывести элементы массива с порядковыми номерами, кратными K: AK, A2·K, A3·K, … .\n\
Условный оператор не использовать" << endl;
	srand(time(NULL));

	int n = 0, k = 0;
	cout << "Input N: " << endl;
	cin >> n;
	cout << "Input K: " << endl;
	cin >> k;

	if (1 > k || k > n) { cout << "Incorrect input K!" << endl; return; }

	int* arr = new int[n];
	for (int i = 0; i < n; i++)	arr[i] = rand() % 100;

	cout << endl << "Until: " << endl;
	for (int i = 0; i < n; i++) cout << arr[i] << " ";

	cout << endl << "After: " << endl;
	for (int i = 0; i < n; i++) { if ((i + 1) % k == 0) cout << arr[i] << " "; }
	cout << endl;
}

void Array16()
{
	cout << "Дан массив A размера N. Вывести его элементы в следующем порядке:\n\
A1, AN, A2, AN–1, A3, AN–2, … " << endl;
	srand(time(NULL));

	int n = 0;
	cout << "Input N: " << endl;
	cin >> n;

	int* arr = new int[n];
	for (int i = 0; i < n; i++)	arr[i] = rand() % 100;

	cout << endl << "Until: " << endl;
	for (int i = 0; i < n; i++) cout << arr[i] << " ";

	cout << endl << "After: " << endl;
	for (int i = 0; i < n / 2; i++)
	{
		cout << arr[i] << " " << arr[n - i - 1] << " ";
		if (n % 2 != 0 || i == ((n / 2) - 1))
			cout << arr[i + 1];
	}
	cout << endl;
}

void Array22()
{
	cout << " Дан массив размера N и целые числа K и L (1 < K ≤ L ≤ N). \n\
Найти сумму всех элементов массива, кроме элементов \n\
с номерами от K до L включительно." << endl;
	srand(time(NULL));

	int n = 0, k = 0, l = 0;
	cout << "Input N: " << endl;
	cin >> n;
	cout << "Input K: " << endl;
	cin >> k;
	cout << "Input L: " << endl;
	cin >> l;

	if (1 > k || k > n || 1 > l || l > n || k > l) { cout << "Incorrect input K or L!" << endl; return; }

	int* arr = new int[n];
	for (int i = 0; i < n; i++)	arr[i] = rand() % 100;

	cout << endl << "Until: " << endl;
	for (int i = 0; i < n; i++) cout << arr[i] << " ";

	cout << endl << "After: " << endl;
	for (int i = 0; i < n; i++)
	{
		if (i >= k - 1 || i <= l - 1)cout << arr[i] << " ";
	}
	cout << endl;
}

void Array33()
{
	cout << "Дан массив размера N. Найти номер его последнего локального максимума \n\
(локальный максимум — это элемент, который больше любого из\n\
своих соседей). " << endl;
	srand(time(NULL));

	int n = 0, num_max = 0, max = 0;
	cout << "Input N: " << endl;
	cin >> n;

	int* arr = new int[n];
	for (int i = 0; i < n; i++)	arr[i] = rand() % 100;

	cout << endl << "Until: " << endl;
	for (int i = 0; i < n; i++) cout << arr[i] << " ";

	cout << endl << "After: " << endl;
	for (int i = 0; i < n; i++) { if (arr[i] > max) { max = arr[i]; num_max = i; } }

	cout << endl << "Result: " << ++num_max << endl;
}

int comp(const int* i, const int* j)
{
	return *i - *j;
}

void Array43()
{
	cout << "Array43. Дан целочисленный массив размера N, все элементы которого упорядочены\n\
(по возрастанию или по убыванию). Найти количество различных\n\
элементов в данном массиве." << endl;
	srand(time(NULL));

	int n = 0, num_max = 0, max = 0;
	cout << "Input N: " << endl;
	cin >> n;

	int* arr = new int[n];
	for (int i = 0; i < n; i++)	arr[i] = rand() % 100;

	cout << endl << "Until: " << endl;
	for (int i = 0; i < n; i++) cout << arr[i] << " ";

	cout << endl << "After: " << endl;
	MyQSort(arr, arr + n);
	for (int i = 0; i < n; i++) if(arr[i] != arr[i-1] || arr[i] != arr[i+1]) cout << arr[i] << " ";

	cout << endl;
}


void Array54()
{
	cout << "Дан целочисленный массив A размера N. Переписать в новый целочисленный\n\
массив B все четные числа из исходного массива (в том же порядке) \n\
и вывести размер полученного массива B и его содержимое. " << endl;
	srand(time(NULL));

	int n = 0, j = 0;
	cout << "Input N: " << endl;
	cin >> n;

	int* arrA = new int[n];
	int* arrB = new int[n];
	for (int i = 0; i < n; i++)	arrA[i] = rand() % 100;

	cout << endl << "Until: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arrA[i] << " ";
		if (arrA[i] % 2 == 0) arrB[j++] = arrA[i];
	}
	cout << endl << "After: " << endl;
	for (int i = 0; i < j; i++) cout << arrB[i] << " ";
	cout << endl << "Size of Array B: " << j << endl;

}

void Array60()
{
	cout << "Дан массив A размера N. Сформировать новый массив\n\
B того же размера по следующему правилу: элемент BK равен\n\
сумме элементов массива A с номерами от K до N." << endl;
	srand(time(NULL));

	int n = 0, k = 0, j = 0;
	cout << "Input N: " << endl;
	cin >> n;
	cout << "Input K: " << endl;
	cin >> k;

	if (1 > k || k > n) { cout << "Incorrect input K!" << endl; return; }

	int* arrA = new int[n];
	int* arrB = new int[n];
	for (int i = 0; i < n; i++)	arrA[i] = rand() % 100;

	cout << endl << "Until: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arrA[i] << " ";
		if (i >= k || (k - i) % 2 == 0) i != (n - 1) ? arrB[j++] = arrA[i] + arrA[i+1] : arrB[j++] = arrA[i];
	}
	cout << endl << "After: " << endl;
	for (int i = 0; i < j; i++) cout << arrB[i] << " ";
	cout << endl;
}

void Array63()
{
	cout << "Даны два массива A и B размера 5, элементы которых упорядочены по\n\
возрастанию.Объединить эти массивы так, чтобы результирующий\n\
массив C(размера 10) остался упорядоченным по возрастанию."  << endl;
	srand(time(NULL));

	int n = 5, k = 10, j = 0, q = 0;

	int* arrA = new int[n];
	int* arrB = new int[n];
	int* arrC = new int[k];
	for (int i = 0; i < n; i++) { arrA[i] = rand() % 100; arrB[i] = rand() % 100; }

	cout << endl << "Until: " << endl;
	for (int i = 0; i < n; i++) { cout << arrA[i] << " "; } cout << endl;
	for (int i = 0; i < n; i++) { cout << arrB[i] << " "; }

	cout << endl << "After: " << endl;
	MyQSort(arrA, arrA + n); MyQSort(arrB, arrB + n);
	for (int i = 0; i < k; i++)
	{
		if (arrA[j] > arrB[q] && q != 5) arrC[i] = arrB[q++];
		else if (arrA[j] < arrB[q] && j != 5) arrC[i] = arrA[j++];
		else if (q != 5 && j != 5) { arrC[i] = arrA[j++]; q++; k--; }
		else q != 5 ? arrC[i] = arrB[q++] : arrC[i] = arrA[j++];
	}

	for (int i = 0; i < k; i++) cout << arrC[i] << " ";
	cout << endl;
}

void Array68()
{
	cout << "Дан массив размера N. Поменять местами его минимальный и максимальный элементы. " << endl;
	srand(time(NULL));

	int n = 0, max = 0, num_max = 0, min = 100, num_min = 0;
	cout << "Input N: " << endl;
	cin >> n;

	if (1 > n) { cout << "Incorrect input N!" << endl; return; }

	int* arr = new int[n];
	for (int i = 0; i < n; i++)	arr[i] = rand() % 100;

	cout << endl << "Until: " << endl;
	for (int i = 0; i < n; i++) { cout << arr[i] << " "; if (max < arr[i]) { max = arr[i]; num_max = i; } if (min > arr[i]) { min = arr[i]; num_min = i; } }

	cout << endl << "After: " << endl;
	arr[num_min] = max; arr[num_max] = min;
	for (int i = 0; i < n; i++) cout << arr[i] << " ";
	cout << endl;
}

void Array77()
{
	cout << "Дан массив размера N. Возвести в квадрат \n\
все его локальные минимумы (то есть числа, меньшие своих соседей). " << endl;
	srand(time(NULL));

	int n = 0;
	cout << "Input N: " << endl;
	cin >> n;

	if (2 > n) { cout << "Incorrect input N!" << endl; return; }

	int* arr = new int[n];
	for (int i = 0; i < n; i++)	arr[i] = rand() % 100;

	cout << endl << "Until: " << endl;
	for (int i = 0; i < n; i++) cout << arr[i] << " ";

	cout << endl << "After: " << endl;
	for (int i = 0; i < n; i++)
	{
		if (i == 0 && arr[i + 1] > arr[i]) cout << arr[i] * arr[i] << " ";
		else if (i == n - 1 && arr[i - 1] > arr[i]) cout << arr[i] * arr[i] << " ";
		else if (arr[i + 1] > arr[i] && arr[i - 1] > arr[i]) cout << arr[i] * arr[i] << " ";
		else cout << arr[i] << " ";
	}
	cout << endl;
}

void Array88()
{
	cout << ". Дан массив размера N, все элементы которого, кроме последнего,\n\
упорядочены по возрастанию. Сделать массив упорядоченным, переместив\n\
последний элемент на новую позицию" << endl;
	srand(time(NULL));

	int n = 0;
	cout << "Input N: " << endl;
	cin >> n;

	if (2 > n) { cout << "Incorrect input N!" << endl; return; }

	int* arr = new int[n];
	for (int i = 0; i < n; i++)	arr[i] = rand() % 100;

	MyQSort(arr, arr + n - 1);
	cout << endl << "Until: " << endl;
	for (int i = 0; i < n; i++) cout << arr[i] << " ";

	MyQSort(arr, arr + n);
	cout << endl << "After: " << endl;
	for (int i = 0; i < n; i++) cout << arr[i] << " ";
	cout << endl;
}

void Array92()
{
	cout << "Дан массив размера N и целые числа K и L (1 ≤ K < L ≤ N). Удалить из\n\
массива элементы с номерами от K до L включительно и вывести размер\n\
полученного массива и его содержимое. " << endl;
	srand(time(NULL));

	int n = 0, k = 0, l = 0, j = 0;
	cout << "Input N: " << endl;
	cin >> n;
	cout << "Input K: " << endl;
	cin >> k;
	cout << "Input L: " << endl;
	cin >> l;

	if (1 > k || k > n || 1 > l || l > n || k > l) { cout << "Incorrect input K or L!" << endl; return; }

	int* arr = new int[n];
	for (int i = 0; i < n; i++)	arr[i] = rand() % 100;

	cout << endl << "Until: " << endl;
	for (int i = 0; i < n; i++) cout << arr[i] << " ";

	cout << endl << "After: " << endl;
	int* arr2 = new int[n - (l - k)];
	for (int i = 0; i < n; i++)
	{
		if (i < k - 1 || i > l - 1) 
			arr2[j++] = arr[i];
	}
	for (int i = 0; i < j; i++) { arr[i] = arr2[i]; cout << arr[i] << " "; }
	cout << endl << "New size: " << j << endl;
}

void Array101()
{
	cout << " Дан массив размера N и целое число K (1 ≤ K ≤ N). Перед элементом\n\
массива с порядковым номером K вставить новый элемент с нулевым значением. " << endl;
	srand(time(NULL));

	int n = 0, k = 0;
	cout << "Input N: " << endl;
	cin >> n;
	cout << "Input K: " << endl;
	cin >> k;

	if (1 > k || k > n) { cout << "Incorrect input K!" << endl; return; }

	int* arr = new int[n + 1];
	for (int i = 0; i < n; i++)	arr[i] = rand() % 100;

	cout << endl << "Until: " << endl;
	for (int i = 0; i < n; i++) cout << arr[i] << " ";

	cout << endl << "After: " << endl;
	for (int i = n + 1; i >= k - 1; i--)
	{
		if (i == k - 1) arr[i] = 0;
		else arr[i] = arr[i - 1];
	}
	for (int i = 0; i < n + 1; i++) cout << arr[i] << " "; 
	cout << endl;
}

void Array110()
{
	cout << "Дан целочисленный массив размера N. Продублировать в нем все\n\
четные числа. " << endl;
	srand(time(NULL));

	int n = 0, j = 0, k = 0;
	cout << "Input N: " << endl;
	cin >> n;

	int* arr = new int[n];
	for (int i = 0; i < n; i++)	arr[i] = rand() % 100;

	cout << endl << "Until: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
		if (arr[i] % 2 == 0) j++;
	}

	int* arr2 = new int[n + j];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			arr2[k++] = arr[i]; 
			arr2[k++] = arr[i];
		}
		else
		{
			arr2[k++] = arr[i];
		}
	}
	cout << endl << "After: " << endl;
	for (int i = 0; i < k; i++) cout << arr2[i] << " ";
	cout << endl;
}

void Array119()
{
	cout << "Дан целочисленный массив размера N. \n\
Преобразовать массив, увеличив каждую его серию на один элемент." << endl;
	srand(time(NULL));

	int n = 0, j = 0, k = 0, temp = -2;
	cout << "Input N: " << endl;
	cin >> n;

	int* arr = new int[n];
	for (int i = 0; i < n; i++)	arr[i] = rand() % 3;

	cout << endl << "Until: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
		if (temp != arr[i] && arr[i] == arr[i + 1])
		{
			j++;
			temp = arr[i];
		}
		else 
			temp = arr[i];
	}

	int* arr2 = new int[n + j];
	temp = -2;
	for (int i = 0; i < n; i++)
	{
		if (temp != arr[i] && arr[i] == arr[i + 1])
		{
			arr2[k++] = arr[i];
			arr2[k++] = arr[i];
			temp = arr[i];
		}
		else
		{
			temp = arr[i];
			arr2[k++] = arr[i];
		}
	}

	cout << endl << "After: " << endl;
	for (int i = 0; i < k; i++) cout << arr2[i] << " ";
	cout << endl;
}

void Array123()
{
	cout << "Дано целое число K (> 1) и целочисленный массив размера N. \n\
Поменять местами первую серию массива и его серию с номером K. Если серий\n\
в массиве меньше K, то вывести массив без изменений" << endl;
	srand(time(NULL));

	int n = 0, j = 0, k = 0, temp = -2, valueSer = 0, numSer = 0, posSer = 0, perValue = 0, q = 0, nextValue = 0;
	cout << "Input N: " << endl;
	cin >> n;
	cout << "Input K: " << endl;
	cin >> k;

	if (1 > k || k > n) { cout << "Incorrect input K!" << endl; return; }

	int* arr = new int[n];
	for (int i = 0; i < n; i++)	arr[i] = rand() % 3;

	bool doSer = true;
	cout << endl << "Until: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
		if (temp != arr[i] && arr[i] == arr[i + 1])
		{
			if (j == 0)
			{
				valueSer = arr[i]; 
				numSer++;
				posSer = i;
			}
			j++;
			temp = arr[i];
		}
		else
		{
			temp = arr[i]; 
			if (j == 1 && valueSer == arr[i] && doSer) numSer++;
			else if (numSer != 0) doSer = false;
		}
	}
	bool flagOfSer = true, flagOfSer2 = true;
	if (j <= k && posSer + numSer - 1 <= k)
	{
		int* arr2 = new int[2*n];
		temp = arr[k-1];
		for (int i = 0; i < n; i++)
		{
			if (perValue != arr[i]) flagOfSer = true;
			if (nextValue != arr[i] && i >= k) flagOfSer2 = true;
			if (i == posSer)
			{
				perValue = arr[i];
				int tempK = k;
				while (temp == arr[tempK - 1])
				{
					arr2[q++] = arr[tempK++ - 1];
					nextValue = arr2[q - 1];
				}
				flagOfSer = false;
			}
			if (i != k - 1 && i != posSer && flagOfSer && flagOfSer2)
			{
				arr2[q++] = arr[i];
			}
			else
			{
				if (i == k - 1)
				{
					while (numSer-- != 0)
						arr2[q++] = perValue;
					flagOfSer2 = false;
				}
			}
		}

		cout << endl << "After: " << endl;
		for (int i = 0; i < q; i++) cout << arr2[i] << " ";
		cout << endl;
	}
	else
	{
		cout << endl << "After: " << endl;
		for (int i = 0; i < n; i++) cout << arr[i] << " ";
		cout << endl;
	}
}

void Array129()
{
	cout << "Дан целочисленный массив размера N. \n\
Преобразовать массив, увеличив его последнюю серию наибольшей длины на один элемент. " << endl;
	srand(time(NULL));

	int n = 0, j = 0, temp = 0, numSer = 0, max = 0, posSer = 0;
	cout << "Input N: " << endl;
	cin >> n;

	int* arr = new int[n];
	for (int i = 0; i < n; i++)	arr[i] = rand() % 3;

	bool doSer = true;
	cout << endl << "Until: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
		if (doSer)
		{
			temp = arr[i];
			numSer++;
			doSer = false;
			continue;
		}
		if (arr[i] == temp)
		{
			numSer++;
			if (max < numSer)
			{
				max = numSer;
				posSer = i - numSer + 1;
			}
		}
		else
		{
			temp = arr[i];
			numSer = 1;
			doSer = false;
			continue;
		}
	}

	int* arr2 = new int[n + 1];
	cout << endl << "After: " << endl;
	for (int i = 0; i < n; i++)
	{
		if (i == posSer)
		{
			arr2[j++] = arr[i];
			arr2[j++] = arr[i];
		}
		else arr2[j++] = arr[i];
	}
	for (int i = 0; i < n + 1; i++) cout << arr2[i] << " ";
	cout << endl;
}

void Array131()
{
	cout << "Дано множество A из N точек на плоскости и точка B (точки заданы\n\
своими координатами x, y). Найти точку из множества A, наиболее близкую к точке B. \n\
Расстояние R между точками с координатами (x1, y1) и (x2, y2) вычисляется по формуле" << endl;
	srand(time(NULL));

	int n = 0, xB = 0, yB = 0, pos = 0;
	double length = 0, maxL = 0;

	cout << "Input N: " << endl;
	cin >> n;
	cout << "Input B x: " << endl;
	cin >> xB;
	cout << "Input B y: " << endl;
	cin >> yB;

	int* arrX = new int[n];
	for (int i = 0; i < n; i++)	arrX[i] = rand() % 100;
	int* arrY = new int[n];
	for (int i = 0; i < n; i++)	arrY[i] = rand() % 100;

	for (int i = 0; i < n; i++)
	{
		length = sqrt((xB - arrX[i]) * (xB - arrX[i]) + (yB - arrY[i]) * (yB - arrY[i]));
		if (maxL < length)
		{
			maxL = length;
			pos = i;
		}
	}

	cout << "Position of A - X: " << arrX[pos] << " Y: " << arrY[pos] << endl;
}

void Array136()
{
	cout << "Дано множество A из N точек (N > 2, точки заданы своими координатами x, y). \n\
Найти такую точку из данного множества, сумма расстояний от\n\
которой до остальных его точек минимальна, и саму эту сумму. " << endl;
	srand(time(NULL));

	int n = 0, pos = 0;
	double sum = 0, maxSum = 0, tempSum = 0;

	cout << "Input N: " << endl;
	cin >> n;

	if (2 > n) { cout << "Incorrect input N!" << endl; return; }

	int* arrX = new int[n];
	for (int i = 0; i < n; i++)	arrX[i] = rand() % 100;
	int* arrY = new int[n];
	for (int i = 0; i < n; i++)	arrY[i] = rand() % 100;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			tempSum = sqrt((arrX[j] - arrX[i]) * (arrX[j] - arrX[i]) + (arrY[j] - arrY[i]) * (arrY[j] - arrY[i]));
			sum += tempSum;
			if (i == 0) maxSum = sum;
		}
		if (maxSum > sum)
		{
			maxSum = sum;
			pos = i;
		}
	}

	cout << "Position of A - X: " << arrX[pos] << " Y: " << arrY[pos] << endl;
	cout << "Min Sum: " << maxSum << endl;
}

void Array132()
{
	cout << "Дано множество A из N точек (точки заданы своими координатами\n\
x, y).Среди всех точек этого множества, лежащих во второй четверти, \n\
найти точку, наиболее удаленную от начала координат.Если таких точек нет,\n\
то вывести точку с нулевыми координатами. " << endl;
	srand(time(NULL));

	int n = 0, pos = -1;
	double res = 0.0, maxR = 0;

	cout << "Input N: " << endl;
	cin >> n;

	if (2 > n) { cout << "Incorrect input N!" << endl; return; }

	int* arrX = new int[n];
	for (int i = 0; i < n; i++)	arrX[i] = rand() % 100;
	int* arrY = new int[n];
	for (int i = 0; i < n; i++)	arrY[i] = rand() % 100 - 100;

	for (int i = 0; i < n; i++)
	{
		res = sqrt((arrX[i]) * (arrX[i]) + (arrY[i]) * (arrY[i]));
		if (maxR < res)
		{
			maxR = res;
			pos = i;
		}
	}

	if (pos > 0) cout << "Position of A - X: " << arrX[pos] << " Y: " << arrY[pos] << endl;
	else cout << "Position of A - X: " << 0 << " Y: " << 0 << endl;
}
