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
 int Oddsum=0;
 int Evensum=0;
  for(int i=0; i<=n-1; i++){
      if(i%2!=0){
         Oddsum=Oddsum+v[i];
           

      }
      else Evensum=Evensum+v[i];
   }

   cout<<"difference is :"<<Evensum-Oddsum;
   
}