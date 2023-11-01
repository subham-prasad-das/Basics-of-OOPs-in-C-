/*
-> Constructor plays  an important role in initializing the objects.
-> They are not inherited and this is why derived class must have a special constructor.
-> The derived class dont need a constructor as long as the base class has a constructor without argument.
-> But if the base class has an argument then the derived class must have a constructor which will pass the arguments to the base class.
-> When an object of a derived class is created, the constructor of the base class is executed first and then the constructor of the derived class is executed.
*/

#include<bits/stdc++.h>
using namespace std;

class Time{
    protected:
        int mints;
        int secs;
        int hours;
    
    public:
        
};

int main(){
    
    return 0;
}