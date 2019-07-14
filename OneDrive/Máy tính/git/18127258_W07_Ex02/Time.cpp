#include "Time.h"
Time::Time() {
	time_t now = time(0);
	tm* t = new tm(*localtime(&now));
	m_hour = t->tm_hour;
	m_min = t->tm_min;
	m_sec = t->tm_sec;
}
Time::Time(int hour, int min, int sec) {
	m_sec = hour * 3600 + min * 60 + sec;
	m_hour = m_sec / 3600;
	m_sec = m_sec % 3600;
	m_min = m_sec / 60;
	m_sec = m_sec % 60;
}