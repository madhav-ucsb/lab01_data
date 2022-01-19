// name(s) and Perm 
// This is the only file to submit.

#include "car.hpp"
#include <cstddef>
#include <cstring>
#include <iostream>

using namespace std;


// #include .......
#include<string>
Car :: Car()
{
  manufacturer , model = NULL , NULL;
  zeroToSixtyNs = 0;
  headonDragCoeff = 0;
  horsepower = 0;
  seatCount = 0;
  backseatDoors = None;
  
  

  
}
uint8_t Car::getSeatCount() const
{
  return seatCount;
}
Car:: Car(char const* const manufacturerName, char const*  const modelName, PerformanceStats perf, uint8_t numSeats, DoorKind backseatDoorDesign)
{
  manufacturer=new char[strlen(manufacturerName)+1];
  
  strcpy(manufacturer, manufacturerName );

  model = new char[strlen(modelName) + 1];
  strcpy(model, modelName);
  zeroToSixtyNs = perf.zeroToSixtyNs;
  headonDragCoeff = perf.headonDragCoeff;

  horsepower = perf.horsepower;

  seatCount = numSeats;

  backseatDoors = backseatDoorDesign;
  

  

  
}

Car::Car(Car const& o)
{
  manufacturer= o.manufacturer;
  model = o.model;
  zeroToSixtyNs = o.zeroToSixtyNs;
  headonDragCoeff = o.headonDragCoeff;

  horsepower = o.horsepower;

  seatCount = o.seatCount;
  backseatDoors = o.backseatDoors;
}
Car& Car::operator=(Car const& o)
{
  manufacturer= o.manufacturer;
  model = o.model;
  zeroToSixtyNs = o.zeroToSixtyNs;
  headonDragCoeff = o.headonDragCoeff;

  horsepower = o.horsepower;

  seatCount = o.seatCount;
  backseatDoors = o.backseatDoors;
}
Car:: ~Car()
{
  delete [] manufacturer;
  delete[] model;

  //delete [] manufacturer;
  //delete [] model;
}
char const* Car::getManufacturer() const
{
  return manufacturer;
}
char const* Car::getModel() const
{
  return model;
}
PerformanceStats Car::getStats() const
{
  return PerformanceStats(horsepower,zeroToSixtyNs, headonDragCoeff);
}
DoorKind Car::getBackseatDoors() const
{
  return backseatDoors;
}
void Car::manufacturerChange(char const* const newManufacturer)
{
  manufacturer = new char[strlen(newManufacturer) + 1];
  strcpy(manufacturer, newManufacturer);
}
void Car::modelNameChange(char const* const newModelName)
{
  model = new char[strlen(newModelName) + 1];

  strcpy(model, newModelName);


}
void Car::reevaluateStats(PerformanceStats newStats)
{
  horsepower = newStats.horsepower;
  headonDragCoeff = newStats.headonDragCoeff;
  zeroToSixtyNs = newStats.zeroToSixtyNs;
}
void Car::recountSeats(uint8_t newSeatCount)
{
  seatCount = newSeatCount;
}
void Car::reexamineDoors(DoorKind newDoorKind)
{
  backseatDoors = newDoorKind;
}



/*


int main(int argc, char const *argv[])
{

  Car b;

  cout<<b.getSeatCount() + 1<<endl;
  

  PerformanceStats perf = PerformanceStats(30, 60, 30);

  Car c = Car("tesla","red" , perf, 30,Hinge );

  int seat_c = (int) c.getSeatCount();
  cout<<seat_c<<endl;

  Car d = Car(c);

  int seat_d = (int) d.getSeatCount();
  cout<<seat_d<<endl;
  
  

  Car e = d;

  int seat_e = (int) e.getSeatCount();

  cout<<seat_e<<endl;
  
  PerformanceStats perf_e = e.getStats();

  string s = (string) e.getManufacturer();

  cout<<s<<endl;

  e.manufacturerChange("toyota");

  string manu = (string) e.getManufacturer();
  cout<<manu<<endl;
  string manu1 = (string) c.getManufacturer();
  cout<<manu1<<endl;

  c.recountSeats(2);
  seat_c = (int) c.getSeatCount();

  cout<<seat_c<<endl;


  
  

  
}
*/

