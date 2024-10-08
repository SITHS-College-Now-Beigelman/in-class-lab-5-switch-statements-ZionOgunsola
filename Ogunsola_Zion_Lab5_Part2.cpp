//Zion Ogunsola
//Lab 5
//10/8/2024

#include <iostream> //Includes iostream
#include <iomanip>  //Includes string

using namespace std; 

int main () //Begins function
{
  double gigabytes; //Declares variable gigabytes
  double lowQualityPerHour = 43.2; //Declares variable lowQualityPerHour
  double normalQualityPerHour = 72;//Declares variable normalQualityPerHour
  double highQualityPerHour = 115.2; //Declares variable highQualityPerHour
  
  cout << "How many gigabytes does your monthly phone plan give you: "; //Outputs statement
  cin >> gigabytes ; //Allows for input
  double megabytes = gigabytes*1000; //Calculates meagabytes

  int musicType; //Declares variable musicType
  
  cout << "What quality music will you be streaming(1 for low quality music, 2 for normal quality music, 3 for high quality music)" << endl; //Outputs statement
  cin >> musicType; //Allows user to input quality of music they will be listening to
  
  switch (musicType)
  {
    case 1:
        cout << "The number of hours you can stream low quality music is: " << fixed << setprecision(2) << megabytes/lowQualityPerHour << endl; //Outputs statement, and number of hours you can stream for low quality music
        break; //Breaks the function
    case 2:
        cout << "The number of hours you can stream normal quality music is: " << fixed << setprecision(2) << megabytes/normalQualityPerHour << endl; //Outputs statement, and number of hours you can stream for normal quality music
        break; //Breaks the function
    case 3:    
        cout << "The number of hours you can stream high quality music is: " << fixed << setprecision(2) << megabytes/highQualityPerHour << endl;//Outputs statement, and number of hours you can stream for high quality music
        break; //Breaks the function

  }

    return 0; //Returns function
}

/*
How many gigabytes does your monthly phone plan give you: 6
What quality music will you be streaming(1 for low quality music, 2 for normal quality music, 3 for high quality music)
3
The number of hours you can stream high quality music is: 52.08
*/
