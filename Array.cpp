#include "Array.h"



Array::Array()
{
	size = 0;
	arr = nullptr;
};

Array::Array(size_t _size)
{
	size = _size;
	arr = new double[size];
	for (int i = 0; i < size; ++i)
	{
		*(arr + i) = 0;
	}
};

Array::Array(double* _arr, size_t _size)
{
	size = _size;
	arr = new double[size];
	for (int i = 0; i < size; ++i)
	{
		*(arr + i) = *(_arr + i);
	}
};

Array::~Array()
{
	delete[]arr;
};

void Array::recreate(size_t _size)
{
	if (arr)
		delete[]arr;
	size = _size;
	arr = new double[size];
	for (int i = 0; i < size; ++i)
	{
		*(arr + i) = 0;
	}
}

void Array::recreate(double* _arr, size_t _size)
{
	if (arr)
		delete[] arr;
	size = _size;
	arr = new double[size];
	for (int i = 0; i < size; ++i)
	{
		*(arr + i) = *(_arr + i);
	}
}

size_t Array::getSize()
{
	return size;
}

double* Array::getArr()
{
	return arr;
}

void Array::setSize(size_t _size)
{
	size = _size;
}

void Array::setArr(double* _arr)
{
	for (int i = 0; i < size; ++i)
	{
		*(arr + i) = *(_arr + i);
	}
}

// Функции ввода/вывода
ostream& operator<<(ostream& os, const Array* out)
{
	for (int i = 0; i < out->size; i++)
	{
		os << *(out->arr + i) << ' ';
	}
	return os;
}
istream& operator>>(istream& is, const Array* in)
{
	for (int i = 0; i < in->size; ++i)
	{
		is >> *(in->arr + i);
	}
	return is;
}

// Функция преобразующая массив к множеству (удаляет одинаковые элементы и упорядочивает)
void Array::toSortedSet()
{
	sort(arr, arr + size);
	double* resArr = new double[size];
	*resArr = *arr;
	int resSize = 1;
	for (int i = 1; i < size; ++i)
	{
		if (*(arr + i) != *(arr + i - 1))
		{
			*(resArr + resSize) = *(arr + i);
			resSize++;
		}
	}
	delete[]arr;
	size = resSize;
	arr = new double[resSize];
	for (int i = 0; i < size; ++i)
	{
		*(arr + i) = *(resArr + i);
	}
	delete[]resArr;
}