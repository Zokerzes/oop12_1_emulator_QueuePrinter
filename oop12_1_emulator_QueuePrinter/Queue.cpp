#include "Queue.h"
void Queue::Show() {
	cout << "\n-----------------------------------\n";
	//демонстраци€ очереди
	for (int i = 0; i < QueueLength; i++) {
		cout << Wait[i] << " ";
	}
	cout << "\n-----------------------------------\n";
}
Queue::~Queue()
{
	//удаление очереди
	delete[]Wait;
}
Queue::Queue(int m)
{
	//получаем размер
	MaxQueueLength = m;
	//создаем очередь
	Wait = new int[MaxQueueLength];
	//»значально очередь пуста
	QueueLength = 0;
}
void Queue::Clear()
{
	//Ёффективна€ "очистка" очереди
	QueueLength = 0;
}
bool Queue::IsEmpty()
{
	//ѕуст?
	return QueueLength == 0;
}
bool Queue::IsFull()
{
	//ѕолон?
	return QueueLength == MaxQueueLength;
}
int Queue::GetCount()
{
	// оличество присутствующих в стеке элементов 
	return QueueLength;
}
void Queue::Add(int c)
{
	//≈сли в очереди есть свободное место,
	//то увеличиваем количество
	//значений и вставл€ем новый элемент 
	if (!IsFull())
		Wait[QueueLength++] = c;
}
int Queue::Extract()
{
	//≈сли в очереди есть элементы, то возвращаем тот,
	//который вошел первым и сдвигаем очередь 
	if (!IsEmpty()) {
		//запомнить первый
		int temp = Wait[0];
		//сдвинуть все элементы
		for (int i = 1; i < QueueLength; i++)
			Wait[i - 1] = Wait[i];

			//уменьшить количество
			QueueLength--;
		//вернуть первый(нулевой)
		return temp;
	}
	else //≈сли в стеке элементов нет
		return -1;
}