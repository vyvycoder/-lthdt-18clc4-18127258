#include "GmtTime.h"

void GmtTime::ToString(int gmt) {
	m_hour += gmt;
	m_hour %= 24;
	cout << m_hour << ":" << m_min << ":" << m_sec;
}

GmtTime::GmtTime(int h, int m, int s) : Time(h, m, s){}

GmtTime::GmtTime() : Time(){}