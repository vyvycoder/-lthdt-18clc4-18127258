#pragma once
#include "Time.h"

class GmtTime : public Time
{
public:
	GmtTime();
	GmtTime(int, int, int);
	void ToString(int gmt);
};

