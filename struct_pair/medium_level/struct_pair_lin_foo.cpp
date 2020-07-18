#include <math.h>       
#include <iostream>
#pragma pack(1)
using namespace std;


struct Pair {
    
    float first;
    float second;
    float x;
    void Read();
    void Display();
    float lin_foo(float A, float B, float x); 
};
void Pair::Read(){
    
    cout << "Enter A for y=Ax+B: "<<endl;
    cin >> first;
    cout << "Enter B for y=Ax+B: "<<endl;
    cin >> second;
    cout << "Enter x for y=Ax+B: "<<endl;
    cin >> x;
   
    
}
void Pair::Display(){
    cout << "Your result: " << lin_foo(first, second, x) << endl;
}
float Pair::lin_foo(float A, float B, float x){
    return A*x+B;
}
int main()
{
    Pair pair;
    pair.Read();
    pair.lin_foo(pair.first, pair.second, pair.x);
    pair.Display();

    return 0;
}
