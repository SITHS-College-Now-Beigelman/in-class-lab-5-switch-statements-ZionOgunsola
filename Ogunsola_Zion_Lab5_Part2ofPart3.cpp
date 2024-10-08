 //Zion Ogunsola
//Lab 5
//10/8/2024

#include <iostream> //Includes iostream
#include <iomanip>  //Includes string
#include <cstdlib>
#include <ctime>
using namespace std; 

int main () //Begins function
{
    srand(time(0));
     int northernCoordinate = 0;
        int southernCoordinate = 0;
        int easternCoordinate = 0;
 
 

 for(int i = 0; (northernCoordinate != 3 || easternCoordinate != 2); i++)
    {
         int direct;
        direct = rand() % 4 + 1; //random number between 1 and 4 so each is 25% //probable
        //1 means North, 2 means South, 3 means East and 4 means West
    
    switch (direct)
    {
         case 1:
                northernCoordinate += 1;
                cout << "The robot is " << northernCoordinate << " block north away from the starting point" << endl;
                break;
         case 2:
               northernCoordinate -= 1;
                cout << "The robot is " << northernCoordinate <<  " block north away from the starting point" << endl;
                break;
        case 3:
                easternCoordinate += 1;
                cout << "The robot is " << easternCoordinate << " block east away from the starting point" << endl;
                break;
         case 4:
                easternCoordinate -= 1;
                cout << "The robot is " << easternCoordinate << " block east away from the starting point" << endl;
                break;
    } 

    
    }
         



    return 0;

}