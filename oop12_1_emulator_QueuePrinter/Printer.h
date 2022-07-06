#pragma once
#include <iostream>
#include <string.h>
#include <time.h>
#include "User.h"
#include"QueuePriority.h"
#include"Queue.h"
class Printer
{public:
	int temp{ int() };
	Queue qt;
	QueuePriority q;



	Printer();
	void job();
	void toPause() {};
	void Show(); 
	Queue getQueue();
	

};

