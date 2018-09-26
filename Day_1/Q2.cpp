#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    float total=0.0;
    int n;
    float q[3];
    float x[100],f[100],a[10000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    
    for(int i=0;i<n;i++){
        cin>>f[i];
        total+=f[i];
    }
    int k=0;
    for(int i=0;i<total;i++){
        int j=0;
        while(j<f[i]){
            a[k++]=x[i];
            j++;
        }
    }
    
    /*for(int i=0;i<total;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    */
    n = total;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
             int temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
    
    
    int m = n/2;
    int m1=0,m2=0;
    for(int i=0;i<2;i++){
       // cout<<" m1 = "<<m1<<" m2 = "<<m2<<"\n";
        if(n%2 ==0){
            if(i==0){
                q[i] = (a[m]+a[m-1])/2;
                n = n/2;
                m1 = n/2;
                m2= n + n/2;}
            else{
                q[i] = (a[m1]+a[m1-1])/2;
                q[i+1] = (a[m2]+a[m2-1])/2;
            }
        } 
        else{
            if(i==0){
                q[i] = a[m];
                n = n/2;
                m1 = n/2;
                m2=(n+1) + n/2;
            }
            else{
                q[i] = a[m1];
                q[i+1] = a[m2];
            }
        }
    }
    std::cout << std::fixed << std::setprecision(1)<<q[2]-q[1];
    
    return 0;
}
