//2021 season
#include <iostream>
using namespace std;

/*int main()
{   int exit;
    int x; //starting range
    int y; //ending range
    
    cout<<"Hello Formula 1 fan :). Hope you're ready to discover the drivers' numbers in 2021 Season\n\n";
    
    while(exit!=1)

    {
    
    cout<<"Enter your prefered starting range digit with 0 being the least number you can input:\n";
    cin>>x;
    cout<<"Enter your prefered ending range digit with 100 being the highest number you can input:\n";
    cin>>y;

    for (int i = x; i <= y; i++)
    {
        if (i==3){
            cout<<i<<"   Daniel Ricciardo\n";
        }

        else if (i==4){
            cout<<i<<"   Lando Norris\n";
        }

        else if (i==5){
            cout<<i<<"   Sebastian Vettel\n";
        }

        else if (i==6){
            cout<<i<<"   Nicholas Latifi\n";
        }

        else if (i==7){
            cout<<i<<"   Kimi Raikkonen\n";
        }

        else if (i==9){
            cout<<i<<"   Nikita Mazepin\n";
        }

        else if (i==10){
            cout<<i<<"  Pierre Gasly\n";
        }

        else if (i==11){
            cout<<i<<"  Sergio Perez\n";
        }

        else if (i==14){
            cout<<i<<"  Fernando Alonso\n";
        }

        else if (i==16){
            cout<<i<<"  Charles Leclerc\n";
        }

        else if (i==18){
            cout<<i<<"  Lance Stroll\n";
        }

        else if (i==22){
            cout<<i<<"  Yuki Tsunoda\n";
        }

        else if (i==31){
            cout<<i<<"  Estaban Ocon\n";
        }

        else if (i==33){
            cout<<i<<"  Max Verstappen\n";
        }

        else if (i==44){
            cout<<i<<"  Lewis Hamilton_Goat\n";
        }

        else if (i==47){
            cout<<i<<"  Mick Schumacher\n";
        }

        else if (i==55){
            cout<<i<<"  Carlos Sainz\n";
        }

        else if (i==63){
            cout<<i<<"  George Russel\n";
        }

        else if (i==77){
            cout<<i<<"  Valtteri Bottas\n";
        }

        else if (i==99){
            cout<<i<<"  Antonio Giovinazzi\n";
        }

        else{
            cout<<i<<"\n";
        }
    }
        cout<<"\nThank you for your partcipation\n"<<"Enter 1 to exit or another number to continue\n";
        cin>>exit;
    }   
}*/

int main()
{
    int exit;
    int x; //starting range
    int y; //ending range
    int i;
    cout<<"Hello Formula 1 fan :). Hope you're ready to discover the drivers' numbers in 2021 Season\n\n";
    

    while (exit!=1)
    {
    cout<<"Enter your prefered starting range digit with 0 being the least number you can input:\n";
    cin>>x;
    cout<<"Enter your prefered ending range digit with 100 being the highest number you can input:\n";
    cin>>y;

        while ( i!=y && i>=x)
    {  
        if (i==3){
            cout<<i<<"   Daniel Ricciardo\n";
        }
       
        else if (i==4){
            cout<<i<<"   Lando Norris\n";
        }

        else if (i==5){
            cout<<i<<"   Sebastian Vettel\n";
        }

        else if (i==6){
            cout<<i<<"   Nicholas Latifi\n";
        }

        else if (i==7){
            cout<<i<<"   Kimi Raikkonen\n";
        }

        else if (i==9){
            cout<<i<<"   Nikita Mazepin\n";
        }

        else if (i==10){
            cout<<i<<"  Pierre Gasly\n";
        }

        else if (i==11){
            cout<<i<<"  Sergio Perez\n";
        }

        else if (i==14){
            cout<<i<<"  Fernando Alonso\n";
        }

        else if (i==16){
            cout<<i<<"  Charles Leclerc\n";
        }

        else if (i==18){
            cout<<i<<"  Lance Stroll\n";
        }

        else if (i==22){
            cout<<i<<"  Yuki Tsunoda\n";
        }

        else if (i==31){
            cout<<i<<"  Estaban Ocon\n";
        }

        else if (i==33){
            cout<<i<<"  Max Verstappen\n";
        }

        else if (i==44){
            cout<<i<<"  Lewis Hamilton_Goat\n";
        }

        else if (i==47){
            cout<<i<<"  Mick Schumacher\n";
        }

        else if (i==55){
            cout<<i<<"  Carlos Sainz\n";
        }

        else if (i==63){
            cout<<i<<"  George Russel\n";
        }

        else if (i==77){
            cout<<i<<"  Valtteri Bottas\n";
        }

        else if (i==99){
            cout<<i<<"  Antonio Giovinazzi\n";
        }

        else{
            cout<<i<<"\n";
        }
        i++;
    }
        cout<<"\nThank you for your partcipation\n"<<"Enter 1 to exit or another number to continue";
        cin>>exit;
    }
    
}