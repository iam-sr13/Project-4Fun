/* Hello,
   My name is ShriRaj Sawant.
   This is my first CS project based on basic CLI games.
   Hope every one likes it!
   (Enjoy!) */

#include <stdio.h>//for std input output
#include <stdlib.h>//for exit()
#include <conio.h>//for getch() 
#define CLR (system("cls"))//for clearing screen
//BLOX external variables!

int diff,stat=1,st,*zer,cheat=0,cheat2=0; //diff=difficulty, stat=counter for status, st=no.of steps, zer=a pointer variable for storing the address of zero,variable for cheatcode.

int e[3][3]={
				{5,6,3},
				{1,4,8},
				{7,2,0},
			};
	
int m[4][5]={
				{8,16,6,12,5},
				{11,19,3,17,18},
				{1,10,14,7,15},
				{13,4,9,2,0},
			};
			
//Matchstick external variables!

int sticks=21,plr=0,cpu=0,dif;//sticks=no. of matchsticks, plr=player's choice, cpu=cpu's choice, dif=difficulty

//Real Program begins......
int main()
{
	int key;
	
	printf("\n                                                                                    ");//My logo "SR"
	printf("\n                                                                                    ");
	printf("\n                                         *                                          ");
	printf("\n                                        ***                                         ");
	printf("\n                                       *****                                        ");
	printf("\n                                      *******                                     * ");
	printf("\n                                     *********                                ****  ");
	printf("\n                                    ***********                          *******    ");
	printf("\n                                   *************                 *************      ");
	printf("\n                                  ***************        *******************        ");
	printf("\n                                 *****************  **********************          ");
	printf("\n                                ***************************************             ");
	printf("\n                               **************************************               ");
	printf("\n                       ********************************************                 ");
	printf("\n              ***************************************************                   ");
	printf("\n      **************************                                                    ");
	printf("\n           ********************                *************                        ");
	printf("\n                ****************************  **********                            ");
	printf("\n                    ***********************  *********                              ");
	printf("\n                        ******************  ********         PRESENTS               ");
	printf("\n                                    *****  ***********                              ");
	printf("\n                           *************  **************                            ");
	printf("\n                         **************  ****************                           ");
	printf("\n                       ***************  ****  ************                          ");
	printf("\n                     ****************  ***       **********                         ");
	printf("\n                   *****************  *             ********                        ");
	printf("\n                 *****************                     ******                       ");
	printf("\n               ***************                            ****                      ");
	printf("\n             *************                                   **                     ");
	printf("\n           ***********                                         *                    ");
	printf("\n         **********                                                                 ");
	printf("\n       *******                                                                      ");
	printf("\n     ***                                                                            ");
	printf("\n   *                                                                                ");
	getch();
	
	reset:
	CLR;
	printf("\n                          **             **********                                 ");//title and Game menu
	printf("\n                        ****            **********                                  ");
	printf("\n                      *** **           ****                                         ");
	printf("\n                    ***   **          *****                                         ");
	printf("\n                  ***     **         ************                                   ");
	printf("\n                *****************   **************                                  ");
	printf("\n                 ***************     *****                                          ");
	printf("\n                          **          ****      *  *   * **                         ");
	printf("\n                          **           ***      *  *    *  *                        ");
	printf("\n                          **            **       ** *   *  *                        ");
	printf("\n                          *             **                                          ");
	printf("\n\n\n\n");	
	printf("\n\t\t\t ------------------------");
	printf("\n\t\t\t |                      |");
	printf("\n\t\t\t |    %c    BLOX!    %c   |",254,254);
	printf("\n\t\t\t |                      |");
	printf("\n\t\t\t ------------------------\n\n\n");
	
	printf("\n\t\t\t ------------------------");
	printf("\n\t\t\t |                      |");
	printf("\n\t\t\t |  %c WHAT's THE DAY? %c |",15,15);
	printf("\n\t\t\t |                      |");
	printf("\n\t\t\t ------------------------\n\n\n");
	
	printf("\n\t\t\t ------------------------");
	printf("\n\t\t\t |                      |");
	printf("\n\t\t\t | %c GUESS MY NUMBER! %c |",2,2);
	printf("\n\t\t\t |                      |");
	printf("\n\t\t\t ------------------------\n\n\n");	
	
	printf("\n\t\t\t ------------------------");
	printf("\n\t\t\t |                      |");
	printf("\n\t\t\t |%c LET's MATCHSTICK!! %c|",4,4);
	printf("\n\t\t\t |                      |");
	printf("\n\t\t\t ------------------------\n\n\n");
	
	printf("\n\t\t\t ENTER 'ESC' KEY TO QUIT!");
	printf("\n\n\n\t\t Please Enter Your Choice (1,2,3,4): ");
	
	key=getkey();	
	switch(key) {
		//blox
		case 49:{
			int fl=2, c;//hall of fame file variable & menu choice variable
			char r;// yes or no variable
			do {                               //The game loop
				st=0;//no. of steps					 
				loading();	
				CLR;
				printf("\n *********##^^^^^^^^ Welcome to the Mindtwister Game : BLOX ^^^^^^^^##*********\n");
				getch();
				printf("\n\n=>Instruction:");
				printf("\n\nIn this game, a frame of square pieces will be shown on the screen.\nThe pieces can be moved horizontally and vertically with the help of arrow keys.\nA possible arrangement of pieces is (for example):-\n\n");getch();	
				printf("\n             Before Solving                 After Solving\n\n");
				printf("\n       _______________________          _______________________");
				printf("\n      |     |     |     |     |        |     |     |     |     |");
				printf("\n      | 10  |  7  |  5  |  1  |        |  1  |  2  |  3  |  4  |");
				printf("\n      |     |     |     |     |        |     |     |     |     |");
				printf("\n       _______________________          _______________________");
				printf("\n      |     |     |     |     |        |     |     |     |     |");
				printf("\n      |  4  |  8  |  3  | 11  |        |  5  |  6  |  7  |  8  |");
				printf("\n      |     |     |     |     |        |     |     |     |     |");
				printf("\n       _______________________          _______________________");
				printf("\n      |     |     |     |     |        |     |     |     |     |");
				printf("\n      |  2  |  6  |  9  |  0  |        |  9  | 10  | 11  |  0  |");
				printf("\n      |     |     |     |     |        |     |     |     |     |");
				printf("\n       _______________________          _______________________");
				printf("\n\n\nAs you can see there is a '0' at the bottom right corner.\nWith the help of arrow keys you can replace the '0' with the piece(s)\nnearest to it.\n\n\nYour goal is :\nTO ARRANGE THE PIECES IN THE ASCENDING ORDER OF THE NUMBERS WITH MINIMUM STEPS.\nLess the steps higher the ranking will be.\n");
				getch();
				printf("\nSo what are we waiting for! Lets BEGINNNNNN........!!!!!\n");
				getch();	
				
				reset3:
			    CLR;
				c=ipas("\n    <==### MAIN MENU ###==>\n\t   _________\n\n\t1) New Game\n\n\t2) Hall of Fame\n\n\t3) Exit\n\nYour Choice: ");
				switch(c) {
					case 1:	reset2:
							CLR;
							diff=ipas("\nChoose your difficulty level:-\n\n1)Novice\n\n2)Impresso\n\n3)Hell Fire\n\nYour Choice: ");				
							switch(diff) {
								case 1:zer=&e[2][2];
									   
									   novice(fl);//difficulty selections; the functions are defined at the end seperately
									   break;
								case 2:zer=&m[3][4];
									   
								       impresso(fl);//fl is used to handle opening and editing of different files for different games
								  	   break;
								case 3:hell(fl);//this level is under development.(as this is my first finished version) 
									   goto reset2;
									   break;
								default:printf("\nINVALID CHOICE!!");getch(); goto reset2;//reset is used (often in this program) to continue from the section where an invalid input was given.
							}
							break;
					case 2:fileop(fl);//to open the file of game winners.
						   goto reset3;
						   break;
					case 3:goto reset;
					default:printf("\nINVALID CHOICE!!");getch(); goto reset3;		
				}		
				r=cpas("\n\n\nGAME OVER!\n\nDo You want to play again? (y/n)\n\nYour Choice: ");
			}
			while(r=='y');			
		}
		goto reset;
		//what's the day		
		case 50:{
			int d,m,y,c,n,dr,mr,yr,R,a,cd,x;//d=day,m=month,y=year,c=century,n=;dr=day remainder,similarly mr & yr,R=total Remainder;
			char cho;
			do {
				CLR;
				printf("\t     ###########--> Welcome to What's the Day!? <--############");	
				printf("\n\n\n Enter the date in dd/mm/yyyy format: ");
				scanf("%d/%d/%d",&d,&m,&y);   //this game is completely formula based. Actually this game is transformed into C program from the mathematical book.
				x=y;
				c=y/100;
				y=y%100;
				dr=d%7;
				mr=(m==1?1:(m==2?4:(m==3?4:(m==4?0:(m==5?2:(m==6?5:(m==7?0:(m==8?3:(m==9?6:(m==10?1:(m==11?4:(m==12?6:m))))))))))));
				yr=(y+(y/4))%7;
				a=19;
				cd=-1;
				n=(a)+(c*cd);
				R=dr+mr+yr+n;
				if(R<0) {
					R%=7;
					R+=7;
				}
				else if(R>0) {
					R%=7;
				}
				if(R==0||R==7) {
					printf("\n\n The day on %d/%d/%d is Saturday\a.",d,m,x);
				}
				else if(R==1) {
					printf("\n\n The day on %d/%d/%d is Sunday\a.",d,m,x);
				}
				else if(R==2) {
					printf("\n\n The day on %d/%d/%d is Monday\a.",d,m,x);
				}
				else if(R==3) {
					printf("\n\n The day on %d/%d/%d is Tuesday\a.",d,m,x);
				}
				else if(R==4) {
					printf("\n The day on %d/%d/%d is Wednesday\a.",d,m,x);
				}
				else if(R==5) {
					printf("\n\n The day on %d/%d/%d is Thursday\a.",d,m,x);
				}
				else if(R==6) {
					printf("\n\n The day on %d/%d/%d is Friday\a.",d,m,x);
				}
				printf("\n\n Game Over!\n\n Do you want to play Again? (y/n)\n Reply: ");
				scanf(" %c",&cho);		
			}
			while (cho=='y');
		}
		goto reset;
		//guess my no.		
		case 51:{
			char cho;
			do {			//This game is based on simple logic.(easily understood from the flow chart)
				CLR;
				int result;
				printf("Note:-{press enter on your keyboard for next instruction or just do\nwhat the computer says}\n");
				printf("\nHello,I am Your friend, your PC!.\n");
				getch();	
				printf("\nNow I am going to show you a magic trick.\n");
				getch();	
				printf("\nIn the following exercise enter 'y' for yes and 'n' for no.\n");
				getch();	
				printf("\nAssume any single digit number in your mind.\nDon't reveal it to me.\n");
				getch();
				
				CLR;
				printf("\nIs the number assumed by you present in this set?\n{4,7,0,2,5}\n(press 'y' or 'n')\n");
				result=getkey();
				CLR;
				
				if (result==110) {
					printf("\nIs the number assumed by you present in this set?\n{9,6,5,1,8}\n(press 'y' or 'n')\n");		
					result=getkey();
					CLR;
					
					if (result==110) {
						printf("\nThe number assumed by you is '3'");
					}
					else if (result==121) {
						printf("\nIs the number assumed by you present in this set?\n{8,5,3,6,1}\n(press 'y' or 'n')\n");				
						result=getkey();
						CLR;
						
						if (result==110) {
							printf("\nThe number assumed by you is '9'");
						}
						else if (result==121) {
							printf("\nIs the number assumed by you present in this set?\n{4,9,1,7,6}\n(press 'y' or 'n')\n");					 
							result=getkey();
							CLR;
						
							if (result==110) {
								printf("\nThe number assumed by you is '8'");
							}
							else if (result==121) {
								printf("\nIs the number assumed by you present in this set?\n{1,3,4,9,0}\n(press 'y' or 'n')\n");					
								result=getkey();
								CLR;
								
								if (result==110) {
									printf("\nThe number assumed by you is '6'");
								}
								else if (result==121) {
									printf("\nThe number assumed by you is '1'");
								}
							}
						}
					}
				}
				else if (result==121) {
					printf("\nIs the number assumed by you present in this set?\n{2,4,6,8,0}\n(press 'y' or 'n')\n");
					result=getkey();
					CLR;
					
					if (result==110) {
						printf("\nIs the number assumed by you present in this set?\n{5,3,2,9,0}\n(press 'y' or 'n')\n");		
						result=getkey();
						CLR;
						
						if (result==110) {
							printf("\nThe number assumed by you is '7'");
						}
						else if (result==121) {
							printf("\nThe number assumed by you is '5'");
						}
					}
					else if (result==121) {
						printf("\nIs the number assumed by you present in this set?\n{9,5,0,3,1}\n(press 'y' or 'n')\n");				
						result=getkey();
						CLR;
						
						if (result==110) {
							printf("\nIs the number assumed by you present in this set?\n{9,3,8,6,2}\n(press 'y' or 'n')\n");					
							result=getkey();
							CLR;
							
							if (result==110) {
								printf("\nThe number assumed by you is '4'");
							}
							else if (result==121) {
								printf("\nThe number assumed by you is '2'");
							}
						}
						else if (result==121) {
							printf("\nThe number assumed by you is '0'");
						}
					}
				}
				printf("\n\n Game Over!\n\n Do you want to play Again? (y/n)\n Reply: ");
				scanf(" %c",&cho);
			}
			while (cho=='y');
		}
		goto reset;
		//let's matchstick		 
		case 52:{
			int fl=1, c;//hall of fame file variable & menu choice variable
			char r;//yes or no variable
			do {
			    int n=sticks;
			    
				loading();
				CLR;
				printf("\n ********* Welcome to the ultimate man-machine showdown: MATCHSTICKS **********\n            -->>where human brain is pit against silicon processor!\n\n");
				getch();
				printf("\n\n=>Instruction:");
				printf("\nIn this game, each one will have to pick up the matchsticks(1,2,3 or 4)\naccording to their turn.");
				printf("\nThe one to pick up the last stick will be the loser!");
				getch();
				printf("\n\nPC:'So, are you fit enough to chalenge me!'");
				getch();
				
			    reset5:
			    CLR;
				printf("\n    <==### MAIN MENU ###==>\n\t   _________\n\n\t1) New Game\n\n\t2) Hall of Fame\n\n\t3) Exit\n\nYour Choice: ");
				scanf(" %d",&c);
				switch(c) {
					case 1:	reset6:
							CLR;
							printf("\nChoose your difficulty level:-\n\n1)Mindless mode\n2)Intelli mode\n\nYour Choice: ");
							scanf(" %d",&dif);
							switch(dif) {
								case 1:mindless(n,fl);// difficulty selection (each function is defined at the end seperately)
									   break;
								case 2:intelli(n,fl);
								  	   break;
							default:printf("\nINVALID CHOICE!!"); goto reset6;
							}
							break;
					case 2:fileop(fl);//to open the file of game winners.
						   goto reset5;
						   break;
					case 3:goto reset;
					default:printf("\nINVALID CHOICE!!"); goto reset5;		
				}		
				CLR;
				printf("\n\n\nGAME OVER!\n\nDo You want to play again? (y/n)\n\nYour Choice: ");
				scanf(" %c",&r);
			}
			while(r=='y');			
	    }
		goto reset;	
					
		case 27:CLR;
				printf("\n\n\n\n");
				printf("\n****************                                          ");// Ending....
				printf("\n *************                                            ");
				printf("\n       **     *    *      *     *     *   *    *          ");
				printf("\n       **     *    *     * *    * *   *   *  *            ");
				printf("\n       **     ******    *****   *  *  *   ** *            ");
				printf("\n       **     *    *   *     *  *   * *   *   *           ");
				printf("\n       **    *    *  *       * *     *   *    *           ");
				printf("\n       */                                                 ");
				printf("\n         /                                                ");
				printf("\n          /*       **                                     ");
				printf("\n          ***     **                                      ");
				printf("\n           ***   **                                       ");
				printf("\n            *** **    *********  *    *                   ");
				printf("\n             ****      *     *   *    *      FOR PLAYING!!");
				printf("\n            ****        *   *    *    *                   ");
				printf("\n           ***           * *     ******                   ");
				printf("\n          **              *                               ");
				printf("\n         *                                               ");
				getch();
				exit(0);
		default:printf("\nINVALID CHOICE!!");getch(); goto reset;
	}	
	return 0;	
}//THE END of main......

//Blox functions!
void dispboard()//function used to display the blox grid along with its numbers.
{
	CLR;
	switch(diff) {
		case 1: printf("\n\t\tBLOX!\t\t\tDifficulty: Novice\n\n\n");
				printf("\n       _________________");
				printf("\n      |     |     |     |");
				printf("\n      |  %d  |  %d  |  %d  |",(e[0][0]),(e[0][1]),(e[0][2]));
				printf("\n      |     |     |     |");
				printf("\n       _________________");
				printf("\n      |     |     |     |");
				printf("\n      |  %d  |  %d  |  %d  |",(e[1][0]),(e[1][1]),(e[1][2]));
				printf("\n      |     |     |     |");
				printf("\n       _________________");
				printf("\n      |     |     |     |");
				printf("\n      |  %d  |  %d  |  %d  |",(e[2][0]),(e[2][1]),(e[2][2]));
				printf("\n      |     |     |     |");
				printf("\n       _________________\n\n");
				status();
				break;
		case 2:	printf("\n\t\tBLOX!\t\t\t\tDifficulty: Impresso\n\n\n");
				printf("\n       _____________________________");
				printf("\n      |     |     |     |     |     |");
				printf("\n      |  %2d |  %2d |  %2d |  %2d |  %2d |",(m[0][0]),(m[0][1]),(m[0][2]),(m[0][3]),(m[0][4]));
				printf("\n      |     |     |     |     |     |");
				printf("\n       _____________________________");
				printf("\n      |     |     |     |     |     |");
				printf("\n      |  %2d |  %2d |  %2d |  %2d |  %2d |",(m[1][0]),(m[1][1]),(m[1][2]),(m[1][3]),(m[1][4]));
				printf("\n      |     |     |     |     |     |");
				printf("\n       _____________________________");
				printf("\n      |     |     |     |     |     |");
				printf("\n      |  %2d |  %2d |  %2d |  %2d |  %2d |",(m[2][0]),(m[2][1]),(m[2][2]),(m[2][3]),(m[2][4]));
				printf("\n      |     |     |     |     |     |");
				printf("\n       _____________________________");
				printf("\n      |     |     |     |     |     |");
				printf("\n      |  %2d |  %2d |  %2d |  %2d |  %2d |",(m[3][0]),(m[3][1]),(m[3][2]),(m[3][3]),(m[3][4]));
				printf("\n      |     |     |     |     |     |");
				printf("\n       _____________________________");
				status();
				break;
		case 3: //Under development!
				break;
	}
}
//actually blox is mainly a passing the parcel between player and dispboard functions!
player()
{         //this is actually the heart of the blox game. Here every move is processed and then sent to dispboard for printing.
	int x;		//the globally declared array (at the top) is used here. They are globaly declared to avoid the mess of passing them.
	reset4:
	x=getkey();	
	switch(x) {	//up arrow result	
		case 328:if(diff==1) { //for difficulty level 1 
	 				 if((e[0][0]==0)||(e[0][1]==0)||(e[0][2]==0)) goto reset4;//this means don't respond if 0 is already at the topmost row and similar logic for the remaining.
					 swap(zer,(zer-3));
					 zer-=3;
		}
				 else { //for difficulty level 2
				 	if((m[0][0]==0)||(m[0][1]==0)||(m[0][2]==0)||(m[0][3]==0)||(m[0][4]==0)) goto reset4;
				 	swap(zer,(zer-5));
					 zer-=5;
				 }
				 break;
		case 336:if(diff==1) { //similarly down
					if((e[2][0]==0)||(e[2][1]==0)||(e[2][2]==0)) goto reset4;
					swap(zer,(zer+3));
				 	zer+=3;
		}
				 else {
				 	if((m[3][0]==0)||(m[3][1]==0)||(m[3][2]==0)||(m[3][3]==0)||(m[3][4]==0)) goto reset4;
				 	swap(zer,(zer+5));
				 	zer+=5;
				 }
				 break;
		case 331:if(diff==1) {// left
					if((e[0][0]==0)||(e[1][0]==0)||(e[2][0]==0)) goto reset4;
				 	swap(zer,(zer-1));
				 	zer-=1;
		}
				 else {
				 	if((m[0][0]==0)||(m[1][0]==0)||(m[2][0]==0)||(m[3][0]==0)) goto reset4;
				 	swap(zer,(zer-1));
				 	zer-=1;
				 }
				 break;
		case 333:if(diff==1) { // right
					if((e[0][2]==0)||(e[1][2]==0)||(e[2][2]==0)) goto reset4;
				 	swap(zer,(zer+1));
				 	zer+=1;
		}
				 else {
				 	if((m[0][4]==0)||(m[1][4]==0)||(m[2][4]==0)||(m[3][4]==0)) goto reset4;
				 	swap(zer,(zer+1));
				 	zer+=1;
				 }
				 break;
		case 115:cheat=1;//115=s, a small cheating in the game....
				 break;
		case 27: exit(0);
		default:printf("\nINVALID CHOICE!!");getch(); goto reset4;
	}
	st++;// steps counter	
}


status()// this will automatically update the status displayed ( for e.g no. of steps, etc) it interacts with dispboard.
{
	int x2;	
	printf("\n\n\n\nSTATUS:\n\nNo. of Steps: %d",st);
	stat++;
	if(stat==4) printf("\n\n\nAgent SR: Common! You can do it!!");
	if(stat==8) printf("\n\n\nAgent SR: Don't give up!");
	if(stat==12)printf("\n\n\nAgent SR: Keep on trying!!");
	if(stat==16) {
		printf("\n\n\nAgent SR: Try and Try till SUCCESS!!!");// just for encouragement...
		stat=1;
	}
	if(cheat) {
		printf("\n\nCHEAT MODE:\n\n1) Reset the no. of steps (please press any arrow key after using this cheat to see its effect!)\n\n2) Finish the Game\n");
		reset5:
		x2=getkey();
		switch(x2) {
			case 49:st=-1;
					cheat=0;
					break;			
			case 50:cheat2=1;
				    break;
			default:printf("\nINVALID CHOICE!!"); goto reset5;
		}
	}
}

novice(int fl)
{
	do {
		dispboard();
		if(cheat2) break;
		player();		
	}
	while((e[0][0]!=1)||(e[0][1]!=2)||(e[0][2]!=3)||(e[1][0]!=4)||(e[1][1]!=5)||(e[1][2]!=6)||(e[2][0]!=7)||(e[2][1]!=8)||(e[2][2]!=0));//cross check if the player has won the game or not and similar for below. 
	CLR;
	printf("\n\nCONGRATULATIONS\n\n\nYou won the game in %d steps!!!",st);
	file(fl);//opens file to enter data like name and store in it
	getch();
}

impresso(int fl)//same as above
{
	do {
		dispboard();
		if(cheat2) break;
		player();		
	}
	while((m[0][0]!=1)||(m[0][1]!=2)||(m[0][2]!=3)||(m[0][3]!=4)||(m[0][4]!=5)||(m[1][0]!=6)||(m[1][1]!=7)||(m[1][2]!=8)||(m[1][3]!=9)||(m[1][4]!=10)||(m[2][0]!=11)||(m[2][1]!=12)||m[2][2]!=13||(m[2][3]!=14)||(m[2][4]!=15)||(m[3][0]!=16)||(m[3][1]!=17)||(m[3][2]!=18)||(m[3][3]!=19)||(m[3][4]!=0));
	CLR;
	printf("\n\nCONGRATULATIONS\n\n\nYou won the game in %d steps!!!",st);
	file(fl);
	getch();	
}

hell(int fl)
{
	printf("\n\n'System Malfunction'==>\n This level is under development!\nPlease choose another level!\n\nThank you for your co-operation....");getch();//sorry sir, but i am planning some awesome tricks to include in this level. It will take time. 
}                                                                                                                                                          //I want to skip this until examinations.. 

//Matchstick functions!
mindless(int n,int fl)
{
	int t=0;
	do {
		CLR;
		int i,j=1,k=0,l=0,m=0;
		printf("\nMATCHSTICKS=>\n\n\n\n");	  //loop used to display the matchsticks
		for(i=1;i<=n;i++) {    //logic used is 
			if(j)printf(" @"); //first only display the head part and reset the main loop
			if(k)printf(" |"); //then instead start the inner secind loop and display second part and then reset
			if(l)printf(" |"); //similarly this
			if(m)printf(" |"); //and this then end the main loop
			if(i==n && j==1) {
				j=0;
				k=1;
				i=0;
				printf("\n");
			}
			if(i==n && k==1) {
				k=0;
				l=1;
				i=0;
				printf("\n");
			}
			if(i==n && l==1) {
				l=0;
				m=1;
				i=0;
				printf("\n");
			}				
		}
		if(n==sticks) printf("\n\n\nPC:'Let us see, who wins this challenge!'");//PC dialogues just for entertain ment
		    
		if(t) {
			if(n==1) {  //checkout block if the player has won or not
				printf("\n\nYou Won The Game!\n\n''CONGRATULATIONS!!''\n");
				file(fl);//opens file to enter data like name and store in it
				getch();
				printf("\n\nPC:'Don't celeberate human! Try harder level if you dare!!'");
				getch();
				break;
			}
			cpu=cpum(n);//cpu logic to return a counter value against player
			if(n<=cpu) { CLR;printf("\n\nThe Game is declared as a TIE between player & PC.\n\nPC: #!?\n");getch();break;} //to check if there is a tie
			n-=cpu;
			getch();
			t=0;//a variable for alternating the round between pc and plr 
			continue;
		}
		
		if(!t) {
			if(n==1) {  //checkout block if the pc has won or not
				printf("\n\nYou Lose The Game!\n\nBetter luck next time!");
				printf("\n\nPC:'Ha!Ha!!Haaa.....!'\n   'I had told you human, you are ''LOSER!!''");
				getch();
				break;
			}
			t=1;		
			plr=plrf(n);
			if(n<=plr) { CLR;printf("\n\nThe Game is declared as a TIE between player & PC.\n\nPC: #!?\n");getch();break;} //to check if there is a tie
			n-=plr;
		}
   }
   while(n);
}

intelli(int n,int fl)   // same logic as above with minor changes
{ 
	int t=0;
	do {
		CLR;
		int i,j=1,k=0,l=0,m=0;
		printf("\nMATCHSTICKS=>\n\n\n\n");	
		for(i=1;i<=n;i++) {
			if(j)printf(" @");
			if(k)printf(" |");
			if(l)printf(" |");
			if(m)printf(" |");
			if(i==n && j==1) {
				j=0;
				k=1;
				i=0;
				printf("\n");
			}
			if(i==n && k==1) {
				k=0;
				l=1;
				i=0;
				printf("\n");
			}
			if(i==n && l==1) {
				l=0;
				m=1;
				i=0;
				printf("\n");
			}				
		}
	    if(n==sticks) printf("\n\nPC:'Now you will see the true power of silicon chip!'");
	    
		if(t) {
			if(n==1) {
				printf("\n\nYou Won The Game!\n\n''CONGRATULATIONS!!''\n");
				file(fl);
				getch();
				printf("\n\nPC:'Don't think that this is over human!'\n   'I'll be watching you!'\n");
				getch();
				break;
			}
			cpu=cpuf(n);//cpu logic to return a counter value against player
			n-=cpu;
			getch();
			t=0;
			continue;
		}
		if(!t) {
			if(n==1) {
				printf("\n\nYou Lose The Game!\nBetter luck next time!\n");
				printf("\n\nPC:'Ha!Ha!!Haaa.....!'\n   'I had told you human, you are ''LOSER!!''");
				getch();
				break;
			}		
			plr=plrf(n);
			n-=plr;
			t=1;
		}
	}
	while(n);
}

int plrf(int n) //used to input value from the user
{
	int x;
	reset3:
	printf("\n\nHow many sticks will you pick?(1,2,3 or 4)\n\nYour Choice: ");
	scanf(" %d",&x);
	switch(x) {
		case 1:return (x);
		case 2:return (x);
		case 3:return (x);
		case 4:return (x);
		case 1997:printf("\n\nCheat Mode:\n\nEnter any no. of sticks you want to pick: ");
				  scanf(" %d",&x); //a small cheat in the game
				  return (x);
		default:printf("\nINVALID CHOICE!!"); goto reset3;
	}
}

int cpuf(int n)// used to determine cpu's choice (this one is litle bit witty)
{
	
	printf("\n\nPC:It's my turn!\n\n(Thinking....)");
	int y1;
	int y[3][4]={
				{4,9,14,19},
				{3,8,13,18},
				{2,7,12,17},
			};
	if(n%5==0) {
	 printf("\n\nPC:My choice is 4.\n");
	 return 4;
	}
	for(y1=0;y1<=3;y1++) {
		if(y[0][y1]==n) {printf("\n\nPC:My choice is 3.\n");return 3;}
		if(y[1][y1]==n) {printf("\n\nPC:My choice is 2.\n");return 2;}
		if(y[2][y1]==n) {printf("\n\nPC:My choice is 1.\n");return 1;}		
	}	
}

int cpum(int n)//cpu logic (this one is complete mindless)
{
	printf("\n\nPC:It's my turn!\n");
	int calc;
	calc=(n*plr)%4+1;
	printf("\n\nPC:My choice is %d.\n",calc);	
	return (calc); 
}



//Other functions!
file(int fl) //for editing
{	 
    FILE *fptr; 
    char name[20];
	    
    if(fl==2) {
	    fptr = fopen ("hall of fame2.txt", "a");
	    if (fptr == NULL) 
	    { 
	      printf("\n\nFile does not exists \n"); 
	      return; 
	    } 
	    printf("\nEnter your name: "); 
	    scanf("%s",&name);
	    
	    if(0) {
	       fprintf(fptr,"\n\t\t\t******HALL OF FAME******\n\n NAME\t\t\t\tRANKING\t\t\t\tMoves\n ____\t\t\t\t_______\t\t\t\t_____\n\n");
	    }
	    
	    fprintf(fptr, "\n>) %s\t\t\t\t",name);    
	    switch(diff) {
	    	case 1:fprintf(fptr,"Novice");
	    			break;
	    	case 2:fprintf(fptr,"Impresso");
	    			break;
	    	case 3:fprintf(fptr,"Hell Fire"); 
	    			break;
	    }
		fprintf(fptr, "\t\t\t\t %d",st);		
	}
	else if(fl==1) {
		fptr = fopen ("hall of fame1.txt", "a");
	    if (fptr == NULL) 
	    { 
	      printf("\n\nFile does not exists \n"); 
	      return; 
	    } 
	    printf("\nEnter your name: "); 
	    scanf("%s",&name);
	    
	    if(0) fprintf(fptr,"\n\t******HALL OF FAME******\n\n NAME\t\t\t\tRANKING\n ____\t\t\t\t_______\n\n");    
	    fprintf(fptr, "\n>) %s\t\t\t\t",name);
	    (dif==1)?(fprintf(fptr,"Mindless")):(fprintf(fptr,"Intelli"));		 	    
	}
	printf("\n\nCheck out the Hall of Fame menu for seeing the people \nwho had won this game.");
	
	fclose(fptr);
 }
 
fileop(int fl) //for opening
{ 
    FILE *fptr; 
    char ch;
    CLR;
    
    if(fl==2) fptr = fopen ("hall of fame2.txt", "r");
	else if(fl==1) fptr = fopen ("hall of fame1.txt", "r"); 
    if (fptr == NULL) 
    { 
      printf("\n\nCannot open file\n"); 
      exit(0); 
    } 
    ch = fgetc(fptr); 
    while (ch != EOF) 
    { 
      printf ("%c", ch); 
      ch = fgetc(fptr); 
    } 
    fclose(fptr); 
    printf("\n\nPress enter to return to main menu");
    getch();
}

int getkey()//to get a scancode of the key pressed
{
	int ch = getch();

    if ( ch == 0 || ch == 224 )
      ch = 256 + getch();

  return ch;
	
}

swap(int *a,int *b)// to swap the two variables(using call by reference)
{
	int t;
	
	t=*a;
	*a=*b;
	*b=t;
}

loading()
{
	CLR;
	printf("\nLoading source code....\nLoading interface....\nLoading game...\n(Press Enter to Continue)");
	getch();
}

int ipas(char c[])// print and scan an int
{
	int d;
	printf("\n%s",c);
	scanf(" %d",&d);
	return d;
}

int cpas(char c[])// print and scan a char
{
	char d;
	printf("\n%s",c);
	scanf(" %c",&d);
	return d;
}
