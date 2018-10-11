
#include <cmath>
#include <cstdio>
#include <iomanip>
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
    float e =2.71828, lambda =2.5, k = 5.0;
    float ans = 0.0; 
    cin>>lambda>>k;
    ans = pow(lambda, k)*pow(e, -lambda)/fact(k);
    std::cout << std::fixed << std::setprecision(3)<<ans;
    return 0;
}
