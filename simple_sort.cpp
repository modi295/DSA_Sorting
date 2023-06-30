#include<iostream>
using namespace std;
void display(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i];
    }

}
void bubble(int a[],int n){
    int i,j;
    bool swapped;
    for(int i=0;i<n-1;i++){
       int swapped=false;
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                swapped=true;
            }
        }
        if(swapped==false)
        break;
    }
}
int main(){
    int n;
    cout<<" enter the size of array"; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bubble(a,n);
    display(a,n);
}