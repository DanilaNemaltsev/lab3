#include "class.h"

//Vehicle//

Vehicle::Vehicle():Vehicle(0,0){}

Vehicle::Vehicle(int number_of_seats, int speed)
{
   if (number_of_seats>0){this->number_of_seats = number_of_seats;}
   if (speed>0){this->speed = speed;}
}

Vehicle::Vehicle(Vehicle &v):Vehicle(v.number_of_seats,v.speed){}
Vehicle::~Vehicle(){}

//Car//

Car::Car():Car(0,0,"brand"){};

Car::Car(int number_of_seats, int speed, char *brand)
{
    if (number_of_seats>0){this->number_of_seats = number_of_seats;}
    if (speed>0){this->speed = speed;}
    delete[] this->brand;
    int len = strlen(brand)+1;
    this ->brand = new char [len];
    strcpy(this->brand, brand);
}

Car::~Car()
{
    delete [] brand;
}

Car::Car(Car &c):Car(c.number_of_seats,c.speed,c.brand){}

//Passenger_car//

Passenger_car::Passenger_car():Passenger_car(0,0,"brand"){};

Passenger_car::Passenger_car(int number_of_seats, int speed, char *brand)
{
    if (number_of_seats>=0){this->number_of_seats = number_of_seats;}
    if (speed>=0){this->speed = speed;}
    delete[] this->brand;
    int len = strlen(brand)+1;
    this ->brand = new char [len];
    strcpy(this->brand, brand);
}

Passenger_car::~Passenger_car()
{
    delete [] brand;
}

Passenger_car::Passenger_car(Passenger_car &pc):Passenger_car(pc.number_of_seats,pc.speed,pc.brand){}

void Passenger_car:: print()
{
    std::cout<<"number_of_seats - "<< number_of_seats <<", ";
    std::cout<<"speed - "<< speed <<", ";
    std::cout<<"brand - "<< brand <<"\n";
}

//Bus//

Bus::Bus():Bus(0,0,"brand"){};

Bus::Bus(int number_of_seats, int speed, char *brand)
{
    if (number_of_seats>=0){this->number_of_seats = number_of_seats;}
    if (speed>=0){this->speed = speed;}
    delete[] this->brand;
    int len = strlen(brand)+1;
    this ->brand = new char [len];
    strcpy(this->brand, brand);
}

Bus::~Bus()
{
    delete [] brand;
}

Bus::Bus(Bus &b):Bus(b.number_of_seats,b.speed,b.brand){}

void Bus:: print()
{
    std::cout<<"number_of_seats - "<< number_of_seats <<", ";
    std::cout<<"speed - "<< speed <<", ";
    std::cout<<"brand - "<< brand <<"\n";
}

//Plane//

Plane::Plane():Plane(0,0,"brand",0){};

Plane::Plane(int number_of_seats, int speed, char *brand, int flight_hours)
{
    if (number_of_seats>=0){this->number_of_seats = number_of_seats;}
    if (speed>=0){this->speed = speed;}
    delete[] this->brand;
    int len = strlen(brand)+1;
    this ->brand = new char [len];
    strcpy(this->brand, brand);
    if (flight_hours>=0){this->flight_hours = flight_hours;}
}

Plane::~Plane()
{
    delete [] brand;
}

Plane::Plane(Plane &pl):Plane(pl.number_of_seats,pl.speed,pl.brand,pl.flight_hours){}


void Plane:: print()
{
    std::cout<<"number_of_seats - "<< number_of_seats <<", ";
    std::cout<<"speed - "<< speed <<", ";
    std::cout<<"brand - "<< brand <<",";
    std::cout<<"flight_hours - "<< flight_hours <<"\n ";
}

//Ship//

Ship::Ship():Ship(0,0,"brand",0){};

Ship::Ship(int number_of_seats, int speed, char *brand, int displacement)
{
    if (number_of_seats>=0){this->number_of_seats = number_of_seats;}
    if (speed>=0){this->speed = speed;}
    delete[] this->brand;
    int len = strlen(brand)+1;
    this ->brand = new char [len];
    strcpy(this->brand, brand);
    if (displacement>=0){this->displacement = displacement;}
}

Ship::~Ship()
{
    delete [] brand;
}

Ship::Ship(Ship &s):Ship(s.number_of_seats,s.speed,s.brand,s.displacement){}

void Ship:: print()
{
    std::cout<<"number_of_seats - "<< number_of_seats <<", ";
    std::cout<<"speed - "<< speed <<", ";
    std::cout<<"brand - "<< brand <<",";
    std::cout<<"displacement - "<< displacement <<"\n ";
}

void Manager:: print(Vehicle *vehicle)
{
    vehicle->print();
}
