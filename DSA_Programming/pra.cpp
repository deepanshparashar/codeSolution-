#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int n){
int s=0;
int end=n-1;
while(s<=end){
    swap(arr[s],arr[end]);
    s++;
    end--;

 
 }   
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}

 }

int main (){
    int arr[5] ={1,2,3,4,5};
    reverse(arr,5);
    
    return 0;
}