#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    float a[2500];
    int count[2500];
    int n;
    cin>>n;
    float sum = 0;
    float median = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        count[i]=1;
        sum +=a[i];
    }
    for(int i=0;i<n;i++)
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp = a[j+1];
                a[j+1] = a[j];
                a[j] =temp;
            }
        }
    if(n%2==0){
        median=(a[n/2]+a[(n/2)-1])/2;
    }
    else
        median=a[(n+1)/2];
    int i=0;
    while(i<n-1){
        int k=1;
        int j=0;
        while(a[i+k-1]==a[i+k]){
            //int j=i;
            k++;
            while(i+j < i+k){
                count[i+j++]=k;
            }
        }
        i = i+count[i];
    }
    
     /*for(int j=0;j<n;j++){
            cout<<a[j]<<" ";
            }   
     cout<<"\n";
    for(int j=0;j<n;j++){
            cout<<count[j]<<" ";
            }   
     cout<<"\n";*/
    
    int max = *std::max_element(count, count+n);
    //cout<<max<<"\n";
    int mod = *std::max_element(a, a+n);
    for(int i=0;i<n;i++){
         if(count[i]==max && a[i]<mod){
             mod = a[i];
         }   
    }
    
    cout<<sum/n<<"\n"<<median<<"\n"<<mod;
    
    
    return 0;
} 
