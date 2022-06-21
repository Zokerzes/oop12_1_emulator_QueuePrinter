#include "QueuePriority.h"

QueuePriority::QueuePriority(int m)
{
	//получаем размер
	MaxQueueLength = m;
	//создаем очередь
	Wait = new int[MaxQueueLength];
	Pri = new int[MaxQueueLength];
	//»значально очередь пуста
	QueueLength = 0;
}

QueuePriority::~QueuePriority()
{
	//удаление очереди
	delete[]Wait;
	delete[]Pri;
}

void QueuePriority::Add(User u)
{
	//≈сли в очереди есть свободное место,
	//то увеличиваем количество
	//значений и вставл€ем новый элемент
	if (!IsFull()) {
		Wait[QueueLength] = u.getId();
		Pri[QueueLength] = u.getPri();
		QueueLength++;
	}
}

int QueuePriority::Extract()
{
	//≈сли в очереди есть элементы, то возвращаем тот,
	//у которого наивысший приоритет и сдвигаем очередь
	if (!IsEmpty()) {
		//пусть приоритетный элемент - нулевой
		int max_pri = Pri[0];
		//а приоритетный индекс = 0
		int pos_max_pri = 0;
		//ищем приоритет
		for (int i = 1; i < QueueLength; i++)
			//если встречен более приоритетный элемент
			if (max_pri < Pri[i]) {
				max_pri = Pri[i];
				pos_max_pri = i;
			}
		//вытаскиваем приоритетный элемент
		int temp1 = Wait[pos_max_pri];
		int temp2 = Pri[pos_max_pri];
		//сдвинуть все элементы
		for (int i = pos_max_pri; i < QueueLength - 1; i++) {
			Wait[i] = Wait[i + 1];
			Pri[i] = Pri[i + 1];
		}
		//уменьшаем количество
		QueueLength--;
		//возврат извлеченного элемента
		return temp1;
	}
	else return -1;
}

void QueuePriority::Clear()
{
	//Ёффективна€ "очистка" очереди
	QueueLength = 0;
}

bool QueuePriority::IsEmpty()
{
	//ѕуст?
	return QueueLength == 0;
}

bool QueuePriority::IsFull()
{
	//ѕолон?
	return QueueLength == MaxQueueLength;
}

int QueuePriority::GetCount()
{
	return QueueLength;
}

void QueuePriority::Show()
{
	cout << "\n-----------------------------------\n";
	//демонстраци€ очереди
	for (int i = 0; i < QueueLength; i++)
	{
		cout << Wait[i] << " - " << Pri[i] << "\n\n";
	}
	cout << "\n-----------------------------------\n";
}


