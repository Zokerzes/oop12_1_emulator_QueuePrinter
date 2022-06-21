#pragma once
#include <iostream>
#include <string.h>
#include <time.h>
#include "User.h"
using namespace std;
class QueuePriority
{
	//�������
	int* Wait;
	//���������
	int* Pri;
	//������������ ������ �������
	int MaxQueueLength;
	//������� ������ �������
	int QueueLength;

public:
	//�����������
	QueuePriority(int m);
	//����������
	~QueuePriority();
	//���������� ��������
	void Add(User);
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




