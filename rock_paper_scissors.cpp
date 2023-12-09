#include <iostream>
using namespace std;
main(){
    cout <<  "*******welcome to rock paper scissors*****" << "\n";
    cout << "rock(1), paper(2) or scisors?(3)" << endl;
    int choice;
    cin >> choice;
    int x = (rand() % 3) + 1;
    cout << "Computer move: " << x << endl;
        if (choice ==1){
            if (x == 1){
                cout << "Draw";
                }
            else if (x == 2){
                cout << "Win";
            }
            else{
                cout << "Lose";
            } 
            }
        else if (choice == 2){
            if (x == 1){
                cout << "Win";
                }
            else if (x == 2){
                cout << "Draw";
            }
            else{
                cout << "Lose";
            } 
            }
        else if (choice == 3){
            if (x == 1){
                cout << "Lose";
                }
            else if (x == 2){
                cout << "Win";
            }
            else{
                cout << "Draw";
            } 
        }
        else{
            cout << "You must enter a number between 1-3";
    }

    return 0;
}

