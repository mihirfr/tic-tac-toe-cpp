#include <iostream>
using namespace std;

char square[10] = {'o','1','2','3','4','5','6','7','8','9'};

int checkwin()
{
   if (square[1] == square[2] && square[2] == square[3])
   {
      return 1;
   }
   else if (square[4] == square[5] && square[5] == square[6])
   {
      return 1;
   }
   else if (square[7] == square[8] && square[8] == square[9])
   {
      return 1;
   }
   else if (square[1] == square[4] && square[4] == square[7])
   {
      return 1;
   }
   else if (square[2] == square[5] && square[5] == square[8])
   {
      return 1;
   }
   else if (square[3] == square[6] && square[6] == square[9])
   {
      return 1;
   }
   else if (square[1] == square[5] && square[5] == square[9])
   {
      return 1;
   }
   else if (square[3] == square[5] && square[5] == square[7])
   {
      return 1;
   }
   else if (square[1]!='1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
   {
      return 0;
   }
   else
   {
      return -1;
   }
}


void table()
{

   cout << " " << square[1] << " | " << square[2] << " | " << square[3] << endl;
   cout<< "___|___|___" << endl;
   cout << " " << square[4] << " | " << square[5] << " | " << square[6] << endl;
   cout << "___|___|___" << endl;
   cout << " " << square[7] << " | " << square[8] << " | " << square [9] << endl;
   cout << "   |   |   " << endl;

}
//step 1 : Display the board. user can check from that whaat they want to chose
int main()
{  
   int choice;
   int result;
   for(int turn = 0; turn < 10; turn++){
      table();
      if (turn % 2 == 0) {
         cout << "Player 1's turn (X), enter a spot from the table to make your mark" << endl;
         cin >> choice;
         if (square[choice] != 'X' && square[choice] != 'O' && choice >=1 && choice <= 9)
         {
            square[choice] = 'X';
         }
         else 
         {
         cout<< "This spot is already filled!"<< endl;
         turn--;
         }
         }
      else {
         cout<< "Player 2's Turn (O), enter a spot from the table to make your mark" << endl;
         cin >> choice;

         if (square[choice] != 'X' && square[choice] != 'O' && choice >=1 && choice<=9)
         {
            square[choice] = 'O';
         }
         else 
         {
            cout<< "This spot is already filled!"<< endl;
            turn--;
         }}
      result = checkwin();
      if (result == 1)
      {
         cout<< "Gameover!";
         break;
      }
      else if(result == 0)
      {
         cout << "Game Draw!";
         break;
      }
}
   return 0;
}