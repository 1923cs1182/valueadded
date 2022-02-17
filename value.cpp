#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    int t;
    cin>>t;
    while(t){
        int n;
        cin>>n;
        int sum=0;
        int a[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
       for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
               if(i==j||i==0||j==n-1||i==n-1||i+j==n-1||j==0){
                  sum+=a[i][j]; 
               }
           }
           
           
       }    
        cout<<sum<<endl;
        
        t--;
    }

    
    return 0;
}
