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
   bool flag=true;       // unique
   for(int j=0;j<=n-1; j++){
      if(i==j)  continue; 

      if(v[i]==v[j]){  
        flag=false;         //not unique
          break;

      }
   }
    if(flag==true){
    cout<<v[i]<<" ";
    break;

  }

 }
 

 
}