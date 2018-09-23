#include <cmath>
#include <cstdio>
#include <iomanip>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    float n;
    float w[100],x[100];
    float sum = 0.0;
    float total =0.0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    for(int i=0;i<n;i++){
        cin>>w[i];
    }
    for(int i=0;i<n;i++){
        sum += w[i]*x[i];
        total +=w[i];
    }
    //cout<<sum/total<<2.0+4.0;
    std::cout << std::fixed << std::setprecision(1) << sum/total;
    return 0;
}
