#include <iostream>
#include <string>
#include <math.h>

#include "BMI.h"

using namespace std;

int main(){
    string name;
    double height;
    double weight;
    
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your height (in cms): ";
    cin >> height;
    cout << "Enter your weight (in kgs): ";
    cin >> weight;
    
    BMI Student;
    Student.setAll(name, height, weight);
    Student.ToString();
    
    
    
//     BMI Student_1(name, height, weight);
//     
//     cout << endl << "Object name: " << Student_1.getName() << endl << 
//     "Height: " << Student_1.getHeight() << endl <<
//     "Weight: " << Student_1.getWeight() << endl << "BMI: " << Student_1.calculatorBMI() << endl;
//     
//     cout << endl;
//     
//     cout << "Enter your name: ";
//     cin >> name;
//     cout << "Enter your height (in cms): ";
//     cin >> height;
//     cout << "Enter your weight (in kgs): ";
//     cin >> weight;
//     
//     
//     BMI Student_2;
//     Student_2.setName(name);
//     Student_2.setHeight(height);
//     Student_2.setWeight(weight);
//     cout << endl << "Object name: " << Student_2.getName() << endl << 
//     "Height: " << Student_2.getHeight() << endl <<
//     "Weight: " << Student_2.getWeight() << endl <<
//     "BMI: " << Student_2.calculatorBMI() << endl;
//     
//     cout << endl;
//     
//     cout << "Enter your name: ";
//     cin >> name;
//     cout << "Enter your height (in m): ";
//     cin >> height;
//     cout << "Enter your weight (in kgs): ";
//     cin >> weight;
//     
//     BMI Student_3(name, height, weight);
//     Student_3.ToString();
    
    
    return 0;
    
}
