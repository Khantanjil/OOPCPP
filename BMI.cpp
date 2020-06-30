// header ==> function definition
#include "BMI.h"

BMI::BMI()
{
    newheight = 0;
    newweight = 0.0;
    
}

BMI::BMI(string name, double height, double weight){
    newname = name;
    newheight = height;
    newweight = weight;
}

BMI::~BMI(){
    
}

string BMI::getName() const {
    return newname;
}

double BMI::getHeight() const {
    return newheight;
}

double BMI::getWeight() const
{
    return newweight;
}

void BMI::setName(string name){
    newname = name;
}

void BMI::setHeight(double height){
    newheight = height;
}

void BMI::setWeight(double weight){
    newweight = weight;
}

double BMI::calculatorBMI(){
    return (newweight / (newheight*newheight));
}

void BMI::ToString(){
    std::cout << "Name: " << newname << endl << "Height: " << newheight << endl <<
    "Weight: " << newweight << endl << "BMI: " << this->calculatorBMI() << endl;
}

void BMI::setAll(string name, double height, double weight){
    newname = name;
    newheight = height;
    newweight = weight;
}
