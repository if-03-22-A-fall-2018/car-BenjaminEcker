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
#define CARCOUNT 6

struct CarImplementation
{
  enum CarType type;
  enum CarColor color;
  double fill_level;
  double acc_rate;
  int speed;
  bool is_rented;
};

static struct CarImplementation multipla1{FIAT_MULTIPLA,GREEN,65.0,0.0,0,false};
static struct CarImplementation multipla2{FIAT_MULTIPLA,BLUE,65.0,0.0,0,false};
static struct CarImplementation multipla3{FIAT_MULTIPLA,ORANGE,65.0,0.0,0,false};
static struct CarImplementation aixam{AIXAM,RED,16.0,0.0,0,false};
static struct CarImplementation jeep1{JEEP,SILVER,80.0,0.0,0,false};
static struct CarImplementation jeep2{JEEP,BLACK,80.0,0.0,0,false};

Car car_park[]={&aixam,&multipla1,&multipla2,&multipla3,&jeep1,&jeep2};

Car get_car(enum CarType type)
{
  for(int i=0; i<CARCOUNT;i++)
  {
    if(car_park[i] -> type == type)
    {
      if(car_park[i] -> is_rented ==false)
      {
        car_park[i]->is_rented=true;
        return car_park[i];
      }
    }
  }
  return 0;
}
enum CarType get_type(Car car)
{
  return car -> type;
}
enum CarColor get_color(Car car)
{
  return car -> color;
}
double get_fill_level(Car car)
{
   return car -> fill_level;
}
double get_acceleration_rate(Car car)
{
  return car -> acc_rate;
}
int get_speed(Car car)
{
  return car -> speed;
}
void set_acceleration_rate(Car car, double acceleration)
{
  if(acceleration > 1,0 && car -> type == AIXAM)
  {
    acceleration=1.0;
    car -> acc_rate = acceleration;
  }
  else if(acceleration > 2.26 && car -> type == FIAT_MULTIPLA)
  {
    acceleration=2.26;
    car -> acc_rate = acceleration;
  }
  else if(acceleration > 3.14 && car -> type == JEEP)
  {
    acceleration=3.14;
    car -> acc_rate = acceleration;
  }
  if(acceleration < -8.0)
  {
    acceleration=-8.0;
    car -> acc_rate = acceleration;
  }
  else
  {
    car -> acc_rate = acceleration;
  }
}
void init()
{
  for(int i=0;i<CARCOUNT;i++)
  {
    car_park[i] -> is_rented=false;
    car_park[i] -> acc_rate=0;
    car_park[i] -> speed=0;
  }
}
void accelerate(Car car)
{
  double speed = car -> speed;
  speed = speed / 3.6;
  speed = car -> acc_rate * speed;
  speed = speed * 3.6;
  car -> speed = round(speed);

}
int round(double n)
{
  if (n-(int)(n) >= 0.5)
    return (int)(n+1);
  else
    return (int)(n);
}
