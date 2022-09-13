#include <iostream>
using namespace std;


int main()
{
    int operation;
    double x,y,z;
    int exit=0;

    

    while(exit!=1)
    {
        cout<<"Which calculation would you like?\n" << "1. Addition\n" <<"2. Subtraction\n"<<"3.Multiplication\n"<<"4.Division\n";
        cin>>operation;
        //cout<<"operand";
        cout<<"Enter the first integer:";
        cin>>x;
        cout<<"\nEnter the second integer:";
        cin>>y;
      switch(operation) 
    {
        case 1 :
            z=x+y;
            cout<<"Ans = "<<z;

        break;

        case 2 :
            z=x-y;
            cout<<"Ans = "<<z;
        break;

        case 3 :
            z=x*y;
            cout<<"Ans = "<<z;
        break;

        case 4 :
            cin>>y;
            z=x/y;
            cout<<"Ans = "<<z;
        break;

    
        default:
            cout<<"Invalid Choice!";
    }
        cout<<"Enter 1 to exit or another number to continue";
        cin>>exit;
    }
     
    return 0;

}