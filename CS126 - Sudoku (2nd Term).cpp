// SUDOKU - CS126 TERM PROJECT


/*
 [PROGRAM INFO]:

 - PROGRAMMERS:
     Ecarma, Kyle Jethro A.
     Pastoral, Lorenzo Troy P.
     Camaclang, Jonathan Marcois Jr. E.
 
 - DATE CREATED:
     DECEMBER 17, 2019
 
 - TOPICS:
     Arrays
     Loops

*/

/***************************************************************************/
/* LIBRARIES USED */

#include<iostream>
#include<iomanip>
#include<windows.h>
#include<string>
#include<stdlib.h>


using namespace std;

/***************************************************************************/


                       			     	/* FUNCTION PROTOTYPES */
										
										
//** MAIN PROGRAMS - NO RETURN VALUE

void display_game();
// - this function acts as the main program, this will display the sudoku board

void user_inp(int xval);
// - this function acts as the intput program, players will input their answers here

void loadScreen();
// - this function acts as the loading screen, it is activated when the user initially presses the play

void difficulty_menu();
// - this function acts as the difficulty screen, it displays the level of difficulty

void return_pattern(int num);
//- this function gets input for difficulty (1 = easy, 2 = medium, 3 = hard)

//** DISPLAY

int return_diff(int num);
//- this function gets input for difficulty (1 = easy, 2 = medium, 3 = hard)



int int_inp(); // gets input as integers only

int diff_choice = 0; //* declares value for set difficulty




//** VALIDITY CHECKING

bool checkmate(int array[9]);

bool check(int array[9], int element);
bool error;




/***************************************************************************/

/* MAIN PROGRAM */
int main()
{
	error = false;
	char repeat;
	
	do{
		do{
		system("color 4e");
    // DATA-TYPE DECLARATIONS
    int menu_choice;
    
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl
    << setw(5) <<"       %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl
    << setw(3) <<"       %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl
    << setw(3) <<"       %%%                                                                  %%%" << endl
    << setw(3) <<"       %%%        o o o   o     o   o o o       o o     o   o   o     o     %%%" << endl
    << setw(3) <<"       %%%       o        o     o   o    o    o     o   o  o    o     o     %%%" << endl
    << setw(3) <<"       %%%       o o o    o     o   o     o   o     o   o o     o     o     %%%" << endl
    << setw(3) <<"       %%%             o  o     o   o    o    o     o   o  o    o     o     %%%" << endl
    << setw(3) <<"       %%%       o o o     o o o    o o o       o o     o   o    o o o      %%%" << endl
    << setw(3) <<"       %%%                                                                  %%%" << endl
    << setw(3) <<"       %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl
    << setw(3) <<"       %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl
    << setw(3) <<"       %%                            M A I N  M E N U                        %%" << endl
    << setw(3) <<"       %%      [ 1 ]: P L A Y                                                %%" << endl
    << setw(3) <<"       %%                                                                    %%" << endl
    << setw(3) <<"       %%      [ 2 ]: H E L P                                                %%" << endl
    << setw(3) <<"       %%                                                                    %%" << endl
    << setw(3) <<"       %%      [ 3 ]: C R E D I T S                                          %%" << endl
    << setw(3) <<"       %%                                                                    %%" << endl
    << setw(3) <<"       %%      [ 4 ]: E X I T                                                %%" << endl
    << setw(3) <<"       %%                                                                    %%" << endl
    << setw(3) <<"       %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl
    << setw(3) <<"       %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl << endl 
    << setw(3) <<"                                   C H O I C E: ";
    cin >> menu_choice;
    
    
	
/***************************************************************************/
				error = cin.fail();
				if(error){
					cout << endl << "Error! Input data type mismatch!" << endl;
					cin.clear();
					cin.ignore(5, '\n');
				}

				switch(menu_choice)
				{
					case 1: //Play Game 
						{ int menu_diff;
						
							do
							{
								system("cls");
								
								cout <<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl
								 	 <<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%  D I F F I C U L T Y  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl
								 	 <<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl
								     << endl
								     << endl
								     << "[1] E A S Y " << endl
									 << endl
									 <<"[2] M E D I U M" << endl
									 << endl
									 <<"[3] **C A R D I N A L S** (H A R D) " << endl
									 << endl
						        	 <<"[4] B A C K" << endl
						        	 << endl
								     <<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl
								 	 <<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl
								 	 <<"                                                                                                                    " << endl
								 	 <<"                                                 C H O I C E: ";
								cin >> menu_diff;
								
								/* Set Difficulty */
								if(menu_diff == 1)
								{
									system("cls");
									return_pattern(1);  //- this function sets the difficulty of the array (1,2,3)
								 diff_choice = return_diff(1);
									user_inp(diff_choice);
									
								}
								else if(menu_diff == 2)
								{
									system("cls");
									return_pattern(2);  //- this function sets the difficulty of the array (1,2,3)
									diff_choice = return_diff(2);
									user_inp(diff_choice);
									
								}
								else if(menu_diff == 3)
								{
									system("cls");
									return_pattern(3);  //- this function sets the difficulty of the array (1,2,3)
									diff_choice = return_diff(3);
									user_inp(diff_choice);
									
								}
								else if(menu_diff == 4)
								{
									system("cls");
									main();
						     	}
									
								else
								{
									system("cls");
									cout << "INVALID INPUT! Must be options 1 - 3 ";
								}
							
					    	}while(diff_choice!=5); //** end of while loop
							system("cls");
							main();
						break;	
						} //** end of case 1

						
					case 2: //Help
						{ int option_back;
						
						
							do
							{
								system("cls");
								
								cout <<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl
								 	 <<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%  O B J E C T I V E S  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl
								 	 <<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl
								     << endl
								     << endl
								     << "1. The program will display three 3x3 grids, \n"
									 <<" your task is to fill in all the columns and rows with the numbers 1 to 9." << endl
									 << endl
									 <<"2. You can only have one occurrence of the numbers 1 to 9 in each column, row and box." << endl
									 << endl
									 <<"3. You cannot change the numbers that have been pre-defined (this may cause an error). " << endl
									 << endl
									 <<"4. In order to redo your answer, you may convert your answer to back to 0." << endl
									 << endl;
						        cout <<"5. Have fun!" << endl
						        	 << endl	
								     <<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl
								 	 <<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl
								 	 <<"                                                 [1] B A C K                                                        " << endl
								 	 <<"                                                                                                                    " << endl
								 	 <<"                                                 C H O I C E: ";
								cin >> option_back;
								
					    	}while(option_back!=1); //** end of while loop
							system("cls");
							main();
								
						break;
						} //** end of case 2
									
												
					case 3: //About
						{
						int option_back;
						
					
							do
							{
								
								system("cls");
			
								cout <<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl
								 	 <<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%  C R E D I T S  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl
								 	 <<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl
								     << endl
								     << endl
								     << setw(5) << "THIS PROGRAM IS MAPUAN PROPERTY. THIS PROGRAM WAS CREATED BY JONATHAN CAMACLANG, KYLE JETHRO ECARMA AND LORENZO PASTORAL IN FULLFILMENT \n"
								     << "OF THE MAPUA COMPUTER SCIENCE COURSE FOR THE SUBJECT CS126 UNDER SIR JULIO MACROHON \n"
								     << "                                               ***** THANK YOU FOR PLAYING! ***** \n"
						             << endl
								     <<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl
								 	 <<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl
								 	 <<"                                                 [1] B A C K                                                        " << endl
								 	 <<"                                                                                                                    " << endl
								 	 <<"                                                 C H O I C E: ";
								cin >> option_back;
								
					    	}while(option_back!=1); //** end of while loop
							system("cls");
							main();
			
						} //** end of case 3
						break;
						
/************************************************************************************************************/						
												
					case 4: //Exit Program
						{	
						system("cls");
				 		exit(0);
			  		    } //** end of case 4
			  		    
					default:
						{
						system("cls");
						cout << "         ****************** I N V A L I D  I N P U T ! *************************" << endl;
						main();		
						break;
						}
															
					
				} //end of switch
    
		}while(error);
		cout << endl << "Press any key to return to the main menu or N/n to exit" << endl;
	}while (repeat != 'N' || repeat != 'n'); 
	return 0;
  
   
}
/***************************************************************************/

/* SOLUTIONS FOR THE PUZZLES
	E=Easy
	Med= Medium
	Car= Cardinals
	*/
	

	/*  SOLUTIONS FOR EACH PUZZLE SET
	
		       EASY PATTERN                          		 MEDIUM PATTERN                          CARDINALS PATTERN
           LEFT    MIDDLE   RIGHT        			     LEFT   MIDDLE     RIGHT              		LEFT	MID		RIGHT
        A	4,3,5	2,6,9	7,8,1 row1           	A	8,3,6	9,2,5,	7,1,4 row1   			A  1,7,2   5,4,9   6,8,3 row1	
		B	6,8,2	5,7,1	4,9,3 row2				B	2,9,5,	4,1,7,	8,6,3 row2              B  6,4,5   8,7,3   2,1,9 row2 
		C	1,9,7	8,3,4	5,6,2 row3            	C	4,7,1,	3,8,6,	2,5,9 row3				C  3,8,9   2,6,1   7,4,5 row3

		D	8,2,6	1,9,5	3,4,7 row4            	D	9,5,2,	8,6,3,	1,4,7 row4				D  4,9,6   3,2,7   8,5,1 row4
		E	3,7,4	6,8,2	9,1,5 row5             	E	3,1,7,	5,4,9,	6,8,2 row5 				E  8,1,3   4,5,6   9,7,2 row5
		F	9,5,1	7,4,3	6,2,8 row6            	F	6,4,8,	2,7,1,	9,3,5 row6				F  2,5,7   1,9,8   4,3,6 row6

		G	5,1,9	3,2,6	8,7,4 row7         		G	7,2,4,	1,5,8,	3,9,6 row7				G  9,6,4   7,1,5   3,2,8 row7
		H	2,4,8	9,5,7	1,3,6 row8 				H	1,6,9,	7,3,4,	5,2,8 row8				H  7,3,1   6,8,2   5,9,4 row8
		I	7,6,3	4,1,8	2,5,9 row9				I	5,8,3,	6,9,2,  4,7,1 row9				I  5,2,8   9,3,4   1,6,7 row9
	*/

/* 
	FOR EASY:THERE ARE 43 PRE-DEFINED NUMBERS
	FOR MEDIUM: THERE ARE 24 PRE-DEFINED NUMBERS
	FOR CARDINALS (HARDEST PUZZLE YET!): THERE ARE 19 PRE-DEFINED FUNCTIONS
*/
//  --- E=Easy      M=Medium   Cardinals=Car //

//////////////////////////////////////////////////// C H U N K S  9 X 9  ////////////////////////////////////////////////



int ELeft1[9] = {4,3,5,6,8,2,1,9,7},     EMid1[9] = {2,6,9,5,7,1,8,3,4},     ERight1[9] = {7,8,1,4,9,3,5,6,2};
int ELeft2[9] = {8,2,6,3,7,4,9,5,1},     EMid2[9] = {1,9,5,6,8,2,7,4,3},     ERight2[9] = {3,4,7,9,1,5,6,2,8};
int ELeft3[9] = {5,1,9,2,4,8,7,6,3},     EMid3[9] = {3,2,6,9,5,7,4,1,8},     ERight3[9] = {8,7,4,1,3,6,2,5,9};

int MLeft1[9] = {8,3,6,2,9,5,4,7,1},     MMid1[9] = {9,2,5,4,1,7,3,8,6},     MRight1[9] = {7,1,4,8,6,3,2,5,9};
int MLeft2[9] = {9,5,2,3,1,7,6,4,8},     MMid2[9] = {8,6,3,5,4,9,2,7,1},     MRight2[9] = {1,4,7,6,8,2,9,3,5};
int MLeft3[9] = {7,2,4,1,6,9,5,8,3},     MMid3[9] = {1,5,8,7,3,4,6,9,2},     MRight3[9] = {3,9,6,5,2,8,4,7,1};

int CarLeft1 [9] = {1,7,2,6,4,5,3,8,9},  CarMid1[9] = {5,4,9,8,7,3,2,6,1},   CarRight1[9] = {6,8,3,2,1,9,7,4,5};
int CarLeft2 [9] = {4,9,6,8,1,3,2,5,7},  CarMid2[9] = {3,2,7,4,5,6,1,9,8},   CarRight2[9] = {8,5,1,9,7,2,4,3,6};
int CarLeft3 [9] = {9,6,4,7,3,1,5,2,8},  CarMid3[9] = {7,1,5,6,8,2,9,3,4},   CarRight3[9] = {3,2,8,5,9,4,1,6,7};

///////////////////////////////////////////////////////// R O W S ////////////////////////////////////////////////////////

int ERow1[9] = {4,3,5,2,6,9,7,8,1},     MRow1[9] = {8,3,6,9,2,5,7,1,4},     CarRow1[9] = {1,7,2,5,4,9,6,8,3};
int ERow2[9] = {6,8,2,5,7,1,4,9,3},     MRow2[9] = {2,9,5,4,1,7,8,6,3},     CarRow2[9] = {6,4,5,8,7,3,2,1,9};
int ERow3[9] = {1,9,7,8,3,4,5,6,2},     MRow3[9] = {4,7,1,3,8,6,2,5,9},     CarRow3[9] = {3,8,9,2,6,1,7,4,5};

int ERow4[9] = {8,2,6,1,9,5,3,4,7},      MRow4[9] = {9,5,2,8,6,3,1,4,7},     CarRow4[9] = {4,9,6,3,2,7,8,5,1};
int ERow5[9] = {3,7,4,6,8,2,9,1,5},      MRow5[9] = {3,1,7,5,4,9,6,8,2},     CarRow5[9] = {8,1,3,4,5,6,9,7,2};
int ERow6[9] = {9,5,1,7,4,3,6,2,8},      MRow6[9] = {6,4,8,2,7,1,9,3,5},     CarRow6[9] = {2,5,7,1,9,8,4,3,6};

int ERow7 [9] = {5,1,9,3,2,6,8,7,4},     MRow7[9] = {7,2,4,1,5,8,3,9,6},     CarRow7[9] = {9,6,4,7,1,5,3,2,8};
int ERow8 [9] = {2,4,8,9,5,7,1,3,6},     MRow8[9] = {1,6,9,7,3,4,5,2,8},     CarRow8[9] = {7,3,1,6,8,2,5,9,4};
int ERow9 [9] = {7,6,3,4,1,8,2,5,9},     MRow9[9] = {5,8,3,6,9,2,4,7,1},     CarRow9[9] = {5,2,8,9,3,4,1,6,7};

///////////////////////////////////////////////////// C O L U M N S //////////////////////////////////////////////////////

int ECol1[9] = {4,6,1,8,3,9,5,2,7},		MCol1[9] = {8,2,4,9,3,6,7,1,5},		CarCol1[9] = {1,6,3,4,8,2,9,7,5};
int ECol2[9] = {3,8,9,2,7,5,1,4,6},		MCol2[9] = {3,9,7,5,1,4,2,6,8},		CarCol2[9] = {7,4,8,9,1,5,6,3,2};
int ECol3[9] = {5,2,7,6,4,1,9,8,3},	  	MCol3[9] = {6,5,1,2,7,8,4,9,3},		CarCol3[9] = {2,5,9,6,3,7,4,1,8};

int ECol4[9] = {2,5,8,1,6,7,3,9,4},		MCol4[9] = {9,4,3,8,5,2,1,7,6},		CarCol4[9] = {5,8,2,3,4,1,7,6,9};
int ECol5[9] = {6,7,3,9,8,4,2,5,1},		MCol5[9] = {2,1,8,6,4,7,5,3,9},		CarCol5[9] = {4,7,6,2,5,9,1,8,3};
int ECol6[9] = {9,1,4,5,2,3,6,7,8},		MCol6[9] = {5,7,6,3,9,1,8,4,2},		CarCol6[9] = {9,3,1,7,6,8,5,2,4};

int ECol7[9] = {7,4,5,3,9,6,8,1,2},		MCol7[9] = {7,8,2,1,6,9,3,5,4},		CarCol7[9] = {6,2,7,8,9,4,3,5,1};
int ECol8[9] = {8,9,6,4,1,2,7,3,5},		MCol8[9] = {1,6,5,4,8,3,9,2,7},		CarCol8[9] = {8,1,4,5,7,3,2,9,6};
int ECol9[9] = {1,3,2,7,5,8,4,6,9},		MCol9[9] = {4,3,9,7,2,5,6,8,1},		CarCol9[9] = {3,9,5,1,2,6,8,4,7};


////////// B L O C K S ///////////////
int left1[9];  int mid1[9]; int right1[9];   
int left2[9];  int mid2[9]; int right2[9];
int left3[9];  int mid3[9]; int right3[9];

////////////// R O W S ///////////////
int row1[9]; int row4[9]; int row7[9];
int row2[9]; int row5[9]; int row8[9];
int row3[9]; int row6[9]; int row9[9];

////////// C O L U M N S /////////////
int col1[9]; int col4[9]; int col7[9];
int col2[9]; int col5[9]; int col8[9];
int col3[9]; int col6[9]; int col9[9];



/***************************************************************************/



void user_inp(int diff_choice)
{
while(true){
	
	
string select;
	

	display_game();
	cout << endl;
	cout << "\t\t\t\t[I N P U T  C E L L]: ";
	cin >> select;
	

	
	
	if(select == "A1")
		{
			if(diff_choice == 1 || diff_choice == 2 || diff_choice == 3)
			{
			  	int inpGame = int_inp(); //in-game integer inputs 1-9
			  	if (check(left1, inpGame) && check(row1, inpGame) && check(col1, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   left1[0] = inpGame; col1[0]= inpGame; row1[0] = inpGame;
				   system("cls");
				   cout << "SYSTEM: You changed a block!" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "You can only enter only POSITIVE integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "That number is already in a Row / Column / Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << " Invalid Input! " << select <<" is a pre-defined puzzle value!" << endl;
			}
		}
	
		
		else if(select == "A2"){
			if(diff_choice == 1 || diff_choice == 2 || diff_choice == 3){
			  	int inpGame = int_inp(); //in-game integer inputs 1-9
			  	if (check(left1,inpGame) && check(row1, inpGame) && check(col2, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   left1[1] = inpGame; row1[1]= inpGame; col2[0] = inpGame;
				   system("cls");
				   cout << "SYSTEM: A2 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! A2 is a pre-defined puzzle value!\n" << endl;
			}
		}
			
		else if(select == "A3"){
			if(diff_choice == 1){
			  	int inpGame = int_inp();
			  	if (check(left1,inpGame) && check(row1, inpGame) && check(col3, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   left1[2] = inpGame; row1[2]= inpGame; col3[0] = inpGame;
				   system("cls");
				   cout << "SYSTEM: A3 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! A3 is a pre-defined puzzle value!\n" << endl;
			}
		}
		
		else if(select == "B1"){ //NOTE NOTE NOTE NOTE NOTE
			if(diff_choice == 1 || diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(left1,inpGame) && check(row2, inpGame) && check(col1, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   left1[3] = inpGame; row2[0]= inpGame; col1[1] = inpGame;
				   system("cls");
				   cout << "SYSTEM: B1 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! B1 is a pre-defined puzzle value!\n" << endl;
			}
		}
		
		else if(select == "B2"){
			if(diff_choice == 2 || diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(left1,inpGame) && check(row2, inpGame) && check(col2, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   left1[4] = inpGame; row2[1] = inpGame; col2[1] = inpGame;
				   system("cls");
				   cout << "SYSTEM: B2 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! B2 is a pre-defined puzzle value!\n" << endl;
			}
		}
		
		else if(select == "B3"){
			if(diff_choice == 1 || diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(left1,inpGame) && check(row2, inpGame) && check(col3, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   left1[5] = inpGame; row2[2]= inpGame; col3[1] = inpGame;
				   cout << "Success" << endl;
				   system("cls");
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! B3 is a pre-defined puzzle value!\n" << endl;
			}
		}
		
		else if(select == "C1"){
			if(diff_choice == 2 || diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(left1,inpGame) && check(row3, inpGame) && check(col1, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   left1[6] = inpGame; row3[0] = inpGame; col1[2] = inpGame;
				   system("cls");
				   cout << "SYSTEM: C1 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! C1 is a pre-defined puzzle value!\n" << endl;
			}
		}
		else if(select == "C2"){
			if(diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(left1,inpGame) && check(row3, inpGame) && check(col2, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   left1[7] = inpGame; row3[1] = inpGame; col2[2] = inpGame;
				   system("cls");
				   cout << "SYSTEM: C2 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! C2 is a pre-defined puzzle value!\n" << endl;
			}
		}
		else if(select == "C3"){
			if(diff_choice == 2 || diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(left1,inpGame) && check(row3, inpGame) && check(col3, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   left1[8] = inpGame; row3[2] = inpGame; col3[2] = inpGame;
				   system("cls");
				   cout << "SYSTEM: C3 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! C3 is a pre-defined puzzle value!\n" << endl;
			}
		}
//*********************** L E F T _ TWO ********************************************
		else if(select == "D1"){
			if(diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(left2,inpGame) && check(row4, inpGame) && check(col1, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   left2[0] = inpGame; row4[0] = inpGame; col1[3] = inpGame;
				   system("cls");
				   cout << "SYSTEM: D2 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! D2 is a pre-defined puzzle value!\n" << endl;
			}
		}
		else if(select == "D2"){
			if(diff_choice == 2){
			  	int inpGame = int_inp();
			  	if (check(left2,inpGame) && check(row4, inpGame) && check(col2, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   left2[1] = inpGame; row4[1] = inpGame; col2[3] = inpGame;
				   system("cls");
				   cout << "SYSTEM: D2 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! D2 is a pre-defined puzzle value!\n" << endl;
			}
		}
		else if(select == "D3"){
			if(diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(left2,inpGame) && check(row4, inpGame) && check(col3, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   left2[2] = inpGame; row4[2] = inpGame; col3[3] = inpGame;
				   system("cls");
				   cout << "SYSTEM: D3 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! D3 is a pre-defined puzzle value!\n" << endl;
			}
		}
		else if (select == "E1")
		{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! E1 is a pre-defined puzzle value!\n" << endl;
		}
		else if(select == "E2"){
			if(diff_choice == 2){
			  	int inpGame = int_inp();
			  	if (check(left2,inpGame) && check(row5, inpGame) && check(col2, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   left2[4] = inpGame; row5[1]= inpGame; col2[4] = inpGame;
				   system("cls");
				   cout << "SYSTEM: E2 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! E2 is a pre-defined puzzle value!\n" << endl;
			}
		}
			else if(select == "E3"){
			if(diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(left2,inpGame) && check(row5, inpGame) && check(col3, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   left2[5] = inpGame; row5[2]= inpGame; col3[4] = inpGame;
				   system("cls");
				   cout << "SYSTEM: E2 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! E3 is a pre-defined puzzle value!\n" << endl;
			}
		}
		else if(select == "F1"){
			if(diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(left2,inpGame) && check(row6, inpGame) && check(col1, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   left2[6] = inpGame; row6[0] = inpGame; col1[5] = inpGame;
				   system("cls");
				   cout << "SYSTEM: F1 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! F1 is a pre-defined puzzle value!\n" << endl;
			}
		}
		else if(select == "F2"){
			if(diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(left2,inpGame) && check(row6, inpGame) && check(col2, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   left2[7] = inpGame; row6[1] = inpGame; col2[5] = inpGame;
				   system("cls");
				   cout << "SYSTEM: F1 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! F2 is a pre-defined puzzle value!\n" << endl;
			}
		}
		else if(select == "F3"){
			if(diff_choice == 2 || diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(left2,inpGame) && check(row6, inpGame) && check(col3, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   left2[8] = inpGame; row6[2] = inpGame; col3[5] = inpGame;
				   system("cls");
				   cout << "SYSTEM: F3 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! F3 is a pre-defined puzzle value!\n" << endl;
			}
		}
//*********************** L E F T _ THREE ********************************************

		else if(select == "G1"){
			if(diff_choice == 1 || diff_choice == 2 || diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(left3,inpGame) && check(row7, inpGame) && check(col1, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   left3[0] = inpGame; row7[0]= inpGame; col1[6] = inpGame;
				   system("cls");
				   cout << "SYSTEM: G1 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! G1 is a pre-defined puzzle value!\n" << endl;
			}
		}
		
		else if(select == "G2"){
			if(diff_choice == 2 || diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(left3,inpGame) && check(row7, inpGame) && check(col2, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   left3[1] = inpGame; row7[1] = inpGame; col2[6] = inpGame;
				   system("cls");
				   cout << "SYSTEM: G2 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! G2 is a pre-defined puzzle value!\n" << endl;
			}
		}
		
		else if(select == "G3"){
			if(diff_choice == 2 || diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(left3,inpGame) && check(row7, inpGame) && check(col3, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   left3[2] = inpGame; row7[2] = inpGame; col3[6] = inpGame;
				   system("cls");
				   cout << "SYSTEM: G3 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! G3 is a pre-defined puzzle value!\n" << endl;
			}
		}

		else if(select == "H1"){
			if(diff_choice == 1 || diff_choice == 2){
			  	int inpGame = int_inp();
			  	if (check(left3,inpGame) && check(row8, inpGame) && check(col1, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   left3[3] = inpGame; row8[0]= inpGame; col1[7] = inpGame;
				   system("cls");
				   cout << "SYSTEM: H1 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! H1 is a pre-defined puzzle value!\n" << endl;
			}
		}
		
		else if(select == "H2"){
			if(diff_choice == 2 || diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(left3,inpGame) && check(row8, inpGame) && check(col2, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   left3[4] = inpGame; row8[1] = inpGame; col2[7] = inpGame;
				   system("cls");
				   cout << "SYSTEM: H2 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! H2 is a pre-defined puzzle value!\n" << endl;
			}
		}
		
		else if(select == "H3"){
			if(diff_choice == 2){
			  	int inpGame = int_inp();
			  	if (check(left3,inpGame) && check(row8, inpGame) && check(col3, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   left3[3] = inpGame; row8[2] = inpGame; col3[7] = inpGame;
				   system("cls");
				   cout << "SYSTEM: H3 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! H3 is a pre-defined puzzle value!\n" << endl;
			}
		}
		
		else if(select == "I1"){
			if(diff_choice == 1 || diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(left3,inpGame) && check(row9, inpGame) && check(col1, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   left3[6] = inpGame; row9[0]= inpGame; col1[8] = inpGame;
				   system("cls");
				   cout << "SYSTEM: I1 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! I1 is a pre-defined puzzle value!\n" << endl;
			}
		}
		
		else if(select == "I2"){
			if(diff_choice == 1 || diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(left3,inpGame) && check(row9, inpGame) && check(col2, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   left3[7] = inpGame; row9[1]= inpGame; col2[8] = inpGame;
				   system("cls");
				   cout << "SYSTEM: I2 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! I2 is a pre-defined puzzle value!\n" << endl;
			}
		}
		
		else if(select == "I3"){
			if(diff_choice == 1 || diff_choice == 2 || diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(left3,inpGame) && check(row9, inpGame) && check(col3, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   left3[8] = inpGame; row9[2]= inpGame; col3[8] = inpGame;
				   system("cls");
				   cout << "SYSTEM: I3 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! I3 is a pre-defined puzzle value!\n" << endl;
			}
		}
//*********************** M I D D L E _ ONE ********************************************

		else if(select == "A4"){
			if(diff_choice == 1  || diff_choice == 2 || diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(mid1,inpGame) && check(row1, inpGame) && check(col4, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   mid1[0]= inpGame; row1[3]= inpGame; col4[0]= inpGame;
				   system("cls");
				   cout << "SYSTEM: A4 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! A4 is a pre-defined puzzle value!\n" << endl;
			}
		}
		else if(select == "A5"){
			if(diff_choice == 1  || diff_choice == 2 || diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(mid1,inpGame) && check(row1, inpGame) && check(col5, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   mid1[1]= inpGame; row1[4]= inpGame; col5[0]= inpGame;
				   system("cls");
				   cout << "SYSTEM: A5 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! A5 is a pre-defined puzzle value!\n" << endl;
			}
		}

		else if(select == "A6"){
			if(diff_choice == 2 || diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(mid1,inpGame) && check(row1, inpGame) && check(col5, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   mid1[2]= inpGame; row1[5]= inpGame; col6[0]= inpGame;
				   system("cls");
				   cout << "SYSTEM: A6 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! A6 is a pre-defined puzzle value!\n" << endl;
			}
		}
		
		else if(select == "B4"){
			if(diff_choice == 1  || diff_choice == 2 || diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(mid1,inpGame) && check(row2, inpGame) && check(col4, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   mid1[3]= inpGame; col4[1]= inpGame; row2[3]= inpGame;
				   system("cls");
				   cout << "SYSTEM: B4 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! B4 is a pre-defined puzzle value!\n" << endl;
			}
		}
		
		else if(select == "B5"){
			if(diff_choice == 1  || diff_choice == 2 || diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(mid1,inpGame) && check(row2, inpGame) && check(col5, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   mid1[4]= inpGame; row2[4]= inpGame; col5[1]= inpGame;
				   system("cls");
				   cout << "SYSTEM: B5 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! B5 is a pre-defined puzzle value!\n" << endl;
			}
		}
		
			else if(select == "B6"){
			if(diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(mid1,inpGame) && check(row2, inpGame) && check(col6, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   mid1[5]= inpGame; row2[5]= inpGame; col6[1]= inpGame;
				   system("cls");
				   cout << "SYSTEM: B6 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! B6 is a pre-defined puzzle value!\n" << endl;
			}
		}
		
		else if(select == "C4"){
			if(diff_choice == 2 || diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(mid1,inpGame) && check(row3, inpGame) && check(col4, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   mid1[6]= inpGame; row3[3]= inpGame; col4[2]= inpGame;
				   system("cls");
				   cout << "SYSTEM: C4 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! C4 is a pre-defined puzzle value!\n" << endl;
			}
		}

		else if(select == "C5"){
			if(diff_choice == 1  || diff_choice == 2){
			  	int inpGame = int_inp();
			  	if (check(mid1,inpGame) && check(row3, inpGame) && check(col5, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   mid1[7]= inpGame; row3[4]= inpGame; col5[2]= inpGame;
				   system("cls");
				   cout << "SYSTEM: C5 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! C5 is a pre-defined puzzle value!\n" << endl;
			}
		}
			else if (select == "C6")
		{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! C6 is a pre-defined puzzle value!\n" << endl;
		}
//*********************** M I D D L E _ TWO ********************************************
		else if(select == "D4"){
			if(diff_choice == 1 || diff_choice == 2 || diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(mid2,inpGame) && check(row4, inpGame) && check(col4, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   mid2[0]= inpGame; row4[3]= inpGame; col4[3]= inpGame;
				   system("cls");
				   cout << "SYSTEM: D4 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! D4 is a pre-defined puzzle value!\n" << endl;
			}
		}
			else if (select == "D5")
		{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! D5 is a pre-defined puzzle value!\n" << endl;
		}
		else if(select == "D6"){
			if(diff_choice == 1 || diff_choice == 2 || diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(mid2,inpGame) && check(row4, inpGame) && check(col6, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   mid2[2]= inpGame; row4[5]= inpGame; col6[3]= inpGame;
				   system("cls");
				   cout << "SYSTEM: D6 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! D6 is a pre-defined puzzle value!\n" << endl;
			}
		}
		else if (select == "D5")
		{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! D5 is a pre-defined puzzle value!\n" << endl;
		}
		else if(select == "E4"){
			if(diff_choice == 1 || diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(mid2,inpGame) && check(row5, inpGame) && check(col4, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   mid2[3]= inpGame; row5[3]= inpGame; col4[4]= inpGame;
				   system("cls");
				   cout << "SYSTEM: E4 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! E4 is a pre-defined puzzle value!\n" << endl;
			}
		}
		
		else if(select == "E5"){
			if(diff_choice == 2 || diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(mid2,inpGame) && check(row5, inpGame) && check(col5, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   mid2[4]= inpGame; row5[4]= inpGame; col5[4]= inpGame;
				   system("cls");
				   cout << "SYSTEM: E5 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! E5 is a pre-defined puzzle value!\n" << endl;
			}
		}

		else if(select == "E6"){
			if(diff_choice == 1 || diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(mid2,inpGame) && check(row5, inpGame) && check(col6, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   mid2[5]= inpGame; row5[5]= inpGame;  col6[4]= inpGame;
				   system("cls");
				   cout << "SYSTEM: E6 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! E6 is a pre-defined puzzle value!\n" << endl;
			}
		}

		else if(select == "F4"){
			if(diff_choice == 1 || diff_choice == 2 || diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(mid2,inpGame) && check(row6, inpGame) && check(col4, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   mid2[6]= inpGame;  row6[3]= inpGame; col4[5]= inpGame;
				   system("cls");
				   cout << "SYSTEM: F4 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! F4 is a pre-defined puzzle value!\n" << endl;
			}
		}

		else if(select == "F5"){
			if(diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(mid2,inpGame) && check(row6, inpGame) && check(col5, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   mid2[7]= inpGame; row6[4]= inpGame; col5[5]= inpGame;
				   system("cls");
				   cout << "SYSTEM: F5 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! F5 is a pre-defined puzzle value!\n" << endl;
			}
		}
		
		else if(select == "F6"){
			if(diff_choice == 1 || diff_choice == 2 || diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(mid2,inpGame) && check(row6, inpGame) && check(col6, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   mid2[8]= inpGame; row6[5]= inpGame; col6[5]= inpGame;
				   system("cls");
				   cout << "SYSTEM: F6 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! F6 is a pre-defined puzzle value!\n" << endl;
			}
		}
//*********************** M I D D L E _ THREE ********************************************	
		else if(select == "G4"){
			if(diff_choice == 1){
			  	int inpGame = int_inp();
			  	if (check(mid3,inpGame) && check(row7, inpGame) && check(col4, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   mid3[0]= inpGame; row7[3]= inpGame; col4[6]= inpGame;
				   system("cls");
				   cout << "SYSTEM: G4 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! G4 is a pre-defined puzzle value!\n" << endl;
			}
		}

		else if(select == "G5"){
			if(diff_choice == 2 || diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(mid3,inpGame) && check(row7, inpGame) && check(col5, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   mid3[1]= inpGame; row7[4]= inpGame; col5[6]= inpGame;
				   system("cls");
				   cout << "SYSTEM: G5 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! G5 is a pre-defined puzzle value!\n" << endl;
			}
		}
		
		else if(select == "G6"){
			if(diff_choice == 1 || diff_choice == 2){
			  	int inpGame = int_inp();
			  	if (check(mid3,inpGame) && check(row7, inpGame) && check(col6, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   mid3[2]= inpGame;	row7[5]= inpGame;	col6[6]= inpGame;
				   system("cls");
				   cout << "SYSTEM: G6 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! G6 is a pre-defined puzzle value!\n" << endl;
			}
		}

		else if(select == "H4"){
			if(diff_choice == 1 || diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(mid3,inpGame) && check(row8, inpGame) && check(col4, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   mid3[3]= inpGame; row8[3]= inpGame; col4[7]= inpGame;
				   system("cls");
				   cout << "SYSTEM: H4 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! H4 is a pre-defined puzzle value!\n" << endl;
			}
		}
		
		else if(select == "H5"){
			if(diff_choice == 1 || diff_choice == 2){
			  	int inpGame = int_inp();
			  	if (check(mid3,inpGame) && check(row8, inpGame) && check(col5, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   mid3[4]= inpGame; row8[4]= inpGame; col5[7]= inpGame;
				   system("cls");
				   cout << "SYSTEM: H5 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! H5 is a pre-defined puzzle value!\n" << endl;
			}
		}
		
		else if(select == "H6"){
			if(diff_choice == 2 || diff_choice == 3){
		  	int inpGame = int_inp();
			  	if (check(mid3,inpGame) && check(row8, inpGame) && check(col6, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   mid3[5]= inpGame; row8[5]= inpGame; col6[7]= inpGame;
				   system("cls");
				   cout << "SYSTEM: H6 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! H6 is a pre-defined puzzle value!\n" << endl;
			}
		}
		
		else if(select == "I4"){
			if(diff_choice == 2){
			  	int inpGame = int_inp();
			  	if (check(mid3,inpGame) && check(row9, inpGame) && check(col4, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   mid3[6]= inpGame; row9[3]= inpGame; col4[8]= inpGame;
				   system("cls");
				   cout << "SYSTEM: I4 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! I4 is a pre-defined puzzle value!\n" << endl;
			}
	  }
		
		else if(select == "I5"){
			if(diff_choice == 2 || diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(mid3,inpGame) && check(row9, inpGame) && check(col5, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   mid3[7]= inpGame; row9[4]= inpGame; col5[8]= inpGame;
				   system("cls");
				   cout << "SYSTEM: I5 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! I5 is a pre-defined puzzle value!\n" << endl;
			}
		}
		
		else if(select == "I6"){
			if(diff_choice == 1 || diff_choice == 2 || diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(mid3,inpGame) && check(row9, inpGame) && check(col6, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				  mid3[8]= inpGame;	row9[5]= inpGame; col6[8]= inpGame;
				   system("cls");
				   cout << "SYSTEM: I6 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! I6 is a pre-defined puzzle value!\n" << endl;
			}
		}
//*********************** R I G H T _ ONE ********************************************
		else if(select == "A7"){
			if(diff_choice == 1 || diff_choice == 2 || diff_choice ==3){
			  	int inpGame = int_inp();
			  	if (check(right1,inpGame) && check(row1, inpGame) && check(col7, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				  right1[0]= inpGame; row1[6]= inpGame;	col7[0]= inpGame;
				   system("cls");
				   cout << "SYSTEM: A7 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! A7 is a pre-defined puzzle value!\n" << endl;
			}
		}
		
		else if(select == "A8"){
			if(diff_choice == 1 || diff_choice == 2){
			  	int inpGame = int_inp();
			  	if (check(right1,inpGame) && check(row1, inpGame) && check(col8, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				  right1[1]= inpGame; row1[7]= inpGame;	col8[0]= inpGame;
				   system("cls");
				   cout << "SYSTEM: A8 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! A8 is a pre-defined puzzle value!\n" << endl;
			}
		}
		else if(select == "A9"){
			if(diff_choice == 1){
			  	int inpGame = int_inp();
			  	if (check(right1,inpGame) && check(row1, inpGame) && check(col9, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				  right1[2]= inpGame; row1[8]= inpGame;	col9[0]= inpGame;
				   system("cls");
				   cout << "SYSTEM: A9 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! A9 is a pre-defined puzzle value!\n" << endl;
			}
		}
		
		else if(select == "C7"){
			if(diff_choice == 2){
			  	int inpGame = int_inp();
			  	if (check(right1,inpGame) && check(row3, inpGame) && check(col7, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				  right1[6]= inpGame; row3[6]= inpGame;	col7[2]= inpGame;
				   system("cls");
				   cout << "SYSTEM: C7 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! C7 is a pre-defined puzzle value!\n" << endl;
			}
		}

		else if(select == "B7"){
			if(diff_choice == 2){
			  	int inpGame = int_inp();
			  	if (check(right1,inpGame) && check(row2, inpGame) && check(col7, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				  right1[3]= inpGame; row2[6]= inpGame;	col7[1]= inpGame;
				   system("cls");
				   cout << "SYSTEM: B7 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! B7 is a pre-defined puzzle value!\n" << endl;
			}
		}
		
		else if(select == "B8"){
			if(diff_choice == 2){
			  	int inpGame = int_inp();
			  	if (check(right1,inpGame) && check(row2, inpGame) && check(col8, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				  right1[4]= inpGame; row2[7]= inpGame;	col8[1]= inpGame;
				   system("cls");
				   cout << "SYSTEM: B8 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! B8 is a pre-defined puzzle value!\n" << endl;
			}
		}
		
		else if(select == "B9"){
			if(diff_choice == 1 || diff_choice == 2 || diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(right1,inpGame) && check(row2, inpGame) && check(col9, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				  right1[5]= inpGame; row2[8]= inpGame; col9[1]= inpGame;
				   system("cls");
				   cout << "SYSTEM: B9 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! B9 is a pre-defined puzzle value!\n" << endl;
			}
		}
	else if(select == "C8"){
			if(diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(right1,inpGame) && check(row3, inpGame) && check(col8, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   right1[7]= inpGame; row3[7]= inpGame;	col8[2]= inpGame;
				   system("cls");
				   cout << "SYSTEM: C8 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! C8 is a pre-defined puzzle value!\n" << endl;
			}
		}
		else if(select == "C9"){
			if(diff_choice == 1  || diff_choice == 2 || diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(right1,inpGame) && check(row3, inpGame) && check(col9, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   right1[8]= inpGame; row3[8]= inpGame;	col9[2]= inpGame;
				   system("cls");
				   cout << "SYSTEM: C9 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! C9 is a pre-defined puzzle value!\n" << endl;
			}
		}
//*********************** R I G H T _ TWO ********************************************

		else if(select == "D7"){
			if(diff_choice == 2 || diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(right2,inpGame) && check(row4, inpGame) && check(col7, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   right2[0]= inpGame; row4[6]= inpGame;	col7[3]= inpGame;
				   system("cls");
				   cout << "SYSTEM: D7 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! D7 is a pre-defined puzzle value!\n" << endl;
			}
		}
			else if (select == "D8")
		{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! D8 is a pre-defined puzzle value!\n" << endl;
		}
			else if (select == "D8")
		{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! D8 is a pre-defined puzzle value!\n" << endl;
		}
		else if(select == "D9"){
			if(diff_choice == 1 || diff_choice == 2 || diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(right2,inpGame) && check(row4, inpGame) && check(col9, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   right2[2]= inpGame; row4[8]= inpGame; col9[3]= inpGame;
				   system("cls");
				   cout << "SYSTEM: D9 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! D9 is a pre-defined puzzle value!\n" << endl;
			}
		}

		else if(select == "E7"){
			if(diff_choice == 1 || diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(right2,inpGame) && check(row5, inpGame) && check(col7, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   right2[3]= inpGame; row5[6]= inpGame; col7[4]= inpGame;
				   system("cls");
				   cout << "SYSTEM: E7 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! E7 is a pre-defined puzzle value!\n" << endl;
			}
		}
		else if(select == "E8"){
			if(diff_choice == 1 || diff_choice == 2){
			  	int inpGame = int_inp();
			  	if (check(right2,inpGame) && check(row5, inpGame) && check(col8, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   right2[4]= inpGame; row5[7]= inpGame; col8[4]= inpGame;
				   system("cls");
				   cout << "SYSTEM: E8 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! E8 is a pre-defined puzzle value!\n" << endl;
			}
		}
	else if (select == "E9")
		{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! E9 is a pre-defined puzzle value!\n" << endl;
		}
		else if(select == "F7"){
			if(diff_choice == 1 || diff_choice == 2 || diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(right2,inpGame) && check(row6, inpGame) && check(col7, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				  right2[6]= inpGame; row6[6]= inpGame; col7[5]= inpGame;
				   system("cls");
				   cout << "SYSTEM: F7 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! F7 is a pre-defined puzzle value!\n" << endl;
			}
		}
		
		else if(select == "F8"){
			if(diff_choice == 2 || diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(right2,inpGame) && check(row6, inpGame) && check(col8, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   right2[7]= inpGame; row6[7]= inpGame;	col8[5]= inpGame;
				   system("cls");
				   cout << "SYSTEM: F8 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! F8 is a pre-defined puzzle value!\n" << endl;
			}
		}
		
		else if(select == "F9"){
			if(diff_choice == 2 || diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(right2,inpGame) && check(row6, inpGame) && check(col9, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   right2[8]= inpGame; row6[8]= inpGame;	col9[5]= inpGame;
				   system("cls");
				   cout << "SYSTEM: F9 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
				}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! F9 is a pre-defined puzzle value!\n" << endl;
			}
		}
//*********************** R I G H T _ THREE ********************************************

	else if(select == "G7"){
			if(diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(right3,inpGame) && check(row7, inpGame) && check(col7, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   right3[0]= inpGame; row7[6]= inpGame; col7[6]= inpGame;
				   system("cls");
				   cout << "SYSTEM: G7 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! G7 is a pre-defined puzzle value!\n" << endl;
			}
		}
	else if(select == "G8"){
			if(diff_choice == 2 || diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(right3,inpGame) && check(row7, inpGame) && check(col8, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   right3[1]= inpGame; row7[7]= inpGame;	col8[6]= inpGame;
				   system("cls");
				   cout << "SYSTEM: G8 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! G8 is a pre-defined puzzle value!\n" << endl;
			}
		}
		else if(select == "G9"){
			if(diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(right3,inpGame) && check(row7, inpGame) && check(col9, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   right3[2]= inpGame; row7[8]= inpGame; col9[6]= inpGame;
				   system("cls");
				   cout << "SYSTEM: G9 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! G9 is a pre-defined puzzle value!\n" << endl;
			}
		}
		
		else if(select == "H7"){
			if(diff_choice == 1 || diff_choice == 2 || diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(right3,inpGame) && check(row8, inpGame) && check(col7, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   right3[3]= inpGame; row8[6]= inpGame; col7[7]= inpGame;
				   system("cls");
				   cout << "SYSTEM: H7 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! H7 is a pre-defined puzzle value!\n" << endl;
			}
		}

		else if(select == "H8"){
			if(diff_choice == 2 || diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(right3,inpGame) && check(row8, inpGame) && check(col8, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   right3[4]= inpGame; row8[7]= inpGame;	col8[7]= inpGame;
				   system("cls");
				   cout << "SYSTEM: H8 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! H8 is a pre-defined puzzle value!\n" << endl;
			}
		}
		
		else if(select == "H9"){
			if(diff_choice == 1 || diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(right3,inpGame) && check(row8, inpGame) && check(col9, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   right3[5]= inpGame; row8[8]= inpGame; col9[7]= inpGame;
				   system("cls");
				   cout << "SYSTEM: H9 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! H9 is a pre-defined puzzle value!\n" << endl;
			}
		}

		else if(select == "I7"){
			if(diff_choice == 1 || diff_choice == 2 || diff_choice == 3){
			  	int inpGame = int_inp();
			  	if (check(right3,inpGame) && check(row9, inpGame) && check(col7, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   right3[6]= inpGame; row9[6]= inpGame; col7[8]= inpGame;
				   system("cls");
				   cout << "SYSTEM: I7 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! I7 is a pre-defined puzzle value!\n" << endl;
			}
		}

		else if(select == "I8"){
			if(diff_choice == 2){
			  	int inpGame = int_inp();
			  	if (check(right3,inpGame) && check(row9, inpGame) && check(col8, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   right3[7]= inpGame; row9[7]= inpGame;	col8[8]= inpGame;
				   system("cls");
				   cout << "SYSTEM: I8 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! I8 is a pre-defined puzzle value!\n" << endl;
			}
		}	
		else if(select == "I9"){
			if(diff_choice == 1 || diff_choice == 2){
			  	int inpGame = int_inp();
			  	if (check(right3,inpGame) && check(row9, inpGame) && check(col9, inpGame) && inpGame >= 1 || inpGame <= 9 || inpGame == 0){
				   right3[8]= inpGame;	row9[8]= inpGame; col9[8]= inpGame;
				   system("cls");
				   cout << "SYSTEM: I9 CHANGED" << endl;
				}
					else if (inpGame > 9 || inpGame < 0){
						system("cls");
						cout << "SYSTEM: Enter only positive integers 1-9!" << endl;
					}
					else {
					    system("cls");
						cout << "SYSTEM: Number already in Row/ Column or Current Region!" << endl;
					}
			}
			else{
				system("cls");
				cout << endl << "SYSTEM: Invalid Input! I9 is a pre-defined puzzle value!\n" << endl;
			}
		}
		
		else if(select == "X"){ //EXIT TO MAIN MENU
		    cout<<" X for MAIN MENU";
			system("cls");
			main();
		}
		else if(select == "S") //SHOW SOLUTION
		{
			string optionQuit;
			system("cls");
			return_pattern(diff_choice);
			cout << "SYSTEM: SOLUTION SHOWED";
			display_game();
			
			while (true)
			{	
				cout << "Do you want to EXIT GAME [Y/N]? ";
				cin >> optionQuit;
				if(optionQuit == "Y"){
					system("cls");
					exit(0);
				}
				else if(optionQuit == "N"){
					system("cls");
					main();
				}
				else
					{
						cout << "INVALID INPUT" << endl;
					}
				}
		}

//	system("cls");
	//The condition below checks if the arguments have no zero values
    if(checkmate(row1) && checkmate(row2) && checkmate(row3) &&
	checkmate(row4) && checkmate(row5) && checkmate(row6) &&
	checkmate(row7) && checkmate(row8) && checkmate(row9) )
	{
		string congrats_option;
		
		cout<< endl;
		cout<< "========================================" << endl;
		cout<< "  CONGRATULATIONS YOU WON THE GAME!" 	  << endl;
		cout<< "========================================" << endl << endl;
		
		cout << "Press any to continue..." << endl;
		cin >> congrats_option;
		system("cls");
		main();
		
		break;
	}
  }
}
	
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

/***************************************************************************/

void difficulty_menu()
{
	
}

/***************************************************************************/
void set_diff(int num)
{
	
}
/***************************************************************************/

int int_inp()
{
	int num;
	
	cout << "ENTER A NUMBER FROM 0-9 ONLY: ";
	cin >> num;
	
	return num;
	
	
}

/***************************************************************************/
void display_game()
{
	if (diff_choice == 1)
		{
       cout << setw(3) <<"       %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl
       		<< setw(3) <<"       %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl
    		<< setw(3) <<"       %%%                                                                  %%%" << endl
    		<< setw(3) <<"       %%%        o o o   o     o   o o o       o o     o   o   o     o     %%%" << endl
    		<< setw(3) <<"       %%%       o        o     o   o    o    o     o   o  o    o     o     %%%" << endl
    		<< setw(3) <<"       %%%       o o o    o     o   o     o   o     o   o o     o     o     %%%" << endl
    		<< setw(3) <<"       %%%             o  o     o   o    o    o     o   o  o    o     o     %%%" << endl
    		<< setw(3) <<"       %%%       o o o     o o o    o o o       o o     o   o    o o o      %%%" << endl
    		<< setw(3) <<"       %%%                                                                  %%%" << endl
    		<< setw(3) <<"       %%%                          E A S Y   M O D E                       %%%" << endl
   		    << setw(3) <<"       %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
    
		}
	else if (diff_choice == 2)
		{
       cout	<< setw(5) <<"       %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl
     		<< setw(3) <<"       %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl
    		<< setw(3) <<"       %%%                                                                  %%%" << endl
    		<< setw(3) <<"       %%%        o o o   o     o   o o o       o o     o   o   o     o     %%%" << endl
    		<< setw(3) <<"       %%%       o        o     o   o    o    o     o   o  o    o     o     %%%" << endl
    		<< setw(3) <<"       %%%       o o o    o     o   o     o   o     o   o o     o     o     %%%" << endl
    	 	<< setw(3) <<"       %%%             o  o     o   o    o    o     o   o  o    o     o     %%%" << endl
   		    << setw(3) <<"       %%%       o o o     o o o    o o o       o o     o   o    o o o      %%%" << endl
  	 		<< setw(3) <<"       %%%                                                                  %%%" << endl
   	    	<< setw(3) <<"       %%%                        M E D I U M   M O D E                     %%%" << endl
    		<< setw(3) <<"       %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		}
		else if (diff_choice == 3)
		{
       cout	<< setw(5) <<"       %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl
     		<< setw(3) <<"       %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl
    		<< setw(3) <<"       %%%                                                                  %%%" << endl
    		<< setw(3) <<"       %%%        X X X   X     X   X X X       X X     X   X   X     X     %%%" << endl
    		<< setw(3) <<"       %%%       X        X     X   X    X    X     X   X  X    X     X     %%%" << endl
    		<< setw(3) <<"       %%%       X X X    X     X   X     X   X     X   X X     X     X     %%%" << endl
    	 	<< setw(3) <<"       %%%             X  X     X   X    X    X     X   X  X    X     X     %%%" << endl
   		    << setw(3) <<"       %%%       X X X     X X X    X X X       X X     X   X    X X X      %%%" << endl
  	 		<< setw(3) <<"       %%%                                                                  %%%" << endl
   	    	<< setw(3) <<"       %%%    * * * * * * *  C A R D I N A L S  M O D E  * * * * * * *      %%%" << endl
    		<< setw(3) <<"       %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
		}
	
	
		
	cout << endl << endl;
	cout << setw(3) << "\t*    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    "<< "\t\t\t\t   " << endl;
	cout << "\t*      ";
	
	for (int ctr = 1; ctr <= 9; ++ctr) //output columns (1,2,3,4,5,6,7,8,9)
	  {
	  	cout << setw(5) << ctr << " ";
		if (ctr == 3 || ctr == 6 )
			cout << "   ";
	  	if (ctr == 9){
	  		cout << "\t     *"<< endl;
			cout << "\t\t\t\t\t\t        " << "\t\t\t\t "<< endl;	
	  	}
	  }
	cout << "\t*    A  ";
	for (int ctr = 0; ctr < 9; ++ctr) //start output of array values
	  {
		cout << setw(5) << row1[ctr] << " ";
		if (ctr == 2 || ctr == 5 )
			cout << " | ";
		if (ctr == 8) 
		 {
		 	cout << "         *"<< "\t\t\t\t ";
		 	cout << endl;
		 }
	  }
	  cout << "\t\t\t\t\t\t\t\t\t           ";
	cout << endl;
	
	cout << "\t*    B  ";
	for (int ctr = 0; ctr < 9; ++ctr)
	  {
		cout << setw(5) << row2[ctr] << " ";
		if (ctr == 2 || ctr == 5 )
			cout << " | ";
		if (ctr == 8) 
		 {
		 	cout << "         *"<< "\t\t\t\t ";
		 	cout << endl;
		 }
	  }
	  cout << "\t\t\t\t\t\t\t\t\t           ";
	cout << endl;
	  
	cout << "\t*    C  ";
	for (int ctr = 0; ctr < 9; ++ctr)
	  {
		cout << setw(5) << row3[ctr] << " ";
		if (ctr == 2 || ctr == 5 )
			cout << " | ";
		if (ctr == 8) 
		 {
		 	cout << "         *"<< "\t\t\t\t ";
		 	cout << endl;
		 }
	  }
	cout << "\t\t\t\t\t\t\t\t\t           ";
	cout << endl;
	cout << "\t*\t\t\t\t\t\t\t\t             *";
	cout << endl;
	cout << "\t\t\t\t\t\t\t\t\t           ";
	cout << endl;
	
	cout << "\t*    D  ";
	for (int ctr = 0; ctr < 9; ++ctr)
	  {
		cout << setw(5) << row4[ctr] << " ";
		if (ctr == 2 || ctr == 5 )
			cout << " | ";
		if (ctr == 8) 
		 {
		 	cout << "         *"<< "\t\t\t\t ";
		 	cout << endl;
		 }
	  }
	  cout << "\t\t\t\t\t\t\t\t\t           ";
	cout << endl;
	
	cout << "\t*    E  ";
	for (int ctr = 0; ctr < 9; ++ctr)
	  {
		cout << setw(5) << row5[ctr] << " ";
		if (ctr == 2 || ctr == 5 )
			cout << " | ";
		if (ctr == 8) 
		 {
		 	cout << "         *"<< "\t\t\t\t ";
		 	cout << endl;
		 }
	  }
	  cout << "\t\t\t\t\t\t\t\t\t           ";
	cout << endl;
	
	cout << "\t*    F  ";
	for (int ctr = 0; ctr < 9; ++ctr)
	  {
		cout << setw(5) << row6[ctr] << " ";
		if (ctr == 2 || ctr == 5 )
			cout << " | ";
		if (ctr == 8) 
		 {
		 	cout << "         *"<< "\t\t\t\t ";
		 	cout << endl;
		 }
	  }
	cout << "\t\t\t\t\t\t\t\t\t           ";
	cout << endl;
	cout << "\t*\t\t\t\t\t\t\t\t             *";
	cout << endl;
	cout << "\t\t\t\t\t\t\t\t\t           ";
	cout << endl;
	
	cout << "\t*    G  ";
	for (int ctr = 0; ctr < 9; ++ctr)
	  {
		cout << setw(5) << row7[ctr] << " ";
		if (ctr == 2 || ctr == 5 )
			cout << " | ";
		if (ctr == 8) 
		 {
		 	cout << "         *"<< "\t\t\t\t ";
		 	cout << endl;
		 }
	  }
	  cout << "\t\t\t\t\t\t\t\t\t           ";
	cout << endl;
	
	cout << "\t*    H  ";
	for (int ctr = 0; ctr < 9; ++ctr)
	  {
		cout << setw(5) << row8[ctr] << " ";
		if (ctr == 2 || ctr == 5 )
			cout << " | ";
		if (ctr == 8) 
		 {
		 	cout << "         *"<< "\t\t\t\t ";
		 	cout << endl;
		 }
	  }
	  cout << "\t\t\t\t\t\t\t\t\t           ";
	cout << endl;
	
	cout << "\t*    I  ";
	for (int ctr = 0; ctr < 9; ++ctr)
	  {
		cout << setw(5) << row9[ctr] << " ";
		if (ctr == 2 || ctr == 5 )
			cout << " | ";
		if (ctr == 8) 
		 {
		 	cout << "         *"<< "\t\t\t\t ";
		 	cout << endl;
		 }
	  }
	  cout << "\t\t\t\t\t\t\t\t\t           ";
	
	cout << "\t\t\t\t        ";
	cout << endl;
	cout << setw(3) << "\t*    *    *    *    *    *    *    *    *    *    *    *    *    *    *    *    "<< "\t\t\t\t   " << endl;
	cout << endl << endl;
	cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
	cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
	
}

/***************************************************************************/


void return_pattern(int num) 
{
	
/* takes arguments 1,2 or 3. 1 = easy, 2 = medium, 3 = hard. this will set values for the general arrays 

*/


	if(num == 1)
	{
		for (int ctr = 0; ctr < 9; ++ctr )
		{
			left1[ctr] = ELeft1[ctr];
			left2[ctr] = ELeft2[ctr];
			left3[ctr] = ELeft3[ctr];

			mid1[ctr] = EMid1[ctr];
			mid2[ctr] = EMid2[ctr];
			mid3[ctr] = EMid3[ctr];

			right1[ctr] = ERight1[ctr];
			right2[ctr] = ERight2[ctr];
			right3[ctr] = ERight3[ctr];

			row1[ctr] = ERow1[ctr];
			row2[ctr] = ERow2[ctr];
			row3[ctr] = ERow3[ctr];
			row4[ctr] = ERow4[ctr];
			row5[ctr] = ERow5[ctr];
			row6[ctr] = ERow6[ctr];
			row7[ctr] = ERow7[ctr];
			row8[ctr] = ERow8[ctr];
			row9[ctr] = ERow9[ctr];

			col1[ctr] = ECol1[ctr];
			col2[ctr] = ECol2[ctr];
			col3[ctr] = ECol3[ctr];
			col4[ctr] = ECol4[ctr];
			col5[ctr] = ECol5[ctr];
			col6[ctr] = ECol6[ctr];
			col7[ctr] = ECol7[ctr];
			col8[ctr] = ECol8[ctr];
			col9[ctr] = ECol9[ctr];

		}
	 }
	else if (num == 2)
	{
		for (int ctr = 0; ctr < 9; ++ctr )
		{
			left1[ctr] = MLeft1[ctr];
			left2[ctr] = MLeft2[ctr];
			left3[ctr] = MLeft3[ctr];

			mid1[ctr] = MMid1[ctr];
			mid2[ctr] = MMid2[ctr];
			mid3[ctr] = MMid3[ctr];

			right1[ctr] = MRight1[ctr];
			right2[ctr] = MRight2[ctr];
			right3[ctr] = MRight3[ctr];

			row1[ctr] = MRow1[ctr];
			row2[ctr] = MRow2[ctr];
			row3[ctr] = MRow3[ctr];
			row4[ctr] = MRow4[ctr];
			row5[ctr] = MRow5[ctr];
			row6[ctr] = MRow6[ctr];
			row7[ctr] = MRow7[ctr];
			row8[ctr] = MRow8[ctr];
			row9[ctr] = MRow9[ctr];

			col1[ctr] = MCol1[ctr];
			col2[ctr] = MCol2[ctr];
			col3[ctr] = MCol3[ctr];
			col4[ctr] = MCol4[ctr];
			col5[ctr] = MCol5[ctr];
			col6[ctr] = MCol6[ctr];
			col7[ctr] = MCol7[ctr];
			col8[ctr] = MCol8[ctr];
			col9[ctr] = MCol9[ctr];

		}
	}
	
	else if (num == 3)
	{
	 	for (int ctr = 0; ctr < 9; ++ctr)
		 {
			left1[ctr] = CarLeft1[ctr];
			left2[ctr] = CarLeft2[ctr];
			left3[ctr] = CarLeft3[ctr];

			mid1[ctr] = CarMid1[ctr];
			mid2[ctr] = CarMid2[ctr];
			mid3[ctr] = CarMid3[ctr];

			right1[ctr] = CarRight1[ctr];
			right2[ctr] = CarRight2[ctr];
			right3[ctr] = CarRight3[ctr];

			row1[ctr] = CarRow1[ctr];
			row2[ctr] = CarRow2[ctr];
			row3[ctr] = CarRow3[ctr];
			row4[ctr] = CarRow4[ctr];
			row5[ctr] = CarRow5[ctr];
			row6[ctr] = CarRow6[ctr];
			row7[ctr] = CarRow7[ctr];
			row8[ctr] = CarRow8[ctr];
			row9[ctr] = CarRow9[ctr];

			col1[ctr] = CarCol1[ctr];
			col2[ctr] = CarCol2[ctr];
			col3[ctr] = CarCol3[ctr];
			col4[ctr] = CarCol4[ctr];
			col5[ctr] = CarCol5[ctr];
			col6[ctr] = CarCol6[ctr];
			col7[ctr] = CarCol7[ctr];
			col8[ctr] = CarCol8[ctr];
			col9[ctr] = CarCol9[ctr];
	 	}
	}
}

/***************************************************************************/
int return_diff(int num)
{ 
//Used after return_pattern(), takes  arguments (1/2/3); replaces values to zero ; returns an integer for play() function
	
	if(num == 1) //IF EASY
	{
		left1[1] = 0; row1[1]= 0; col2[0] = 0; //A2 
		left1[2] = 0; row1[2]= 0; col3[0] = 0; //A3 
		left1[3] = 0; row2[0]= 0; col1[1] = 0; //B1
		left1[5] = 0; row2[2]= 0; col3[1] = 0; //B3
	
		left2[4] = 0; row5[1]; col2[4]= 0; //E2
		
		left3[0] = 0; row7[0]= 0; col1[6] = 0; //G1
		left3[3] = 0; row8[0]= 0; col1[7] = 0; //H1	
		left3[6] = 0; row9[0]= 0; col1[8] = 0; //I1
		left3[7] = 0; row9[1]= 0; col2[8] = 0; //I2
		left3[8] = 0; row9[2]= 0; col3[8] = 0; //I3
		
		mid1[0]= 0;	row1[3]= 0;	col4[0]= 0; //A4 
		mid1[1]= 0;	row1[4]= 0;	col5[0]= 0; //A5 
		mid1[3]= 0;	row2[3]= 0;	col4[1]= 0; //B4
		mid1[4]= 0;	row2[4]= 0;	col5[1]= 0; //B5
		mid1[7]= 0;	row3[4]= 0;	col5[2]= 0; //C5
		
		mid2[0]= 0;	row4[3]= 0;	col4[3]= 0; //D4
		mid2[2]= 0;	row4[5]= 0;	col6[3]= 0; //D6
		mid2[3]= 0;	row5[3]= 0;	col4[4]= 0; //E4
		mid2[5]= 0;	row5[5]= 0;	col6[4]= 0; //E6
		mid2[6]= 0;	row6[3]= 0;	col4[5]= 0; //F4
		mid2[8]= 0;	row6[5]= 0;	col6[5]= 0; //F6
		
		mid3[0]= 0;	row7[3]= 0;	col4[6]= 0; //G4
		mid3[2]= 0;	row7[5]= 0;	col6[6]= 0; //G6
		mid3[3]= 0;	row8[3]= 0;	col4[7]= 0; //H4
		mid3[4]= 0;	row8[4]= 0;	col5[7]= 0; //H5
		mid3[8]= 0;	row9[5]= 0;	col6[8]= 0; //I6
		
		right1[0]= 0;	row1[6]= 0;	col7[0]= 0; //A7 
		right1[1]= 0;	row1[7]= 0;	col8[0]= 0; //A8 
		right1[2]= 0;	row1[8]= 0;	col9[0]= 0; //A9 
		right1[5]= 0;	row2[8]= 0;	col9[1]= 0; //B9 
		right1[8]= 0;	row3[8]= 0;	col9[2]= 0; //C9
		
		right2[2]= 0;	row4[8]= 0;	col9[3]= 0; //D9
		right2[3]= 0;	row5[6]= 0;	col7[4]= 0; //E7
		right2[4]= 0;	row5[7]= 0;	col8[4]= 0; //E8 
		right2[6]= 0;	row6[6]= 0;	col7[5]= 0; //F7
		
		right3[3]= 0;	row8[6]= 0;	col7[7]= 0; //H7
		right3[5]= 0;	row8[8]= 0;	col9[7]= 0; //H9
		right3[6]= 0;	row9[6]= 0;	col7[8]= 0; //I7
		right3[8]= 0;	row9[8]= 0;	col9[8]= 0; //I9
		
		return 1; /* this means that the difficulty is easy and would be used in play() function to prevent user inputs (A1,B2,C3,ETC.) -
				      having to change these pre-defined puzzle values; this is also for efficiency so that the program will only have
					  81 inputs that would be used instead of having separate inputs for each difficulties :) */
	//easy
	}
	else if(num == 2) //IF MEDIUUM
	{
		left1[4] = 0; row2[1] = 0; col2[1] = 0; //B2 
		left1[6] = 0; row3[0] = 0; col1[2] = 0; //C1
		left1[8] = 0; row3[2] = 0; col3[2] = 0;	//C3
		
		left2[1] = 0; row4[1] = 0; col2[3] = 0; //D2
		left2[4] = 0; row5[1] = 0; col2[4] = 0; //E2
		left2[8] = 0; row6[2] = 0; col3[5] = 0; //F3
		
		left3[0] = 0; row7[0] = 0; col1[6] = 0; //G1@
		left3[3] = 0; row8[0] = 0; col1[7] = 0; //H1@
		left3[8] = 0; row9[2] = 0; col3[8] = 0; //I3@
		left3[1] = 0; row7[1] = 0; col2[6] = 0; //G2
		left3[4] = 0; row8[1] = 0; col2[7] = 0; //H2
		left3[2] = 0; row7[2] = 0; col3[6] = 0; //G3
		left3[5] = 0; row8[2] = 0; col3[7] = 0; //H3
		
		mid1[0]= 0;	row1[3]= 0;	col4[0]= 0; //A4@
		mid1[1]= 0;	row1[4]= 0;	col5[0]= 0; //A5@
		mid1[3]= 0;	row2[3]= 0;	col4[1]= 0; //B4@
		mid1[4]= 0;	row2[4]= 0;	col5[1]= 0; //B5@
		mid1[7]= 0;	row3[4]= 0;	col5[2]= 0; //C5@
		mid1[6]= 0;	row3[3]= 0;	col4[2]= 0; //C4
		mid1[2]= 0;	row1[5]= 0;	col6[0]= 0; //A6
		
		mid2[0]= 0;	row4[3]= 0;	col4[3]= 0; //D4@
		mid2[2]= 0;	row4[5]= 0;	col6[3]= 0; //D6@
		mid2[6]= 0;	row6[3]= 0;	col4[5]= 0; //F4@
		mid2[8]= 0;	row6[5]= 0;	col6[5]= 0; //F6@
		mid2[4]= 0;	row5[4]= 0;	col5[4]= 0; //E5

		
		mid3[2]= 0;	row7[5]= 0;	col6[6]= 0; //G6@
		mid3[4]= 0;	row8[4]= 0;	col5[7]= 0; //H5@
		mid3[8]= 0;	row9[5]= 0;	col6[8]= 0; //I6@
		mid3[1]= 0;	row7[4]= 0;	col5[6]= 0; //G5
		mid3[7]= 0;	row9[4]= 0;	col5[8]= 0; //I5
		mid3[6]= 0;	row9[3]= 0;	col4[8]= 0; //I4 -
		mid3[5]= 0;	row8[5]= 0;	col6[7]= 0; //H6 -
		
		right1[0]= 0;	row1[6]= 0;	col7[0]= 0; //A7 @
		right1[1]= 0;	row1[7]= 0;	col8[0]= 0; //A8 @
		right1[5]= 0;	row2[8]= 0;	col9[1]= 0; //B9 @
		right1[8]= 0;	row3[8]= 0;	col9[2]= 0; //C9 @
		right1[4]= 0;	row2[7]= 0;	col8[1]= 0; //B8
		right1[6]= 0;	row3[6]= 0;	col7[2]= 0; //C7
		right1[3]= 0;	row2[6]= 0;	col7[1]= 0; //B7
		
		right2[2]= 0;	row4[8]= 0;	col9[3]= 0; //D9@
		right2[4]= 0;	row5[7]= 0;	col8[4]= 0; //E8 @
		right2[6]= 0;	row6[6]= 0;	col7[5]= 0; //F7@
		right2[0]= 0;	row4[6]= 0;	col7[3]= 0; //D7
		right2[7]= 0;	row6[7]= 0;	col8[5]= 0; //F8
		right2[8]= 0;	row6[8]= 0;	col9[5]= 0; //F9
		
		right3[3]= 0;	row8[6]= 0;	col7[7]= 0; //H7@
		right3[6]= 0;	row9[6]= 0;	col7[8]= 0; //I7@
		right3[8]= 0;	row9[8]= 0;	col9[8]= 0; //I9@
		right3[1]= 0;	row7[7]= 0;	col8[6]= 0; //G8
		right3[4]= 0;	row8[7]= 0;	col8[7]= 0; //H8
		right3[7]= 0;	row9[7]= 0;	col8[8]= 0; //I8
		
		return 2;
	}
	
	else if (num == 3){ //hard
		left1[0] = 0; row1[0]= 0; col1[0] = 0; //A1 
		left1[1] = 0; row1[1]= 0; col2[0] = 0; //A2 
		left1[3] = 0; row2[0]= 0; col1[1] = 0; //B1
		left1[4] = 0; row2[1]= 0; col2[1] = 0; //B2
		left1[5] = 0; row2[2]= 0; col3[1] = 0; //B3
		left1[6] = 0; row3[0]= 0; col1[2] = 0; //C1
		left1[7] = 0; row3[1]= 0; col2[2] = 0; //C2
		left1[8] = 0; row3[2]= 0; col3[2] = 0; //C3
	
		left2[0] = 0; row4[0]= 0; col1[3] = 0; //D1
		left2[2] = 0; row4[2]= 0; col3[3] = 0; //D3
		left2[5] = 0; row5[2]= 0; col3[4] = 0; //E3
		left2[6] = 0; row6[0]= 0; col1[5] = 0; //F1
		left2[7] = 0; row6[1]= 0; col2[5] = 0; //F2
		left2[8] = 0; row6[2]= 0; col3[5] = 0; //F3
		
		left3[0] = 0; row7[0]= 0; col1[6] = 0; //G1
		left3[1] = 0; row7[1]= 0; col2[6] = 0; //G2
		left3[2] = 0; row7[2]= 0; col3[6] = 0; //G3
		left3[4] = 0; row8[1]= 0; col2[7] = 0; //H2	
		left3[6] = 0; row9[0]= 0; col1[8] = 0; //I1
		left3[7] = 0; row9[1]= 0; col2[8] = 0; //I2
		left3[8] = 0; row9[2]= 0; col3[8] = 0; //I3
	/////////////////////////////////////////////////////	
		mid1[0]= 0;	row1[3]= 0;	col4[0]= 0; //A4 
		mid1[1]= 0;	row1[4]= 0;	col5[0]= 0; //A5 
		mid1[2]= 0; row1[5]= 0; col6[0]= 0; //A6
		mid1[3]= 0;	row2[3]= 0;	col4[1]= 0; //B4
		mid1[4]= 0;	row2[4]= 0;	col5[1]= 0; //B5
		mid1[5]= 0; row2[5]= 0; col6[1]= 0; //B6
		mid1[6]= 0;	row3[3]= 0;	col4[2]= 0; //C4
		
		mid2[0]= 0;	row4[3]= 0;	col4[3]= 0; //D4
		mid2[2]= 0; row4[5]= 0; col6[3]= 0; //D6
		mid2[3]= 0;	row5[3]= 0;	col4[4]= 0; //E4
		mid2[4]= 0; row5[4]= 0; col5[4]= 0; //E5
		mid2[5]= 0;	row5[5]= 0;	col6[4]= 0; //E6
		mid2[6]= 0;	row6[3]= 0;	col4[5]= 0; //F4
		mid2[7]= 0; row6[4]= 0; col5[5]= 0; //F5
		mid2[8]= 0;	row6[5]= 0;	col6[5]= 0; //F6
		
		mid3[1]= 0;	row7[4]= 0;	col5[6]= 0; //G5
		mid3[3]= 0;	row8[3]= 0;	col4[7]= 0; //H4
		mid3[5]= 0;	row8[5]= 0;	col6[7]= 0; //H6
		mid3[7]= 0; row9[4]= 0; col5[8]= 0; //I5
		mid3[8]= 0;	row9[5]= 0;	col6[8]= 0; //I6
	/////////////////////////////////////////////////////	
		right1[0]= 0;	row1[6]= 0;	col7[0]= 0; //A7 
		right1[5]= 0;	row2[8]= 0;	col9[1]= 0; //B9 
		right1[7]= 0;   row3[7]= 0; col8[2]= 0; //C8
		right1[8]= 0;	row3[8]= 0;	col9[2]= 0; //C9
		
		right2[0]= 0;   row4[6]= 0; col7[3]= 0; //D7
		right2[2]= 0;	row4[8]= 0;	col9[3]= 0; //D9
		right2[3]= 0;	row5[6]= 0;	col7[4]= 0; //E7
		right2[6]= 0;	row6[6]= 0;	col7[5]= 0; //F7
		right2[7]= 0;   row6[7]= 0; col8[5]= 0; //F8
		right2[8]= 0;   row6[8]= 0; col9[5]= 0; //F9
		
		right3[0]= 0;   row7[6]= 0; col7[6]= 0; //G7
		right3[1]= 0;   row7[7]= 0; col8[6]= 0; //G8
		right3[2]= 0;   row7[8]= 0; col9[6]= 0; //G9
		right3[3]= 0;	row8[6]= 0;	col7[7]= 0; //H7
		right3[4]= 0;   row8[7]= 0; col8[7]= 0; //H8
		right3[5]= 0;	row8[8]= 0;	col9[7]= 0; //H9
		right3[6]= 0;	row9[6]= 0;	col7[8]= 0; //I7
		
		return 3;
	}

}



/***************************************************************************/


void loadScreen()
{

	system("cls");
		cout << endl	
		 << endl
		 << endl;	
		cout << "                                         Loading";
		
		Sleep(1000);
		cout << " . ";
		
		Sleep(1000);
		cout << " . ";
		
		Sleep(1000);
		cout << " . ";
	system("cls");

}

bool checkmate(int array[9])
{
	bool temp;
	for (int ctr = 0; ctr < 9; ++ctr)
	{
		if(array[ctr] > 0)
			temp = true;
		else
			{ temp = false; break; }
	}
	return temp;
	
}


bool check(int array[9], int element)
{ //ARRAY membership checking,
	bool temp = true; //initialized to true
	for (int ctr = 0; ctr < 9; ++ctr){

		if(array[ctr] == element){
			temp = false; //if the an array element is equal to the input, temp is false so that the 'if' branch will not execute
			break;}                                                     //thus not exchanging the indexed values in the main function
		else
			temp = true;
	}
}

