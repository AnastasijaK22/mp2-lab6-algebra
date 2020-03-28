#pragma once

#ifndef __LINTABLIST_H__
#define __LINTABLIST_H__

#include "BaseTable.h"

struct Link
{
	Data data;
	Link* pNext;
};

class LinTabList : public BaseTable
{
	Link* Head;
	int Amount;
public:
	LinTabList();
	~LinTabList();

	Data* Find(std::string key);
	void Insert(Data data);
	void Delete(std::string key);
};

#endif