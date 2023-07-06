#include<bits/stdc++.h>
using namespace std;
void insertion(vector<int>&v,int n){
    int hole,value;
    for(int i=1;i<n;i++){
        value=v[i];
        hole=i;
        while(hole>0&&v[hole-1]>value){
            v[hole]=v[hole-1];
            hole=hole-1;
        }
        v[hole]=value;
    }
}
int main(){
    int x,n;
    vector<int> v;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    insertion(v,n);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}