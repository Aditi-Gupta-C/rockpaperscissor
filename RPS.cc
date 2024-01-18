#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main() {
    cout<<"-----------------------------ROCK PAPER SCISSOR--------------------------"<<endl;
     cout<<"                             Author:Aditi                                 "<<endl;

cout<<"r : r as rock"<<endl;
cout<<"p : p as paper:"<<endl;
cout<<"s : s as scissor:"<<endl;

    char c='y';
    while (c){
    string player1,player2;
    cout<<"player1 : " ;cin>>player1;
    //cout<<end;
    cout<<"player2 : " ;cin>>player2;


    string input;
    string input1;
    char ch;

int i=0;while (i<2){

    if (i==0){
    std::cout << "Enter your choice " <<player1<<": ";}
    if (i==1){cout<<"Enter your choice "<<player2<<": ";}


    while ((ch = _getch()) != '\r') {  // Read characters until Enter (Return) is pressed
        if (ch == '\b') {  // Handle backspace
                if (i==0){
            if (!input.empty()) {
                input.pop_back();
                cout << "\b \b";
            }
            else {
                if (!input1.empty()) {
                input1.pop_back();
                cout << "\b \b";
            }
            }

            }
        } else {if (i==0){
            input.push_back(ch);
            cout << '*';  // Print asterisks instead of actual characters
        }
        else {
            input1.push_back(ch);
            cout << '*';  //
        }
        }
        }



    i++;cout<<endl;}
  //  if (input!="s"|| input!="p" || input!="r") cout<<"wrong input";
  if ((input=="s" || input=="p"|| input=="r")&&(input1=="s" || input1=="p"||input1=="r") ){
    if ( input==input1) cout<<"match darw";
    else if (input=="r" && input1=="p") {cout<<player2<<" win"<<endl; cout<<"paper covers rock";}

      else if (input=="r" && input1=="s") {cout<<player1<<" win"<<endl; cout<<"rock break scissor";
    }
    else if (input=="p" && input1=="r") {cout<<player1<<" win"<<endl; cout<<"paper covers rock";
    }else if (input=="p" && input1=="s") {cout<<player2<<" win"<<endl; cout<<"scissor cuts paper";
    }else if (input=="s" && input1=="r") {cout<<player2<<" win"<<endl; cout<<"rock break scissor";
    }else if (input=="s" && input1=="p") {cout<<player1<<" win"<<endl; cout<<"scissor cuts paper";
    }
  }
    else
        cout<<"Wrong input"<<endl;



    std::cout << std::endl;
    std::cout << "Entered player1: " << input << std::endl;
    std::cout << "Entered player2: " << input1 << std::endl;
cout<<"Do you want to continue ? y/n "<<endl;
cin>>c;
if (c=='n' || c=='N') break;
}



    return 0;
}
