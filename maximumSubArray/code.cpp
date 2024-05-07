#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    int arr[n]={};
    int x;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr[i]=x;
    }
    int sum;
    int result;
    for (int i=0;i<n;i++){
        if(sum+arr[i]<arr[i]){
            sum=arr[i];
        }else{
            sum=sum+arr[i];
        }
        result=max(result,sum);
        cout <<"sum :"<< sum << "result :"<< result << "\n";
    }
    // cout << sum << "\n"; 
}