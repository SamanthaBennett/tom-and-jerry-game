//TO-DO: Samantha Bennett
//TO-DO: 2/16/2023
//CS1428 Lab
//Lab 3

/* Description: this program will allow the user to play 
Tom-And-Jerry game against a randomized computer opponent*/

//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int user_num;  //user's choice
    int comp_num;  //computer's choice

  // Generate the computer's choice randomly:
    srand(time(NULL));
    comp_num = rand() % 3 + 1;

  // Get the user's choice:
    cout << "Tom-And-Jerry Game" << endl
         << " 1. Spike" << endl
         << " 2. Tom" << endl
         << " 3. Jerry" << endl
         << "Enter a number : ";
    cin >> user_num;
    cout << endl;


  //TODO: Determine if the user wins, loses, or ties (or enters invalid input):
    if (comp_num == 1 && user_num == 1) {
    cout <<"you both choose spike its a tie" << endl;
  }
    else if (comp_num == 2 && user_num == 2) {
    cout <<"you both choose tom its a tie" << endl;
  }
    else if (comp_num == 3&& user_num==3){
    cout <<"you both choose jerry its a tie" << endl;
  }
    else if (comp_num == 1 && user_num==2 || comp_num == 2 && user_num==1){
    cout <<"Spike beats Tom" << endl;
  }
    else if (comp_num == 1 && user_num==3 || comp_num == 3 && user_num==1){
    cout <<"Jerry beats Spike" << endl;
  }
    else if (comp_num == 2 && user_num== 3 || comp_num == 3 && user_num== 2){
    cout <<"Tom beats Jerry" << endl;
  }
    else {
  cout<<"invalid" <<endl;  
    }
    
  // Exit the program:
    return 0;
}
