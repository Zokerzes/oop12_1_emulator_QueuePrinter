#include "User.h"

User::User()
{
	id = 0;
	pri = 0;
}

User::User(int id, int pri)
{
	this->id = id;
	this->pri = pri;
}

User::~User()
{
}

int User::getId()
{
	return id;
}

int User::getPri()
{
	return pri;
}
