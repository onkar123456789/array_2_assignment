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
   cout<<endl;
  for(int i=0; i<=n-1; i++){
     if(i%2==0){
        v[i]+=10;

     }
     else v[i]=2*v[i];
   }
   for(int i=0; i<=n-1; i++){
     cout<<v[i]<<" ";
   }

}