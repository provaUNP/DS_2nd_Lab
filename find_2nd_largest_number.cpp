#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int smax=INT_MIN;
    for(int i=0;i<n;i++){
            if(arr[i]>smax&&arr[i]<max){
                smax=arr[i];
            }
    }
    cout<<"Second Largest: "<<smax;
}