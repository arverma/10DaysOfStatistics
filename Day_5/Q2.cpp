#include <cmath>
#include <cstdio>
//#include <iomanip>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    float a,b;
    cin>>a>>b;
    a = 160.00 + 40.00*(a + pow(a,2));
    b = 128.00 + 40.00*(b + pow(b,2));
    cout.precision(3);
    cout<<fixed<<a<<"\n"<<b;
    return 0;
}
