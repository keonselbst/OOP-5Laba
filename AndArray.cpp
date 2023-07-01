#include "AndArray.h"

// Переопределенный метод сложения (пересечение множеств)
Array* AndArray::sum(Array* add)
{
	toSortedSet();
	add->toSortedSet();
	AndArray tmp(new double[size + add->getSize()], size + add->getSize());
	copy(arr, arr + size, tmp.arr);
	copy(add->getArr(), add->getArr() + add->getSize(), tmp.arr + size);
	sort(tmp.arr, tmp.arr + tmp.size);
	double* resArr = new double[tmp.size];
	int resSize = 0;

	for (int i = 0; i < tmp.size; ++i)
	{
		if (*(tmp.arr + i) == *(tmp.arr + i + 1))
		{
			*(resArr + resSize) = *(tmp.arr + i);
			resSize++;
			i++;
		}
	}
	Array* res = new AndArray(resArr, resSize);
	delete[]resArr;
	return res;
}

// Переопределенный метод поэлементной обработки
void AndArray::foreach()
{
	for (int i = 0; i < size; i++)
	{
		*(arr + i) = sqrt(*(arr + i));
	}
}