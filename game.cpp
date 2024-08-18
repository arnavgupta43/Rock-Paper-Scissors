#include<iostream>
#include<random>
#include<ctime>
using namespace std;
main()
{ 
    int inp;
    int won=0,lost=0,draw=0;
    cout<<"*********GAME STARTS**********"<<endl;
    cout<<"1-ROCK"<<endl<<"2-PAPER"<<endl<<"3-SCISSORS"<<endl<<"4-END GAME"<<endl;
    do{
        cout<<"enter your choice"<<endl;
           cin>>inp;
       unsigned seed =time(0);
    mt19937 gen(seed);
    uniform_int_distribution<> distr(1,3);
    int random_number = distr(gen);
    switch(inp)
    {
        case 1:
                if (random_number == 1) {
                    cout << "Draw" << endl;
                    draw++;
                } else if (random_number == 2) {
                    cout << "Lost" << endl;
                    lost++;
                } else if (random_number == 3) {
                    cout << "Won" <<endl;
                    won++;
                }
                break;
    case 2: 
                 if (random_number == 1) {
                    cout << "won" << endl;
                    won++;
                } else if (random_number == 2) {
                    cout << "draw" << endl;
                    draw++;
                } else if (random_number == 3) {
                    cout << "lost" << endl;
                    lost++;
                }
                break;
    case 3:
                if (random_number == 1) {
                    cout << "lost" << endl;
                    lost++;
                } else if (random_number == 2) {
                    cout << "won " << endl;
                    won++;
                } else if (random_number == 3) {
                    cout << "draw" << endl;
                    draw++;
                }
                break;
    default:
    cout<<"incorrect input "<<endl;
    break;
    
    }
}while(inp!=4);
cout<<"here is your analysis of our game"<<endl;
cout<<"won:"<<won<<endl;
cout<<"lost:"<<lost<<endl;
cout<<"draw:"<<draw<<endl;
return 0;
}