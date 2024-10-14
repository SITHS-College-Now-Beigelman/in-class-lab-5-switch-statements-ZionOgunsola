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
    srand(time(0)); //Set a new seed based on the current time 
    int northernCoordinate = 0; //Declares variable
    int southernCoordinate = 0; //Declares variable
    int easternCoordinate = 0; //Declares variable
    int westernCoordinate = 0; //Declares variable
 
   
   for( int i =1; i <=25; i++) //Sets condition for for statement
    
    {
        
        int direct; //Declares variable
        direct = rand() % 4 + 1; //random number between 1 and 4 so each is 25% //probable 
        //1 means North, 2 means South, 3 means East and 4 means West

      


        switch (direct) //Beins switch structure
        {
            case 1: //Case when direct is 1
                northernCoordinate += 1; //Adds 1 to variable
                cout << "The robot is " << northernCoordinate << " block north away from the starting point" << endl; //Prints out distance of object from startin point in cardinal direction for this case
                break;
           
            case 2: //Case when direct is 2
                southernCoordinate += 1; //Adds 1 to variable
                cout << "The robot is " << southernCoordinate <<  " block south away from the starting point" << endl; //Prints out distance of object from startin point in cardinal direction for this case
                break;
           
            case 3: //Case when direct is 3
                easternCoordinate += 1; //Adds 1 to variable
                cout << "The robot is " << easternCoordinate << " block east away from the starting point" << endl; //Prints out distance of object from startin point in cardinal direction for this case
                break;
            
            case 4: //Case when direct is 4
                westernCoordinate += 1; //Adds 1 to variable
                cout << "The robot is " << westernCoordinate << " block west away from the starting point" << endl; //Prints out distance of object from startin point in cardinal direction for this case
                break;
        }

    }

    return 0; //Returns function

}
/*
The robot is 1 block west away from the starting point
The robot is 2 block west away from the starting point
The robot is 1 block south away from the starting point
The robot is 3 block west away from the starting point
The robot is 1 block east away from the starting point
The robot is 2 block south away from the starting point
The robot is 2 block east away from the starting point
The robot is 4 block west away from the starting point
The robot is 1 block north away from the starting point
The robot is 3 block east away from the starting point
The robot is 4 block east away from the starting point
The robot is 5 block east away from the starting point
The robot is 5 block west away from the starting point
The robot is 6 block east away from the starting point
The robot is 7 block east away from the starting point
The robot is 3 block south away from the starting point
The robot is 4 block south away from the starting point
The robot is 8 block east away from the starting point
The robot is 9 block east away from the starting point
The robot is 10 block east away from the starting point
The robot is 2 block north away from the starting point
The robot is 11 block east away from the starting point
The robot is 6 block west away from the starting point
The robot is 3 block north away from the starting point
The robot is 4 block north away from the starting point
*/
