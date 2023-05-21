#include<iostream>
using namespace std;
int peakelement(int arr[], int n){
  int s=0;
  int e=n-1;
  int mid = s + (e-s)/2;
  while (s<0) {
    if(arr[mid]<arr[mid+1]){
      s = mid+1;
    }
    else{
      e = mid;
    }
     mid = s + (e-s)/2;
  }

  return s;
}
int main(){
  int arr[20];
  int n;
  cout<<"Enter Size of Array";
  cin>>n;
  cout<<"Enter Array";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int pe = peakelement(arr,n);
  cout<<"Peak elemnt of the array is"<<"  "<<pe;
  return 0;
}
