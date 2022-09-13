#include <iostream>

using namespace std;



int main ()
{
    float height, weight,BMI;
    int exit=0;
    while(exit!=1)
    {
    cout << "Enter your weight in kilograms\n";
    cin >>weight;

    cout << "Enter your height in metres\n";
    cin >>height;
    
    BMI = weight/(height * height);
    cout << BMI<< "\n";

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
    cout<<"\nEnter 1 to exit or another number to continue\n";
    cin>>exit;
    }
    
    //return 0;
}

 

