#ifndef CTIME_H
#define CTIME_H


class CTime
{
  private:
   int hour, minute, second;

  public:
  CTime();
  CTime(int,int,int);

  void setTime(int,int,int);
  void sethour(int);
  void setminute(int);
  void setsecond(int);
  void print();
};





#endif // CTIME_H
