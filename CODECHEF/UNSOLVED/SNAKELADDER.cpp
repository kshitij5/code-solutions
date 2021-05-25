#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int, int>
#define mod 1000000007
#define endl '\n'

signed main(){
    int board[101] = {0};
    int ladderOrSnake[101] = {0};

    int no_of_snakes = 0;
    cin >> no_of_snakes;

    for(int i = 0; i < no_of_snakes; i++){
        int length = rand() % 30 + 1;
        int face = rand() % 100 + 1;

        if(face>length && board[face]==0){
            board[face] = face - length;    //we will store at the face, the adress of tail
            ladderOrSnake[face] = -1;   //for snakes we give 1
        }
    }

    int no_of_ladders = 0;
    cin >> no_of_ladders;

    for(int i = 0; i < no_of_ladders; i++){
        int length = rand() % 30 + 1;
        int face = rand() % 100 + 1;

        if(face<100 && board[face]==0){
            board[face] = face + length;    //we will store at the face, the adress of tail
            ladderOrSnake[face] = 1;   //for ladder we give 1
        }
    }

    for(int i = 1; i <= 100;i++){
        cout << ladderOrSnake[i] << " | ";
        if(i%10==0) cout << endl;
    }
    cout << endl;


    int player = 0;
    while(player<100){
        int counter = rand() % 6 +1;
        cout << "Press 1 to throw dice or 0 to exit" << endl;
        int pressed;
        cin >> pressed;

        if(!pressed){
            cout << "You Exited the Game" << endl;
            break;
        }

        cout << "Dice rolled to: " << counter << endl;

        if(counter+player > 100){
            cout << "Invalid Throw" << endl;
            continue;
        }

        if(ladderOrSnake[player+counter] == -1){
            player = board[player+counter];
            cout << "Snake bit you" << endl;
        }else if(ladderOrSnake[player+counter] == 1){
            player = board[player+counter];
            cout << "You hopped Ladder" << endl;
        }else{
            player += counter;
        }
            cout << "You are now at Position: " << player << endl;
    }
    return 0;
}