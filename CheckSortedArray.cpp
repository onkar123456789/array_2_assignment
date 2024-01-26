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
bool flag=true;
//  for(int i=v[0],j=v[1];i<=n-2,j<=n-1; i++,j++){
//    if(i>j){
//     flag=true;
//     break;
//    }
  
//    }
//or
 for(int i=0; i<=n-2; i++){
     if(v[i]>v[i+1]){
        flag=false;
        break;
     }
   }


 if(flag==false){
    cout<<"array is unsorted :";
 }
 else cout<<"sorted :";
   
}