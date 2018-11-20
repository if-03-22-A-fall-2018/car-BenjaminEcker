/*----------------------------------------------------------
*				HTBLA-Leonding / Klasse: <your class>
* ---------------------------------------------------------
* Exercise Number: 0
* Title:			car.cpp
* Author:			P. Bauer
* Due Date:		January 9, 2015
* ----------------------------------------------------------
* Description:
* Car abstract data type demo.
* ----------------------------------------------------------
*/
#include "car.h"

struct CarImplementation
{
  enum CarType type;
  enum CarColor color;
  double fill_level;
  double acc_rate;
  int speed;
};
Car get_car(enum CarType)
{
  return 0;
}
enum CarType get_type(Car car)
{
  return JEEP;
}
enum CarColor get_color(Car car)
{
  return BLACK;
}
double get_fill_level(Car car)
{
   return 0;
}
double get_acceleration_rate(Car car)
{
  return 0;
}
int get_speed(Car car)
{
  return 0;
}
void set_acceleration_rate(Car car, double acceleration)
{

}
void init()
{

}
void accelerate(Car car)
{

}
