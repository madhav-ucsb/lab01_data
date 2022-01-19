#include "car.hpp"
#include <cstddef>
#include <cstring>
#include <iostream>

using namespace std;

#include ""
#include "car.hpp"
#include <cstddef>
#include <cstring>
#include <iostream>

using namespace std;


// #include .......
#include<string>


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