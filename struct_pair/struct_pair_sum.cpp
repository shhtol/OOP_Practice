#include <math.h>       
#include <iostream>
#pragma pack(1)
using namespace std;


struct Pair {
    
    unsigned int first;
    unsigned int second;
    void Read();
    void Display();
    int summa(unsigned int denomination, unsigned int number);
};
void Pair::Read(){
    do{
    cout << "Enter your denomination: "<<endl;
    cin >> first;}
    while(first != 1 && first != 2 &&  first != 5 &&  first != 10 && 
    first != 50 &&  first != 100 &&  first != 500 &&  first != 1000 &&  first != 5000 );
    
    cout << "Enter your number: "<<endl;
    cin >> second;
    
}
void Pair::Display(){
    cout << "Your result: " << summa(first, second) << endl;
}
int Pair::summa(unsigned int denomination, unsigned int number){
    return denomination*number;
}
int main()
{
    Pair pair;
    pair.Read();
    pair.summa(pair.first, pair.second);
    pair.Display();

    return 0;
}
