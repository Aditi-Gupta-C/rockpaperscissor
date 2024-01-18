#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
using namespace std;
const char rps[]="rps";
//int strLen = sizeof(rps);

int main(){
    cout<<"                             ROCK PAPER SCISSOR WITH COMPUTER"<<endl<<endl;
    cout<<"read before play :"<<endl;
    cout<<"r : rock ,  p : paper , s : scissor"<<endl<<endl;
cout<<"BEST OF LUCK"<<endl;
 string userName;
cout<<"Enter your name : ";
cin>>userName;
  char c='y';
  while (c){

    //int n = 3;
srand(time(0));
///cout<<rps[rand()%3];
char computer = rps[rand()%3];
//cout<<computer;

char userChoice;cout<<"Your choice : ";
cin>>userChoice;
if (userChoice=='s' || userChoice=='r' || userChoice=='p'){
    if (userChoice==computer)cout<<"game tie";
    else if (userChoice=='r' && computer=='p' ) {
            cout<<"Computer win You loose,";
            cout<<"paper covers rock";}
    else if (userChoice=='r' && computer=='s') {
        cout<<userName<<" You win Computer loose,";
        cout<<"rock damage scissor"; }
          else if (userChoice=='p' && computer=='s' ) {
            cout<<"Computer win You loose,";
            cout<<"scissor cuts paper";}
    else if (userChoice=='p' && computer=='r') {
        cout<<userName<<" You win Computer loose,";
        cout<<"paper covers rock"; }
          else if (userChoice=='s' && computer=='r' ) {
            cout<<"Computer win You loose,";
            cout<<"rock damage scissor";}
    else if (userChoice=='s' && computer=='p') {
        cout<<userName<<" You win Computer loose,";
        cout<<"scissor cuts paper"; }
        }
else
    cout<<"Wrong input by you ";
cout<<endl;

cout<<"Computer choose : "<<computer<<endl;
cout<<"***********************Game Over****************************"<<endl<<endl;
cout<<"Play Again y/n : ";
cin>>c;
if (c=='n' || c=='N') break;
  }
return 0;
}
