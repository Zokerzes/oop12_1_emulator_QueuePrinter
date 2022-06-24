#pragma once
#include <iostream>
#include <string.h>
#include <time.h>
#include "User.h"
class Queue
{
	//�������
	int* Wait;
	//������������ ������ �������
	int MaxQueueLength;
	//������� ������ �������
	int QueueLength;
public:
	Queue() {};
	//�����������
	Queue(int m);
	//����������
	~Queue();
	//���������� ��������
	void Add(int c);
	//���������� ��������
	int Extract();
	//������� �������
	void Clear();
	//�������� ������������� ��������� � �������
	bool IsEmpty();
	//�������� �� ������������ �������
	bool IsFull();
	//���������� ��������� � �������
	int GetCount();
	//������������ �������
	void Show();
};


