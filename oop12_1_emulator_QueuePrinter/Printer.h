#pragma once
#include <iostream>
#include <string.h>
#include <time.h>
#include "User.h"
#include"QueuePriority.h"
#include"Queue.h"
class Printer
{
	Queue qt;
	QueuePriority q;

public:

	Printer();
	void job();
	void Show(); //not worked!! 

};

