#include <iostream>
using namespace std;

main()

{
	
	// declare all the variables first
	
    int choice;
    char turn;
	char platform[3][3] = {{'1','2','3'}, {'4','5','6'}, {'7','8','9'}};
	cout << "This is the tick cross game\n";
	
	
	
	cout << "Player O\n";
	cout << "Player X\n\n\n";
	
	while (true) 
	
	{
		
		// we use the while loop so that the code keeps on working until one of the two players makes it to victory
		
	system ("CLS");
	
	
	// cout the tic tac toe and use the 2d array because we want to show the number at the specific postion
	
	cout <<"          |     |     \n";
	cout <<"       "<<platform[0][0]<<"  |  "<<platform[0][1]<<"  |  "<<platform[0][2]<<"  \n";
	cout <<"     _____|_____|_____\n";
	cout <<"          |     |     \n";
	cout <<"       "<<platform[1][0]<<"  |  "<<platform[1][1]<<"  |  "<<platform[1][2]<<"  \n";
	cout <<"     _____|_____|_____\n";
	cout <<"          |     |     \n";
	cout <<"       "<<platform[2][0]<<"  |  "<<platform[2][1]<<"  |  "<<platform[2][2]<<"  \n";
	cout <<"          |     |     \n";
	

	// now switch cases so when the players enters a specific number, it is replaced by X or O respective to the player 
	cout<<"\n\nPlayer X's turn: ";
	cin>> choice;
	
	switch (choice)
	{
		    case 1:
			platform[0][0] = 'X';
		    break;
		    
		    case 2:
			platform[0][1] = 'X';
		    break;
		    
		    case 3:
			platform[0][2] = 'X';
		    break;
		    
		    case 4:
			platform[1][0] = 'X';
		    break;
		    
		    case 5:
			platform[1][1] = 'X';
		    break;
		    
		    case 6:
			platform[1][2] = 'X';
		    break;
		    
		    case 7:
			platform[2][0] = 'X';
		    break;
		    
		    case 8:
			platform[2][1] = 'X';
		    break;
		    
		    case 9:
			platform[2][2] = 'X';
		    break;
		
		    default:
		    cout << "Invalid choice\n";
			break;	
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	// use system cls so the previous results are vanished and instead, the new one is displayed

	system ("CLS");
	cout <<"          |     |     \n";
	cout <<"       "<<platform[0][0]<<"  |  "<<platform[0][1]<<"  |  "<<platform[0][2]<<"  \n";
	cout <<"     _____|_____|_____\n";
	cout <<"          |     |     \n";
	cout <<"       "<<platform[1][0]<<"  |  "<<platform[1][1]<<"  |  "<<platform[1][2]<<"  \n";
	cout <<"     _____|_____|_____\n";
	cout <<"          |     |     \n";
	cout <<"       "<<platform[2][0]<<"  |  "<<platform[2][1]<<"  |  "<<platform[2][2]<<"  \n";
	cout <<"          |     |     \n";
	
	
	
	
	
	
	
	
	
	
	
	cout<<"\n\nPlayer O's turn: ";
	cin>> choice;
	
	switch (choice)
	{
		    case 1:
			platform[0][0] = 'O';
		    break;
		    
		    case 2:
			platform[0][1] = 'O';
		    break;
		    
		    case 3:
			platform[0][2] = 'O';
		    break;
		    
		    case 4:
			platform[1][0] = 'O';
		    break;
		    
		    case 5:
			platform[1][1] = 'O';
		    break;
		    
		    case 6:
			platform[1][2] = 'O';
		    break;
		    
		    case 7:
			platform[2][0] = 'O';
		    break;
		    
		    case 8:
			platform[2][1] = 'O';
		    break;
		    
		    case 9:
			platform[2][2] = 'O';
		    break;
		
		    default:
		    cout << "Invalid choice\n";
			break;	
		
		
		
		
		
	}
	
	
	system ("CLS");
	cout <<"          |     |     \n";
	cout <<"       "<<platform[0][0]<<"  |  "<<platform[0][1]<<"  |  "<<platform[0][2]<<"  \n";
	cout <<"     _____|_____|_____\n";
	cout <<"          |     |     \n";
	cout <<"       "<<platform[1][0]<<"  |  "<<platform[1][1]<<"  |  "<<platform[1][2]<<"  \n";
	cout <<"     _____|_____|_____\n";
	cout <<"          |     |     \n";
	cout <<"       "<<platform[2][0]<<"  |  "<<platform[2][1]<<"  |  "<<platform[2][2]<<"  \n";
	cout <<"          |     |     \n";


// now we use the if statement so whenever one of the two players makes a row either straight or diagonal, the progran terminates and displays the message saying that 
// the player has won and that the game is now over

    // for O
    //1
    if (platform[0][0] == 'O' && platform[0][1] == 'O' && platform[0][2] == 'O')
    {
    	cout << "\n\n\nGame Over! Player O has Won!";
	    return 0;
	}
	
	else if (platform[1][0] == 'O' && platform[1][1] == 'O' && platform[1][2] == 'O')
    {
    	cout << "\n\n\nGame Over! Player O has Won!";
	    return 0;
	}

    else if (platform[2][0] == 'O' && platform[2][1] == 'O' && platform[2][2] == 'O')
    {
    	cout << "\n\n\nGame Over! Player O has Won!";
	    return 0;
	}
     
    
	
	
	//2
	else if (platform[0][0] == 'O' && platform[1][0] == 'O' && platform[2][0] == 'O')
    {
    	cout << "\n\n\nGame Over! Player O has Won!";
	    return 0;
	}
	
	else if (platform[0][1] == 'O' && platform[1][1] == 'O' && platform[2][1] == 'O')
    {
    	cout << "\n\n\nGame Over! Player O has Won!";
	    return 0;
	}

    else if (platform[0][2] == 'O' && platform[1][2] == 'O' && platform[2][2] == 'O')
    {
    	cout << "\n\n\nGame Over! Player O has Won!";
        return 0;	
 	}
    
	
	
	
	//3
	else if (platform[0][0] == 'O' && platform[1][1] == 'O' && platform[2][2] == 'O')
    {
    	cout << "\n\n\nGame Over! Player O has Won!";
	    return 0;
	}
	
	else if (platform[0][2] == 'O' && platform[1][1] == 'O' && platform[2][0] == 'O')
    {
    	cout << "\n\n\nGame Over! Player O has Won!";
	    return 0;
	}
	
	

    


    // for X
    //1
    else if (platform[0][0] == 'X' && platform[0][1] == 'X' && platform[0][2] == 'X')
    {
    	cout << "\n\n\nGame Over! Player X has Won!";
	    return 0;
	}
	
	else if (platform[1][0] == 'X' && platform[1][1] == 'X' && platform[1][2] == 'X')
    {
    	cout << "\n\n\nGame Over! Player X has Won!";
	    return 0;
	}

    else if (platform[2][0] == 'X' && platform[2][1] == 'X' && platform[2][2] == 'X')
    {
    	cout << "\n\n\nGame Over! Player X has Won!";
	    return 0;
	}
     
    
	
	
	//2
	else if (platform[0][0] == 'X' && platform[1][0] == 'X' && platform[2][0] == 'X')
    {
    	cout << "\n\n\nGame Over! Player X has Won!";
	    return 0;
	}
	
	else if (platform[0][1] == 'X' && platform[1][1] == 'X' && platform[2][1] == 'X')
    {
    	cout << "\n\n\nGame Over! Player X has Won!";
	    return 0;
	}

    else if (platform[0][2] == 'X' && platform[1][2] == 'X' && platform[2][2] == 'X')
    {
    	cout << "\n\n\nGame Over! Player X has Won!";
        return 0;	
 	}
    
	
	
	
	//3
	else if (platform[0][0] == 'X' && platform[1][1] == 'X' && platform[2][2] == 'X')
    {
    	cout << "\n\n\nGame Over! Player X has Won!";
	    return 0;
	}
	
	else if (platform[0][2] == 'X' && platform[1][1] == 'X' && platform[2][0] == 'X')
    {
    	cout << "\n\n\nGame Over! Player X has Won!";
	    return 0;
	}


}
}
