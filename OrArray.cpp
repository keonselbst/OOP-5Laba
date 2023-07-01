#include "OrArray.h"

// Переопределенный метод сложения (объединение множеств)
Array* OrArray::sum(Array* add)
{
	toSortedSet();
	add->toSortedSet();
	Array* res = new OrArray(new double[size + add->getSize()], size + add->getSize());
	copy(arr, arr + size, res->getArr());
	copy(add->getArr(), add->getArr() + add->getSize(), res->getArr() + size);
	res->toSortedSet();
	return res;
}

// Переопределенный метод поэлементной обработки
void OrArray::foreach()
{
	for (int i = 0; i < size; i++)
	{
		*(arr + i) = log(*(arr + i));
	}
}