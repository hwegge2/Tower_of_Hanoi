 #include <string>
 #include <iostream>
 #include <algorithm>
 #include <vector>
 #include <math.h>
 #include <stack>


using namespace std;

//prototype listing
void menu_howtoplay(int selection);
void menu_about(int selection);
void menu_selectdiff(int selection);
int game_create(int selection);
void congrats(int moves, int selection);
void solver (int selection , int pegtop = 1 , int pegmid = 2 , int pegbot = 3);
int cont (int selection);
///////////////////

void clear_screen()	//function clears up the screen
    {
    int n;
    for (n = 0; n < 30; n++)
      cout << ( "\n" );
    }

int main_menu(int select)
{
	 //carries the value selected by the user
	string const menu = "Towers Of Hanoi"; // build the menu
  string const spaces(menu.size(), ' '); // This line of code is used for the top and bottom of the frame.
  string const second = " " + spaces + " "; //creates the top and bottom of the frame.
  string const first(second.size(), '-'); // build the top and bottom of the frame.
  cout << first << std::endl; // write all
  cout << "|" + menu + "|" << std::endl;
  cout << first << std::endl;
   cout << "1\) Start Game" << endl;
   cout << "2\) How to Play" << endl;
   cout << "3\) About" << endl;
   cout << "4\) Quit" << endl;
   cin >> select;

   switch ( select )        //this series of case statements navigates the home menu
  {
  case 1: menu_selectdiff(select);
		  break;
  case 2: menu_howtoplay(select);
          break;
  case 3: menu_about(select);
          break;
  case 4: return 0;
          break;
  }
};

void menu_selectdiff(int selection)
{
	clear_screen(); //clears the previouse page
	 //carries the value selected by the user
	 string const menu = "Select Difficulty"; // build the menu
  string const spaces(menu.size(), ' '); // This line of code is used for the top and bottom of the frame.
  string const second = " " + spaces + " "; //creates the top and bottom of the frame.
  string const first(second.size(), '-'); // build the top and bottom of the frame.
   cout << first << std::endl; // write all
   cout << "|" + menu + "|" << std::endl;
   cout << first << std::endl;
   cout << "3\) Three Disks \t You Are A Beginner" << endl;
   cout << "4\) Four Disks \t Even A Child Could Do This" << endl;
   cout << "5\) Five Disks \t You Have Played This Before" << endl;
   cout << "6\) Six Disks \t You Have More Patience Than Most Humans" << endl;
   cout << "7\) Seven Disks \t You Must Not Have Alot To Do Today" << endl;
   cout << "8\) Eight Disks \t This Is Just Silly. What Are You, a Human?" << endl;
   cout << "9\) Nine Disks \t Are You Using Scripts Or Do You Have Nothing Better To Do?" << endl;
   cout << "10\) Ten Disks \t You Must Not Be Human" << endl;
   cout << "0\) Go Back to Main Menu" << endl;
   cout << "Press any other key to exit game." << endl;

   cin >> selection;

      switch ( selection )        //this case statements navigates through the Difficulty Settings
  {
  case 3: game_create (selection);
		  break;
  case 4: game_create (selection);
		  break;
  case 5: game_create (selection);
		  break;
  case 6: game_create (selection);
		  break;
  case 7: game_create (selection);
		  break;
  case 8: game_create (selection);
		  break;
  case 9: game_create (selection);
		  break;
  case 10: game_create (selection);
		  break;
  case 0: clear_screen();
          main_menu(selection);
		  break;
  }
};

void menu_howtoplay(int selection)
   {
	clear_screen(); //clears the previouse page
	string const menu = "How to Play"; // build the menu
    string const spaces(menu.size(), ' '); // This line of code is used for the top and bottom of the frame.
    string const second = " " + spaces + " "; //creates the top and bottom of the frame.
    string const first(second.size(), '-'); // build the top and bottom of the frame.
   cout << first << std::endl; // write all
   cout << "|" + menu + "|" << std::endl;
   cout << first << std::endl;
   cout << "Tower of Hanoi is a mathematical game." << endl;
   cout << "You are given n number of disks to move" << endl;
   cout << "from the peg 1 to peg 3. It may seem" << endl;
   cout << "difficult at first, but if you are consistent" << endl;
   cout << "you will succeed. Keep in mind that the game" << endl;
   cout << "increases with complexity with a factor of " << endl;
   cout << " 2^n-1. So don't worry about the world ending." << endl;
   cout << "It would take 585 billion years assuming"<< endl;
   cout << "it took you 1 second per move and all 64" << endl;
   cout << "disks where moved in the minimum order"<< endl<< endl;
   cout << "0\) Go Back to Main Menu" << endl;
   cout << "Press any other key to exit game." <<endl;
   cin >> selection;

   if(selection == 0)
   {
   	clear_screen(); //clears the previouse page
    main_menu(selection);

   }
  }

void menu_about(int selection)
{
	clear_screen(); //clears the previouse page
	 //carries the value selected by the user
	string const menu = "About"; // build the menu
  string const spaces(menu.size(), ' '); // This line of code is used for the top and bottom of the frame.
  string const second = " " + spaces + " "; //creates the top and bottom of the frame.
  string const first(second.size(), '-'); // build the top and bottom of the frame.
   cout << first << std::endl; // write all
   cout << "|" + menu + "|" << std::endl;
   cout << first << std::endl;
   cout << "Legend has it that there" << endl;
   cout << "exists a temple containing" << endl;
   cout << "64 golden disk each increasing" <<endl;
   cout << "in size across three poles." <<endl;
   cout << "According to ancient prophecy" << endl;
   cout << "whoever solves this puzzle " << endl;
   cout << "will be responsible for" << endl;
   cout <<"ending the world." << endl << endl;
   cout << "0\) Go Back to Main Menu" << endl;
   cout << "Press any other key to exit game." <<endl;
   cin >> selection;

   if (selection == 0)
   {
   	clear_screen(); //clears the previouse page
    main_menu(selection);

   }
}

int game_create(int selection)
{

	clear_screen(); //clears the previouse page
	string const menu = "Game"; // build the menu
  string const spaces(menu.size(), ' '); // This line of code is used for the top and bottom of the frame.
  string const second = " " + spaces + " "; //creates the top and bottom of the frame.
  string const first(second.size(), '-'); // build the top and bottom of the frame.
   cout << first << std::endl; // write all
   cout << "|" + menu + "|" << std::endl;
   cout << first << std::endl;
	vector<int> pega;	//Creates three stacks for each peg
	vector<int> pegb;
	vector<int> pegc;
	vector<int>::iterator it;
	int moves = 0;
	int disk_move;
	int peg_move;




	 for (int i = selection ; i > 0; i--)	//fils the stack with the user submitted amount of disks
	 {
	 	pega.push_back(i);		//note: copy pega and pega_rev to properly pop out the disks

	 }




while (!pega.empty() || !pegb.empty())	//loop iterates until game is solved
{
    /////////////////////////////////////////////////////////
     cout <<"Peg 1: ";
     for(it = pega.begin(); it<pega.end() ; it++)
     {
     	cout << "\(=" << *it <<"=\)";
     }
          cout <<endl<<"Peg 2: ";
     for(it = pegb.begin(); it<pegb.end() ; it++)
     {
     	cout << "\(=" << *it <<"=\)";
     }
          cout <<endl<<"Peg 3: ";
     for(it = pegc.begin(); it<pegc.end() ; it++)
     {
     	cout << "\(=" << *it <<"=\)";
     }
     cout << endl << first << endl;
     cout << "Moves: " << moves << endl;
     cout << first;


  cout << endl << "Enter The Peg In Which You Would Like The Top Disk To Be Moved (Enter \"0\" Solve): ";
  cin >> disk_move;
  if(disk_move == 0)
  {
  	clear_screen(); //clears the previouse page
	string const menu = "Solution"; // build the menu
  string const spaces(menu.size(), ' '); // This line of code is used for the top and bottom of the frame.
  string const second = " " + spaces + " "; //creates the top and bottom of the frame.
  string const first(second.size(), '-'); // build the top and bottom of the frame.
   cout << first << std::endl; // write all
   cout << "|" + menu + "|" << std::endl;
   cout << first << std::endl;
  	solver(selection);
  	cont(selection);
  	return 0;
  }
  cout << endl << "Enter Which Peg You Would Like To Move It To : ";
  cin >> peg_move;

  cout <<endl;
  //////////////////////////////////////////
	if(disk_move == 1 && peg_move == 2 && !pega.empty())	//possible moves from peg 1
	{
		if(pegb.empty() || pegb.back() > pega.back())	//error handles to make sure a larger disk is not placed in front of a smaller
		{
		pegb.push_back(pega.back());
		pega.pop_back();
		moves++;
		}
		else
		cout<<"Invalid Move! Try Again"<<endl;

	}
		if(disk_move == 1 && peg_move == 3 && !pega.empty())
	{
		if(pegc.empty() || pegc.back() > pega.back() )
		{
		pegc.push_back(pega.back());
		pega.pop_back();
		moves++;
		}
		else
		cout<<"Invalid Move! Try Again"<<endl;
	}
	///////////////////////////////////////////
		if(disk_move == 2 && peg_move == 1 && !pegb.empty())	//possible moves from peg 2
	{
		if(pega.empty() || pega.back() > pegb.back() )
		{
		pega.push_back(pegb.back());
		pegb.pop_back();
		moves++;
		}
		else
		cout<<"Invalid Move! Try Again"<<endl;
	}
		if(disk_move == 2 && peg_move == 3 && !pegb.empty())
	{
		if(pegc.empty() || pegc.back() > pegb.back())
		{
		pegc.push_back(pegb.back());
		pegb.pop_back();
		moves++;
		}
		else
		cout<<"Invalid Move! Try Again"<<endl;
	}

    ///////////////////////////////////////////
		if(disk_move == 3 && peg_move == 1 && !pegc.empty())	//possible moves from peg 3
	{
		if(pega.empty() || pega.back() > pegc.back())
		{
		pega.push_back(pegc.back());
		pegc.pop_back();
		moves++;
		}
		else
		cout<<"Invalid Move! Try Again"<<endl;
	}
		if(disk_move == 3 && peg_move == 2 && !pegc.empty())
	{
		if(pegb.empty() || pegb.back() > pegc.back())
		{
		pegb.push_back(pegc.back());
		pegc.pop_back();
		moves++;
		}
		else
		cout<<"Invalid Move! Try Again"<<endl;
	}
	//////////////////////////////////////////
	if(disk_move > 3 || disk_move < 1 || peg_move > 3 || peg_move < 1)	//Error Handles Odd Inputs
	{
		cout<<"Invalid Move! Try Again"<<endl;
	}



}
	congrats(moves, selection);
}


void solver(int selection , int top , int mid, int bot)	//Using recursion to solve the puzzle.
{

	if (selection == 1)
        cout <<"Move the top disk from peg " << top << " to " <<"peg " << bot << endl;
    else
    {
        solver ((selection -1), top, bot, mid);
        cout <<"Move the top disk from peg " << top << " to " <<"peg " << bot << endl;
        solver ((selection -1), mid, top, bot);
    }

}







void congrats(int moves, int selection)	//function congratulates player on winning
    {
    	int min_moves;
		min_moves = pow ( 2, selection) - 1;
			clear_screen(); //clears the previouse page
	 //carries the value selected by the user
	string const menu = "Congratulations, You Have Won!"; // build the menu
    string const spaces(menu.size(), ' '); // This line of code is used for the top and bottom of the frame.
    string const second = " " + spaces + " "; //creates the top and bottom of the frame.
    string const first(second.size(), '-'); // build the top and bottom of the frame.
   cout << first << std::endl; // write all
   cout << "|" + menu + "|" << std::endl;
   cout << first << std::endl;
	cout <<"You have completed the game in " << moves <<" steps!"<<endl;
	cout << "I solved it in " << min_moves <<" steps!" <<endl;
   if(moves == min_moves)
   {
	cout<<"Congratulations, you have solved the puzzle in the least amount of moves!"<<endl;
   }
      if(moves != min_moves)
   {
	cout<<"You have not solved the puzzle in the least amount of moves! Try Again."<<endl;
   }
    cout << "0\) Go Back to Main Menu" << endl;
   cout << "Press any other key to exit game." <<endl;
   cin >> selection;

   if(selection == 0)
   {
   	clear_screen(); //clears the previouse page
    main_menu(selection);

   }
}
int cont(int selection)
{

	cout<< endl << "Try to solve the puzzle now";
	    cout << endl<< "0\) Go Back to Main Menu" << endl;
   cout << "Press any other key to exit game." <<endl;
   cin >> selection;
	   if (selection == 0)
   {
   	clear_screen(); //clears the previouse page
    main_menu(selection);

   }
   else
   {
   return 0;

   }

}




///////////////////////////////////////////////////////////////////////////////
int main()
{
	int select;	//user submitted input for menu navigation
  main_menu(select);

    return 0;
}
