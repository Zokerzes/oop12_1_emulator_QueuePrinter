#pragma once
#include <iostream>
#include <string.h>
#include <time.h>
#include "User.h"
class Queue
{
	//Очередь
	int* Wait;
	//Максимальный размер очереди
	int MaxQueueLength;
	//Текущий размер очереди
	int QueueLength;
public:
	Queue() {};
	//Конструктор
	Queue(int m);
	//Деструктор
	~Queue();
	//Добавление элемента
	void Add(int c);
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


