
//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries
const int SIZE=12;

struct Player{
    int points=0;
    string name;
};

enum Pchoice{
    A,B,C,D,E,J,I,H,G,F
};

//Function Prototypes
void setBoard(int []);
void dBrd(int [], Player, Player); //Eduardo
void turn(Player, int [],int,int); //Joe
int selection(char);

//Execution Begins Here
int main(int argc, char** argv) {
    Player p1, p2;    
    int board[SIZE];
    
    p1.name="Bob";
    p2.name="Dan";
    setBoard(board);
    dBrd(board,p1,p2);
    
    turn(p1, board,0,4);
    dBrd(board,p1,p2);
    turn(p2, board,5,9);
    dBrd(board,p1,p2);
    
    return 0;
}

void setBoard(int board[SIZE]) {
    //Setting Board
    for(int i=0; i<SIZE; i++) {
        board[i] = 4;
    }
}

void turn(Player player,int board[SIZE],int min,int max) {
    char choice;
    int ind;
    int move = 0;
    Pchoice indexMin,indexMax;
    indexMin = static_cast<min>(int);

    
    cout << "player name: " << player.name << endl;
    cout << "player score: " << player.points << endl;
    cout << "Min " << min << "\tMax " << max << endl;
    cin >> choice;
    
    ind = selection(choice);
    if (ind <= min || ind >=max )
    {
        
        
    }
    int rep = board[ind];
    for (int i = 0; i < rep; i++) {
        move = board[ind];
        board[ind] = 0;
        board[ind + i + 1] += 1;
        move--;
    } 
    
}

void dBrd(int B[SIZE], Player p1, Player p2){
    cout << "_______________________\n";
    cout << "|    | A B C D E |    |\n";
    cout << "| p2 |___________| p1 |\n";
    cout << "|    |-"<<B[0]<<"-"<<B[1]<<"-"<<B[2]<<"-"<<B[3]<<"-"<<B[4]<<"-|    |\n";
    cout << "|  "<<p1.points<<" |-----------| "<<p2.points<<"  |\n";
    cout << "|    |-"<<B[9]<<"-"<<B[8]<<"-"<<B[7]<<"-"<<B[6]<<"-"<<B[5]<<"-|    |\n";
    cout << "|    |___________|    |\n";
    cout << "|    | F G H I J |    |\n";  
    cout << "_______________________\n";
}

int selection(char choice) {
    choice = toupper(choice);
    Pchoice X;
    if (choice == 'A') {
        X = A;
    } else if (choice == 'B') {
        X = B;
    } else if (choice == 'B') {
        X = B;
    } else if (choice == 'C') {
        X = C;
    } else if (choice == 'D') {
        X = D;
    } else if (choice == 'E') {
        X = E;
    } else if (choice == 'F') {
        X = F;
    } else if (choice == 'G') {
        X = G;
    } else if (choice == 'H') {
        X = H;
    } else if (choice == 'I') {
        X = I;
    } else if (choice == 'J') {
        X = J;
    }
    return X;
}