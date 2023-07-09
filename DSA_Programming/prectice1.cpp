#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> reverse(vector<int> v){
int s=0;
int end=v.size()-1;
while(s<=end){
    swap(v[s++],v[end--]);

}return v;
};
 void print(vector<int> v){
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
} 
 };


int  main(){
    vector<int> v;
    v.push_back(30);
    v.push_back(31);
    v.push_back(32);
    v.push_back(33);
    v.push_back(34);
   vector<int> ans= reverse(v);
    print(ans);
    return 0;
}