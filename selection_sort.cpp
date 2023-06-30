#include<bits/stdc++.h>
using namespace std;
void selection(vector<int>&v,int n){
    int j;
    for(int i=0;i<n-1;i++){
        int min=i;
        for(j=i+1;j<n;j++){
            if(v[j]<v[min])
            min=j;
        }
        swap(v[i],v[min]);
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
    selection(v,n);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}