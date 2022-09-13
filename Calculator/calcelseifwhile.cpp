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
    int exit=0;

    
    while (exit!=1)
    {
        cout<<"Which calculation would you like?\n" << "1. Addition\n" <<"2. Subtraction\n"<<"3.Multiplication\n"<<"4.Division\n";
        cin>>operation;
        cout<<"Enter the first integer:";
        cin>>x;
        cout<<"Enter the second integer:";
        cin>>y;

       if(operation == 1)
    {
        z=x+y;
        cout<<"Ans = "<<z;
    }

    else if(operation == 2)
    {
        z=x-y;
        cout<<"Ans = "<<z;
    }
    else if(operation == 3)
    {
        z=x*y;
        cout<<"Ans = "<<z;
    }
    else if(operation == 4)
    {
        z=x/y;
        cout<<"Ans = "<<z;
    }
    else
    {
        cout<<"Invalid Choice!";
    } 
    cout<<"\nEnter 1 to exit or another number to continue\n";
    cin>>exit;

    }
    return 0;

}