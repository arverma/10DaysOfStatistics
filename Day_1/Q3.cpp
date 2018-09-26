#include <cmath>
#include <cstdio>
#include <iomanip>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    double dev=0.0;
    cin>>n;
    double sum = 0.0;
    double a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum +=a[i];
    }
    sum = sum /n;
    for(int i=0;i<n;i++){
        dev += pow((a[i]-sum),2);
    }
    double stddev = sqrt(dev/n);
    std::cout << std::fixed << std::setprecision(1) << stddev;
    return 0;
}
