#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;
char decision;
bool quit=0;
int nDot = 0; long long iterration = 0;
void Initialization(){
    cout << "\n\n\n";
}


void clearScreen(long long _length = 99){
    printf ("\n\n\n\n\n\n\n\n");
}

void timer(bool _return = 0){
 for(long long temp1;temp1<=999999999999;temp1++){
     for(long long temp2;temp2<=999999999999;temp2++)
     
 }   
 if (_return == 1) return 1;
}

short Menu(){
if (iterration > 0) iterration = 0;
clearScreen(); 
cout << "          //\\\\           ||‾‾‾‾\\\\               //\\\\             ______________     ______________    ||                  //#########\n";
cout << "         //  \\\\          ||     \\\\             //  \\\\            ‾‾‾‾‾‾||‾‾‾‾‾‾     ‾‾‾‾‾‾||‾‾‾‾‾‾    ||                 ||‾‾‾‾‾‾‾‾‾‾\n";
cout << "        //    \\\\         ||     ||            //    \\\\                 ||                 ||          ||                 ||          \n";
cout << "       //      \\\\        ||     ||           //      \\\\                ||                 ||          ||                 ||__________\n";
cout << "      //        \\\\       ||____//           //        \\\\               ||                 ||          ||                 ||##########\n";
cout << "      \\\\        //       ||     \\\\         //__________\\\\              ||                 ||          ||                 ||‾‾‾‾‾‾‾‾‾‾\n";
cout << "       \\\\      //        ||      \\\\       //‾‾‾‾‾‾‾‾‾‾‾‾\\\\             ||                 ||          ||                 ||          \n";
cout << "        \\\\    //         ||      ||      //              \\\\            ||                 ||          ||                 ||          \n";
cout << "         \\\\  //          ||      //     //                \\\\           ||                 ||          ||_____________    ||__________\n";
cout << "          \\\\//           ||_____//     //                  \\\\          ||                 ||           \\\\############     \\\\#########\n";
cout << "\n\n\tWELCOME TO THE SEA BATTLE\t\t THE RULE SIMPLE IF YOUR'S ALL SHIPS WILL BE DROWNED, YOU LOSE";
cout << "\n\n\tControls - C\n\tOptions - O\n\tDetails of rules - R\n\tPlay - P\n\tQuit - Q\n\tYour decision : ";
cin >> decision;
if (decision == 'C' | decision == 'c'){

} else if (decision == 'O' | decision == 'o'){

} else if (decision == 'R' | decision == 'r'){

} else if (decision == 'P' | decision == 'p'){
    
} else if (decision == 'Q' | decision == 'q'){
  clearScreen();
  cout << "\n\n\n\n\t\tARE YOU SURE?\n\n\t\tY or N\n\n\tYour decision ? || ";
  cin >> decision;
  if (decision == 'Y' | decision == 'y'){
      cout << "\n\n\tOk, wait a minute";
      }

  }
  else if (decision == 'N' | decision == 'n') Menu();
} else {
    clearScreen();
    cout << "\n\n\t\tPLEASE TYPE CORRECT SYMBOL. YOUR SYMBOL WAS : " << decision;
     
    }
}




int main(){
    Initialization();
    Menu();

}