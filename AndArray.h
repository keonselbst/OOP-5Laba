#pragma once
#include"Array.h"
#include<algorithm>

class AndArray : public Array
{
public:
	AndArray() : Array() {};
	AndArray(size_t _size) :Array(_size) {};
	AndArray(double* _arr, size_t _size) :Array(_arr, _size) {};

	// Переопределенный метод сложения
	Array* sum(Array* add)override;

	// Переопределенный метод поэлементной обработки
	void foreach()override;

};