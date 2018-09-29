#include <cmath>
#include <cstdio>
#include <iomanip>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    float a = 0.0;
    for(float i=1.0;i<=5.0;i++){
        a += pow(1.00/3.00,1)*pow(2.00/3.00,i-1.00);
    }
    std::cout << std::fixed << std::setprecision(3)<<a;
        
    return 0;
}
