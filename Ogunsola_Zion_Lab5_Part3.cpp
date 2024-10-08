C
   
   for( int i =1; i <=25; i++)
    
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
                southernCoordinate += 1;
                cout << "The robot is " << southernCoordinate <<  " block south away from the starting point" << endl;
                break;
            case 3:
                easternCoordinate += 1;
                cout << "The robot is " << easternCoordinate << " block east away from the starting point" << endl;
                break;
            case 4:
                westernCoordinate += 1;
                cout << "The robot is " << westernCoordinate << " block west away from the starting point" << endl;
                break;
        }

    }
    for(int i = 0; (northernCoordinate < 3 && easternCoordinate < 2); i++)
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
        case 3:
                easternCoordinate += 1;
                cout << "The robot is " << easternCoordinate << " block east away from the starting point" << endl;
                break;

    }

    cout << "It took " << i << " steps for the robot to get to this destination point" << endl;
   
    }


    return 0;

}