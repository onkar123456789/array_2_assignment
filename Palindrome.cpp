#include<iostream>
#include<vector>
using namespace std;
int main(){
 int n;
 cout<<"enter array element :";
 cin>>n;
 vector<char>v(n);
 
 for(int i=0; i<=n-1; i++){
     cin>>v[i];

   }
 cout<<"array is :";
 
 for(int i=0; i<=n-1; i++){
     cout<<v[i]<<" ";
   }
 cout<<endl;

 int i=0;
 int j=n-1;
 bool flag=true;
 while(i<j){
    if(v[i]!=v[j]){
        flag=false;
        break;   
    }
     i++;
     j--;

 }

 if(flag==false){
    cout<<"it is not palindrome ";
 }
 else cout<<"it is palindrome :";
 
}