#include "QueuePriority.h"

QueuePriority::QueuePriority(int m)
{
	//�������� ������
	MaxQueueLength = m;
	//������� �������
	Wait = new int[MaxQueueLength];
	Pri = new int[MaxQueueLength];
	//���������� ������� �����
	QueueLength = 0;
}

QueuePriority::~QueuePriority()
{
	//�������� �������
	delete[]Wait;
	delete[]Pri;
}

void QueuePriority::Add(User u)
{
	//���� � ������� ���� ��������� �����,
	//�� ����������� ����������
	//�������� � ��������� ����� �������
	if (!IsFull()) {
		Wait[QueueLength] = u.getId();
		Pri[QueueLength] = u.getPri();
		QueueLength++;
	}
}

int QueuePriority::Extract()
{
	//���� � ������� ���� ��������, �� ���������� ���,
	//� �������� ��������� ��������� � �������� �������
	if (!IsEmpty()) {
		//����� ������������ ������� - �������
		int max_pri = Pri[0];
		//� ������������ ������ = 0
		int pos_max_pri = 0;
		//���� ���������
		for (int i = 1; i < QueueLength; i++)
			//���� �������� ����� ������������ �������
			if (max_pri < Pri[i]) {
				max_pri = Pri[i];
				pos_max_pri = i;
			}
		//����������� ������������ �������
		int temp1 = Wait[pos_max_pri];
		int temp2 = Pri[pos_max_pri];
		//�������� ��� ��������
		for (int i = pos_max_pri; i < QueueLength - 1; i++) {
			Wait[i] = Wait[i + 1];
			Pri[i] = Pri[i + 1];
		}
		//��������� ����������
		QueueLength--;
		//������� ������������ ��������
		return temp1;
	}
	else return -1;
}

void QueuePriority::Clear()
{
	//����������� "�������" �������
	QueueLength = 0;
}

bool QueuePriority::IsEmpty()
{
	//����?
	return QueueLength == 0;
}

bool QueuePriority::IsFull()
{
	//�����?
	return QueueLength == MaxQueueLength;
}

int QueuePriority::GetCount()
{
	return QueueLength;
}

void QueuePriority::Show()
{
	cout << "\n-----------------------------------\n";
	//������������ �������
	for (int i = 0; i < QueueLength; i++)
	{
		cout << Wait[i] << " - " << Pri[i] << "\n\n";
	}
	cout << "\n-----------------------------------\n";
}


