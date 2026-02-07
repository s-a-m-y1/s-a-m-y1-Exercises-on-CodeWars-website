#include<iostream>
#include<string>
using namespace std;

class CountDig {
public:
    static int nbDig(int n, int d) {
        int Counter = 0;
        char D = to_string(d)[0]; 

        for(int k = 0; k <= n; k++) {
            long long SQ = (long long)k * k; 
            string sqs = to_string(SQ);     
            
            for(char C : sqs) {             
                if (C == D) {               
                    Counter++;             
                }
            }
        }
        return Counter; 
    }
};

int main() {
    
    cout << "Result: " << CountDig::nbDig(5750, 0) << endl; 
    return 0;
}