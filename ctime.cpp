#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ctime.h"

CTime::CTime()
{
   time_t timer;
   struct tm*timeinfo;

  time(&timer);
  timeinfo = localtime(&timer);
  this->hour=timeinfo->tm_hour; // hour    0-59
  this->minute=timeinfo->tm_min;// minutes 0-59
  this->second=timeinfo->tm_sec;// seconds 0-23
}

CTime::CTime (int hour, int minute, int second)
{
  this->hour =hour;
  this->minute =minute;
  this->second =second;
}

void CTime::print()
{ //       HH : MM : SS
  printf("%02d:%02d:%02d", this->hour, this->minute, this->second);
}
