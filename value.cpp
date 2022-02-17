#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int b[n];
        int i=0;
        
        int k=0;
        while(i<n-1){
            b[k]=abs(a[i+1]-a[i]);
            k++;
            i++;    
            
            
        }
        int flag=0;
        for(int i=0;i<k;i++){
            if(abs(b[i+1]-b[i])==1){
                
                
                flag=1;
                break;
            }
        }
        if(flag==1){
        cout<<"Correct Formation"<<endl;
        }
        else{
            cout<<"Incorrect Formation"<<endl;
        }
        t--;
    }
    return 0;
}
