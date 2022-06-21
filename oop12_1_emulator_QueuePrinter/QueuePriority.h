#pragma once
#include <iostream>
#include <string.h>
#include <time.h>
#include "User.h"
using namespace std;
class QueuePriority
{
	//Очередь
	int* Wait;
	//Приоритет
	int* Pri;
	//Максимальный размер очереди
	int MaxQueueLength;
	//Текущий размер очереди
	int QueueLength;

public:
	//Конструктор
	QueuePriority(int m);
	//Деструктор
	~QueuePriority();
	//Добавление элемента
	void Add(User);
	//Извлечение элемента
	int Extract();
	//Очистка очереди
	void Clear();
	//Проверка существования элементов в очереди
	bool IsEmpty();
	//Проверка на переполнение очереди
	bool IsFull();
	//Количество элементов в очереди
	int GetCount();
	//демонстрация очереди
	void Show();
};




