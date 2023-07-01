#pragma once
#include"Array.h"
#include<algorithm>

class OrArray : public Array
{
public:
	OrArray() : Array() {};
	OrArray(size_t _size) :Array(_size) {};
	OrArray(double* _arr, size_t _size) :Array(_arr, _size) {};

	// Переопределенный метод сложения
	Array* sum(Array* add)override;

	// Переопределенный метод поэлементной обработки
	void foreach()override;
};