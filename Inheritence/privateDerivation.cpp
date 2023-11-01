#include<bits/stdc++.h>
using namespace std;

class Time{ //made a class Time having data members as minutes and seconds as private. Also data member hours and method setTime and displayTime as public.
    private:
        int minutes;
        int seconds;
    public:
        int hours;
        void setTime(int hrs, int mins, int secs){
            hours = hrs;
            minutes = mins;
            seconds = secs;
        }

        void displayTime(){
            cout << hours << ": ";
            cout << minutes << ": ";
            cout << seconds << ": ";
        }
};

// The class Clock is inherited from class  Time through visibility "private". Also it have data members like str and methods like setClock, displayClock and setAMPM.
class Clock: private Time{ 
    private:
        char str[2];
    public:
        void setClock(int hrs, int mins, int secs){
            setTime(hrs, mins, secs);
        }
        void displayClock(){
            displayTime();
            cout << str << endl;
        }
        void setAMPM(){
            if(hours > 12)
                strcpy(str, "PM");
            else 
                strcpy(str, "AM");
        }
};

int main(){
    Clock t1, t2; // objects created

    // time set 
    t1.setClock(10, 15, 37);
    cout << "Time for t1 is: " << endl;
    t1.setAMPM();
    t1.displayClock();
    
    t2.setClock(10, 15, 37);
    cout << "Time for t2 is:" << endl;
    t2.setAMPM();
    t2.displayClock();
    return 0;
}

/*
Here, since the derivation is "private", the protected and public members will be private in the derived class. So the member functions "setTime()" and "displayTime()" are not accesssible inside function "main()".
*/