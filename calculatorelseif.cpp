#include <iostream>
using namespace std;

/* Build a calculator: 
Prompt the user to Enter two numbers 
Choose an operation to perform 
Output the operation performed and the result */


/*int add(int x, int y)
{
    int z = x + y;
}
int subtract(int x, int y)
{
    int z = x - y;
}
int multiply(int x, int y)
{
    int z = x * y;
}
int divide(int x, int y)
{
    int z = x / y;
}*/

int main()
{
    double operation, x,y,z;

    cout<<"Which calculation would you like?\n" << "1. Addition\n" <<"2. Subtraction\n"<<"3.Multiplication\n"<<"4.Division\n";
    cin>>operation;

    if(operation == 1)
    {
        cout<<"Enter the first integer:";
        cin>>x;
        cout<<"Enter the second integer:";
        cin>>y;
        z=x+y;
        cout<<"Ans = "<<z;
    }

    else if(operation == 2)
    {
        cout<<"Enter the first integer:";
        cin>>x;
        cout<<"Enter the second integer:";
        cin>>y;
        z=x-y;
        cout<<"Ans = "<<z;
    }
    else if(operation == 3)
    {
        cout<<"Enter the first integer:";
        cin>>x;
        cout<<"Enter the second integer:";
        cin>>y;
        z=x*y;
        cout<<"Ans = "<<z;
    }
    else if(operation == 4)
    {
        cout<<"Enter the first integer:";
        cin>>x;
        cout<<"Enter the second integer:";
        cin>>y;
        z=x/y;
        cout<<"Ans = "<<z;
    }
    else
    {
        cout<<"Invalid Choice!";
    }
    
    return 0;

}