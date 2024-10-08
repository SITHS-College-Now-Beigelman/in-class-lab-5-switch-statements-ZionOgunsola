//Zion Ogunsola
//Lab 5
//10/8/2024

#include <iostream> //Includes iostream
#include <iomanip>  //Includes iomanip

using namespace std; 

int main() //Begins function
{
    double durationMinutes; //Declares variable durationMinutes
    double weightKg;  //Declares variable weightKg
    double caloriesWantToBurn; //Declares variable caloriesWantToBurn
    double metWalkingSlowly = 2; //Declares variable metWalkingSlowly
    double metWalkingQuickly= 3; //Declares variable metWalkingQuickly
    double metJogging= 8.8; //Declares variable metJogging
   
 
    cout << "Enter the duration of exercise in minutes: " ; //Outputs statement
    cin >> durationMinutes ; //Allows for input

    cout<< "Enter your weight in kilograms: "; //Outputs statement
    cin >> weightKg ; //Allows for input

    double caloriesBurnedSlow = durationMinutes * (metWalkingSlowly * 3.5 * weightKg) / 200; //Calculates caloriesBurnedSlow
    double caloriesBurnedQuick = durationMinutes * (metWalkingQuickly * 3.5 * weightKg) / 200; //Calculates caloriesBurnedQuick
    double caloriesBurnedJog = durationMinutes * (metJogging * 3.5 * weightKg) / 200; //Calculates caloriesBurnedJog

    int exercise; //Declares variable exercise
    
    
    cout << "What exercise are you going to do? (1 for walking slowly, 2 for walking quickly, 3 for jogging)" << endl; //Outputs statement
    cin >> exercise; //Allows user to input type of exercise they will be doing
    
    switch (exercise)
    {
        case 1:
            cout << "You will lose " << caloriesBurnedSlow << " calories" << endl; // Outputs the number of calories the user will lose with their selected exercise
            break; //Breaks the function

        case 2:
            cout << "You will lose " << caloriesBurnedQuick << " calories" << endl; // Outputs the number of calories the user will lose with their selected exercise
            break; //Breaks the function

        
        case 3:
            cout << "You will lose " << caloriesBurnedJog << " calories" << endl; // Outputs the number of calories the user will lose with their selected exercise
            break; //Breaks the function
       
        default:
            cout << "Please enter a valid number"; //Outputs statement when an invalid number is inputed


    }

    cout << "How many calories do you want to burn: " ; //Outputs statement
    cin >> caloriesWantToBurn ; //Allows for input
    cout << "How much do you weigh in kg: "; //Outputs statement
    cin >> weightKg ; //Allows for input

    double durationSlowly  = caloriesWantToBurn/(metWalkingSlowly * 3.5 *weightKg / 200); //Calculates variable durationSlowly
    double durationQuickly = caloriesWantToBurn/(metWalkingQuickly * 3.5 *weightKg / 200); //Calculates variable durationQuickly
    double durationJogging = caloriesWantToBurn/(metJogging * 3.5 *weightKg / 200); //Calculates variable durationJogging

    int exercise2; //Declares variable exercise2

    cout << "What exercise are you going to do? (1 for walking slowly, 2 for walking quickly, 3 for jogging)" << endl; //Outputs statement
    cin >> exercise2; //Allows user to input type of exercise they're going to do
    
    switch (exercise2)
    {
        case 1:
            cout << "It will take  " << fixed << setprecision(2) << durationSlowly << " minutes" << endl; //Outpuits the number of minutes it will take the user to lose their preferred number of calories with their selected exercise
            break;

        case 2:
            cout << "It will take " << fixed << setprecision(2) << durationQuickly << " minutes" << endl; //Outpuits the number of minutes it will take the user to lose their preferred number of calories with their selected exercise
            break;
        
        case 3:
            cout << "It will take" << fixed << setprecision(2) << durationJogging << " minutes" << endl; //Outpuits the number of minutes it will take the user to lose their preferred number of calories with their selected exercis
            break;
       
        default:
            cout << "Please enter a valid number"; //Outputs statement when an invalid number is inputed


    }
    
    return 0; // Returns function
}

/*
Enter the duration of exercise in minutes: 60
Enter your weight in kilograms: 50
What exercise are you going to do? (1 for walking slowly, 2 for walking quickly, 3 for jogging)
1
You will lose 105calories
How many calories do you want to burn: 500
How much do you weigh in kg: 50
What exercise are you going to do? (1 for walking slowly, 2 for walking quickly, 3 for jogging)
2
It will take 190.48minutes
*/