#pragma once
#include<iostream>
#include<algorithm>
using namespace std;

class Array
{
protected:
	double* arr;
	size_t size;
public:
	Array();
	Array(size_t _size);
	Array(double* _arr, size_t _size);
	~Array();
	void recreate(size_t _size);
	void recreate(double* _arr, size_t _size);

	size_t getSize();
	double* getArr();
	void setSize(size_t _size);
	void setArr(double* _arr);

	// Виртуальный метод сложения
	virtual Array* sum(Array* add) = 0;

	// Виртуальный метод поэлементной обработки
	virtual void foreach() = 0;

	friend ostream& operator<<(ostream& os, const Array* out);
	friend istream& operator>>(istream& is, const Array* in);

	                                                                                                                   // Функция преобразующая массив к множеству (удаляет одинаковые элементы и упорядочивает)
	void toSortedSet();
};