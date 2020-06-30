// header ==> function Declaration
#include <iostream>
#include <string>


using namespace std;

#ifndef BMI_H
#define BMI_H

class BMI{
public:
    // Default Constructor
    BMI();
    
    // Overload Constructor
    BMI(string, double, double);
    
    // Deconstructor
    ~BMI();
    
    // Acessor functions
    string getName() const;
        //getName - returns name of the object
    double getHeight() const;
        //getHeight returns height of the object
    double getWeight() const;
        //getWeight returns weight of the object
    
    // Mutator Functions
    void setName(string);
        // setName - sets name of the object
    void setHeight(double);
        // setHeight - sets height of the object
    void setWeight(double);
        // setWeight - sets weight of the object
    
    double calculatorBMI();
        // calculatorBMI - calculates BMI of the object
    void ToString();
    void setAll(string, double, double);
    
private:
    // Member variables
    string newname;
    double newheight;
    double newweight;
    
};

#endif
