 //Zion Ogunsola
//Lab 5
//10/8/2024

#include <iostream> //Includes iostream
#include <iomanip>  //Includes string
#include <cstdlib> //Includes cstdlib
#include <ctime> //Includes ctime
using namespace std; 

int main () //Begins function
{
    srand(time(0)); //Set a new seed based on the current time 
     int northernCoordinate = 0; //Declares variable
     int easternCoordinate = 0; //Declares variable
 
 

 for(int i = 0;i < 100  ; i++) //Sets condition for for statement
    {
        int direct; //Declares variable
        direct = rand() % 4 + 1; //random number between 1 and 4 so each is 25% //probable
        //1 means North, 2 means South, 3 means East and 4 means West
    
    switch (direct)
    {
         case 1: //Case when direct is 1
               { 
                northernCoordinate += 1; //Adds 1 to variable
                cout << "The robot is " << northernCoordinate << " block north away from the starting point" << endl; //Outputs statement
                break;
               }
         case 2: //Case when direct is 1
               {
                northernCoordinate -= 1; //Subtracts one from variable
                cout << "The robot is " << northernCoordinate <<  " block north away from the starting point" << endl; //Outputs statement
                break;
               }
        case 3: //Case when direct is 1
               {
                easternCoordinate += 1; //Adds 1 to variable
                cout << "The robot is " << easternCoordinate << " block east away from the starting point" << endl; //Outputs statement
                break;
               }
         case 4: //Case when direct is 1
               {
                easternCoordinate -= 1; //Subtracts one from variable
                cout << "The robot is " << easternCoordinate << " block east away from the starting point" << endl; //Outputs statement
                break;
               }
                
                
    } 
    
    if(northernCoordinate == 3 && easternCoordinate == 2) //Sets iF condition
    {
        cout << "It took " << i+1 << "steps for the robot to reach 2 blocks to the east and 3 blocks to the north of the starting point" <<endl; //Outputs Statement
        return 0; //Returns function if condition is met
    }
    
        
    }
         
   cout  << "The robot did not reach 2 blocks to the east and 3 blocks to the north of the starting point " << endl; //Ou tputs statement
       
    
    return 0; //returns function

}

/*
The robot is 1 block north away from the starting point
The robot is 1 block east away from the starting point
The robot is 2 block east away from the starting point
The robot is 0 block north away from the starting point
The robot is 1 block east away from the starting point
The robot is 2 block east away from the starting point
The robot is 3 block east away from the starting point
The robot is 4 block east away from the starting point
The robot is 5 block east away from the starting point
The robot is 4 block east away from the starting point
The robot is 3 block east away from the starting point
The robot is 2 block east away from the starting point
The robot is -1 block north away from the starting point
The robot is -2 block north away from the starting point
The robot is 1 block east away from the starting point
The robot is -1 block north away from the starting point
The robot is 2 block east away from the starting point
The robot is 1 block east away from the starting point
The robot is 0 block east away from the starting point
The robot is 0 block north away from the starting point
The robot is -1 block north away from the starting point
The robot is -2 block north away from the starting point
The robot is -1 block north away from the starting point
The robot is -2 block north away from the starting point
The robot is -1 block north away from the starting point
The robot is -1 block east away from the starting point
The robot is 0 block north away from the starting point
The robot is -2 block east away from the starting point
The robot is -1 block east away from the starting point
The robot is -2 block east away from the starting point
The robot is -1 block north away from the starting point
The robot is -1 block east away from the starting point
The robot is -2 block north away from the starting point
The robot is -2 block east away from the starting point
The robot is -3 block east away from the starting point
The robot is -3 block north away from the starting point
The robot is -2 block east away from the starting point
The robot is -1 block east away from the starting point
The robot is -2 block east away from the starting point
The robot is -2 block north away from the starting point
The robot is -3 block north away from the starting point
The robot is -1 block east away from the starting point
The robot is -2 block north away from the starting point
The robot is 0 block east away from the starting point
The robot is -1 block east away from the starting point
The robot is -2 block east away from the starting point
The robot is -1 block east away from the starting point
The robot is 0 block east away from the starting point
The robot is 1 block east away from the starting point
The robot is -3 block north away from the starting point
The robot is 2 block east away from the starting point
The robot is 1 block east away from the starting point
The robot is 2 block east away from the starting point
The robot is 1 block east away from the starting point
The robot is -2 block north away from the starting point
The robot is 0 block east away from the starting point
The robot is 1 block east away from the starting point
The robot is -3 block north away from the starting point
The robot is 2 block east away from the starting point
The robot is -2 block north away from the starting point
The robot is -1 block north away from the starting point
The robot is 1 block east away from the starting point
The robot is 0 block east away from the starting point
The robot is -2 block north away from the starting point
The robot is -1 block east away from the starting point
The robot is 0 block east away from the starting point
The robot is 1 block east away from the starting point
The robot is -3 block north away from the starting point
The robot is -2 block north away from the starting point
The robot is -3 block north away from the starting point
The robot is -4 block north away from the starting point
The robot is -5 block north away from the starting point
The robot is 0 block east away from the starting point
The robot is -6 block north away from the starting point
The robot is -1 block east away from the starting point
The robot is -2 block east away from the starting point
The robot is -5 block north away from the starting point
The robot is -6 block north away from the starting point
The robot is -7 block north away from the starting point
The robot is -1 block east away from the starting point
The robot is -2 block east away from the starting point
The robot is -3 block east away from the starting point
The robot is -8 block north away from the starting point
The robot is -9 block north away from the starting point
The robot is -2 block east away from the starting point
The robot is -1 block east away from the starting point
The robot is -8 block north away from the starting point
The robot is -9 block north away from the starting point
The robot is -2 block east away from the starting point
The robot is -1 block east away from the starting point
The robot is -10 block north away from the starting point
The robot is -2 block east away from the starting point
The robot is -1 block east away from the starting point
The robot is -9 block north away from the starting point
The robot is -8 block north away from the starting point
The robot is -9 block north away from the starting point
The robot is -2 block east away from the starting point
The robot is -3 block east away from the starting point
The robot is -2 block east away from the starting point
The robot is -3 block east away from the starting point
The robot did not reach 2 blocks to the east and 3 blocks to the north of the starting point 
*/

 
 