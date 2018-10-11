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
    double mean, sd, x ,y ,z;
    cin >> mean >> sd >> x >> y;
    cout.precision(2);
    cout <<fixed << (1- n_std_dev(mean, sd, x))*100.00 <<endl << (1 - n_std_dev(mean,sd,y))*100.00<<endl<<n_std_dev(mean,sd,y)*100.00 ;
    return 0;
}