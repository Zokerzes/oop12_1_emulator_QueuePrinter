#include<iostream>
#include"User.h"
#include"QueuePriority.h"
#include"Queue.h"
using namespace std;




int main()
{
	User u01(1, 4);
	User u02(2, 3);
	User u03(3, 4);
	User u04(4, 3);
	User u05(5, 2);
	User u06(6, 4);
	User u07(7, 2);
	User u08(8, 1);
	User u09(9, 1);
	User u10(10, 5);
	Queue qt(20);
	QueuePriority q(20);
	q.Add(u01);
	q.Add(u02);
	q.Add(u03);
	q.Add(u04);
	q.Add(u05);
	q.Add(u06);
	q.Add(u07);
	q.Add(u08);
	q.Add(u09);
	q.Add(u10);

	q.Show();
	while (!q.IsEmpty()) {
		int temp = q.Extract();
		qt.Add(temp);
		cout << temp << "  "; 
	};
	cout << endl << endl;
	qt.Show();

	return 0;
};