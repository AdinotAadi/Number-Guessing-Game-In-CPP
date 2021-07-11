#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int randgen();

int main(){
    int gennum = randgen();
    int mynum, count;
    count = 0;
    cout<<"This is a Number Guessing Game!"<<endl;
    mynum = 0;
    while(true){
        cout<<"Guess a number between 1-100:";
        cin>>mynum;
        if(mynum == gennum){
            cout<<"You Guessed it Right!"<<endl;
            cout<<"The correct number was: "<<gennum<<endl;
            cout<<"You took "<<count<<" tries."<<endl;
            break;
        }
        else if(mynum < gennum){
            cout<<"Number too small. Guess Higher"<<endl;
            count+=1;
        }
        else{
            cout<<"Number too big. Guess Lower"<<endl;
            count+=1;
        }
    }
    return 0;
}

int randgen(){
    srand((unsigned) time(0));
    int randnum = (rand()%100);
    return randnum;
}