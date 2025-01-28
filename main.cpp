#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the size of the array you want to work with here: ";
cin>>n;
int arr[n];
cout<<"Enter elements in the array"<<endl;
for(int i=0; i<n; i++){
    cout<<"Value "<<i+1<<": ";
    cin>>arr[i];
}
for(int j=0; j<n; j++){
    cout<<arr[j]<<" ";
    }
    cout<<endl;
for(int k=n-1; k>=0; k--){
    cout<<arr[k]<<" ";
}
    cout<<endl;
return 0;
}
