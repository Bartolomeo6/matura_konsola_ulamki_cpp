#include <iostream>

using namespace std;

// x - ułamek dziesiętny
// k - liczba miejsc po przecinku

void binaryFraction(const double x, unsigned int k){
    cout<<"0.\n";
    double y = x;
    
    for(int i = 1; i<=k; i++){
        if(y>=0.5){
            cout<<"["<<i<<"]"<<"1"<<endl;
        }
        else{
            cout<<"["<<i<<"]"<<"0"<<endl;
        }
        
        y*=2;
        
        if(y>=1){
            y-=1;
        }
    }
}

// wystarczą dwie liczby, żeby komputer widział to
// jako ułamek z rozwinięciem nieskończonym

void tripleFraction(const double x, unsigned int k){
    cout<<"0.";
    double y = x;
    for(int i = 1; i<=k; i++){
        if(y>=0.666){
            cout<<"2";
        }
        else if(y<0.666 && y>=0.333){
            cout<<"1";
        }
        else if(y<0.333){
            cout<<"0";
        }
        
        y*=3;
        
        if(y>=2){
            y-=2;
        }
        else if(y>=1){
            y-=1;
        }
    }
}

int main() {
    
    binaryFraction(0.125, 5);
    cout<<"----------------"<<endl;
    tripleFraction(0.625, 5);
    
    return 0;
}