#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    int q[3];
    int a[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
             int temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
    /*for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";*/
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
    cout<<q[1]<<"\n"<<q[0]<<"\n"<<q[2];
    
    return 0;
}
