#include<iostream>
#include<vector>
using namespace std;
int main(){
 int n;
 cout<<"enter array element :";
 cin>>n;
 vector<int>v(n);
 
 for(int i=0; i<=n-1; i++){
     cin>>v[i];

   }
 cout<<"array is :";
 
 for(int i=0; i<=n-1; i++){
     cout<<v[i]<<" ";
   }
   int count=0;
  int x;
  cout<<"enter x element :";
  cin>>x;
  
  cout<<"element's strictly greater than x is :";
  for(int i=0; i<=n-1; i++){
    if(v[i]>x){
       count++;  
    }

  }
  cout<<count;
   

}