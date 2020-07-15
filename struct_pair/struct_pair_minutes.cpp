#include <math.h>       
#include <iostream>
#pragma pack(1)
using namespace std;


struct Pair {
    
   unsigned int first;
   unsigned int second;
    void Read();
    void Display();
    int minutes(unsigned int hours, unsigned int minutes); 
};
void Pair::Read(){
    
    cout << "Enter the hours: "<<endl;
    cin >> first;
    cout << "Enter the minutes: "<<endl;
    cin >> second;
   
    
}
void Pair::Display(){
    cout << "Your result: " << minutes(first, second) << endl;
}
int Pair::minutes(unsigned int hours, unsigned int minutes){
    return hours*60+minutes;
}
int main()
{
    Pair pair;
    pair.Read();
    pair.minutes(pair.first, pair.second);
    pair.Display();

    return 0;
}
