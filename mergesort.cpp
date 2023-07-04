#include<iostream>
using namespace std;
void merge(int a[],int lb,int mid,int ub){
    int i=lb;
    int j=mid+1;
    int k=lb;
    int b[k];
    while(i<=mid && j<=ub){
        if(a[i]<=a[j]){
            b[k]=a[i];
            i++;
            k++;
        }
        else{
            b[k]=a[j];
            j++;
            k++;
        }
    }
    if(i>mid){
        while(j<=ub){
            b[k]=a[j];
            j++;
            k++;
        }
    }
    else{
        while(i<=mid){
            b[k]=a[i];
            i++;
            k++;
        }
    }
    for(k=lb;k<=ub;k++){
        a[k]=b[k];
    }
}

void mergesort(int a[],int lb,int ub){
if(lb<ub){
    int mid=(lb+ub)/2;
    mergesort(a,lb,mid);
    mergesort(a,mid+1,ub);
    merge(a,lb,mid,ub);
}
}
void display(int a[],int n){
    for(int i=0;i<=n;i++){
        cout<<a[i];
    }
}

int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int a[n];
    cout<<"enter element in array";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    mergesort(a,0,n);
    display(a,n);
}