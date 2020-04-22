#ifndef CLASS_H_INCLUDED
#define CLASS_H_INCLUDED
#include<cstring>
#include <iostream>
#include <math.h>
using namespace std;

class Vehicle
{
  protected:
    int number_of_seats;
    int speed;
  public:
    Vehicle();
    Vehicle(int number_of_seats, int speed);
    Vehicle(Vehicle &v);
     ~Vehicle();
     virtual void print() =0;

};

 class Car : public Vehicle
 {
     protected:
     char *brand;
     public:
      Car();
      Car(int number_of_seats, int speed, char *brand);
      ~Car();
      Car(Car &c);
     virtual void print() =0;
 };

 class Passenger_car : public Car
 {
  public:
      Passenger_car();
      Passenger_car(int number_of_seats, int speed, char *brand);
      ~Passenger_car();
      Passenger_car(Passenger_car &pc);
      void print() ;
 };

 class Bus : public Car
 {
  public:
      Bus();
      Bus(int number_of_seats, int speed, char *brand);
      ~Bus();
      Bus(Bus &b);
      void print()  ;
 };

 class Plane : public Car
 {
   protected:
      int flight_hours;
   public:
      Plane();
      Plane(int number_of_seats, int speed, char *brand, int flight_hours);
      ~Plane();
      Plane(Plane &pl);
      void print() ;
 };

 class Ship : public Car
 {
  protected:
  int displacement;
  public:
      Ship();
      Ship(int number_of_seats, int speed, char *brand, int displacement);
      ~Ship();
      Ship(Ship &s);
      void print() ;
 };

 class Manager
 {
 public:
    void print(Vehicle *vehicle);
 }; //"Проверка работы"//
#endif // CLASS_H_INCLUDED
