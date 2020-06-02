#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;
char decision;
bool quit=0;
int nDot;
void Initialization(){
    cout << "\n\n\n";
}

short Menu(){
system("clear");    
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
  system("clear");
  cout << "\n\n\n\n\t\tARE YOU SURE?\n\n\t\tY or N\nYour decision ? || ";
  cin >> decision;
  if (decision == 'Y' | decision == 'y'){
      cout << "\n\n\tOk, wait a minute";
      while (nDot)
      for (int temp1 = 0;temp1 <999999999;temp1++){
          if (temp1 == 1) cout << '.'
      }

  }
  else if (decision == 'N' | decision == 'n')
  return 1;
} else if {
    System("clear");
    cout << "\n\n\t\tPLEASE TYPE CORRECT SYMBOL. YOUR SYMBOL WAS : " << decision;

}
}




int main(){
    Initialization();
    Menu();

}