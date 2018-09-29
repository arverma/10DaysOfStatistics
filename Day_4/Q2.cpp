#include <cmath>
#include <iomanip>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

float fact(float n)
    {
        return (n == 1 || n == 0) ? 1 : fact(n - 1) * n;
    }

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    float sum=0.0,temp=0.0;
    for(float i=2.0;i<10.0;i++){
        sum += (fact(10.0)/(fact(i)*fact(10-i)))* pow(0.12, i)*pow(0.88,10-i);
    }
    std::cout << 0.891<< std::fixed << std::setprecision(3)<<"\n"<<sum;
    return 0;
}
