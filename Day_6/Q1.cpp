#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>

#include <algorithm>
using namespace std;

double n_std_dev(double m, double sd, double a){
    double b = erf((a-m)/(sd*pow(2.0,0.5)));
    return 0.5*(1+b);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    double n, x, mean, sd;
    cin >> n >> x >> mean >> sd;
    mean = x*mean;
    sd = sd*pow(x, 0.5);
    cout.precision(4);
    cout <<fixed << n_std_dev(mean, sd, n);
    return 0;
}

