#ifndef _CAR_H
#define _CAR_H
#include <string>
#include <iostream>
using namespace std;

class Car{
    string brand;
    string engine;
    string carName;
    string color;
    string type;
    int price;
public:
    Car(string brand="", string engine="", string carName="", 
    string color="",string type="", int price=0){
        this->brand = brand;
        this->engine = engine;
        this->carName = carName;
        this->color = color;
        this->type =type;
        this->price = price;
    }
    string getBrand(){return brand;}
    string getEngine(){return engine;}
    string getCarName(){return carName;}
    string getColor(){return color;}
    string getType(){return type;}
    int getPrice(){return price;}
};
#endif
