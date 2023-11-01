#include<bits/stdc++.h>
using namespace std;

class Car{
    public:
        string engNo;
        string chessisNo;
};

class SuperCar: public Car{
    public:
        void getInfo(){
            cout << "The Engine number is: " << engNo << " and the chessis number is: " << chessisNo << endl;
        }
};

int main(){
    SuperCar g_wagon;
    cout << "We Got to Know That You Have Bought Your Dream Car. The Royal Mercedes G Wagon. " << endl;
    cout << "Following is the most required informations about your Car---" << endl;
    g_wagon.engNo = "22333AB34";
    g_wagon.chessisNo = "AB3453C123";
    g_wagon.getInfo();
    return 0;
}