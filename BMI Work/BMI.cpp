#include <iostream>

using namespace std;

/* Assignment 1 
Build a BMI Calculator where: 
The User inputs their height and weight, store both of them in their variables. 
Calculator the BMI of the user (confirm formula online) and then based on the users  
BMI, output either "underweight, average, overweight, obese". */

int main ()
{
    float height, weight,BMI;
    
    /*cout << "Enter your weight in kilograms\n";
    cin >>weight;

    cout << "Enter your height in metres\n";
    cin >>height;
    
    BMI = weight/(height * height);
    cout << BMI<< "\n";*/
BMI = 23;
    if (BMI < 18.5)
    {
        cout<<"Underweight";
    }
    else if (BMI < 25)
    {
        cout<<"Normal";
    }
    else if (BMI < 31)
    {
        cout<<"Overweight";
    }
    else 
    {
        cout<<"Obese";
    }
    //return 0;
}

 

