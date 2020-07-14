#include <math.h>       
#include <iostream>
#pragma pack(1)
using namespace std;


struct Pair {
    
    float first;
    float second;
    float num;
    void Read();
    void Display();
    bool rangecheck(float left, float right, float num); 
};
void Pair::Read(){
    
    cout << "Enter your left limit: "<<endl;
    cin >> first;
    cout << "Enter your right limit: "<<endl;
    cin >> second;
    cout << "Enter your number: "<<endl;
    cin >> num;
    
}
void Pair::Display(){
    cout << "Your result: " << rangecheck(first, second, num) << endl;
}
bool Pair::rangecheck(float left, float right, float num){
    return (num>left && num<right);
}
int main()
{
    Pair pair;
    pair.Read();
    pair.rangecheck(pair.first, pair.second, pair.num);
    pair.Display();

    return 0;
}
