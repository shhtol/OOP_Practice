#include <math.h>       
#include <iostream>
#pragma pack(1)
using namespace std;


struct Pair {
    
    unsigned int first;
    unsigned int second;
    void Read();
    void Display();
    int fraction(unsigned int numerator, unsigned int denominator);
};
void Pair::Read(){
    cout << "Enter your numerator: "<<endl;
    cin >> first;
    do {
    cout << "Enter your denominator: "<<endl;
    cin >> second;}
    while(second==0);
}
void Pair::Display(){
    cout << "Your result: " << fraction(first, second) << endl;
}
int Pair::fraction(unsigned int numerator, unsigned int denominator){
    return numerator/denominator;
}
int main()
{
    Pair pair;
    pair.Read();
    pair.fraction(pair.first, pair.second);
    pair.Display();

    return 0;
}
