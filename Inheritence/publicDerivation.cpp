#include<bits/stdc++.h>
using namespace std;

class Time{ // made a class holding minutes and second as private entity and hour as public. It also has the methods setTime and displayTime in public section.
    private:
        int minutes;
        int seconds;
    public:
        int hours; // as we need hours to be used further so we have put it in the public section.
        void setTime(int hrs, int min, int sec){
            hours = hrs;
            minutes = min;
            seconds = sec;
        }

        void displayTime(){
            cout << hours << ": ";
            cout << minutes << ": ";
            cout << seconds;
        }
};

/*
set the visibility specifier to be "publlic" as it can access the data members as well as the member functions of the class Time, which are set public. 
*/
class Clock: public Time{ 
    private:
        char str[2]; // str will be storing the "meridians". 
    public:
        void setAMPM(){ // the method will set the meridians
            if(hours > 12)
                strcpy(str, "PM");
            else
                strcpy(str, "AM");
            
            cout << str << endl;
        }

};

int main(){
    Clock t1, t2; // created two objects to check the code with both AM and PM
    t1.setTime(7, 25, 40);
    t2.setTime(15, 45, 58);

    cout << "Time set for T1 is ";
    t1.displayTime();
    t1.setAMPM();

    // cout << endl;

    cout << "Time set for T2 is ";
    t2.displayTime();
    t2.setAMPM();
    return 0;
}