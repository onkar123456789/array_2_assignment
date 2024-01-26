#include<iostream>
#include<vector>
#include<climits>
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
  int Flarge=INT_MIN;          //it is done in one pass we can create 3 for loops.
  int Slarge=INT_MIN;
  int Tlarge=INT_MIN;
//   if(n<3){
  
//   cout<<"third largest value is not present :"; 

//   }
  for(int i=0; i<=n-1; i++){
     if(Flarge<v[i]){
        Tlarge=Slarge;
         Slarge=Flarge;
         Flarge=v[i];
        
        }

     else if(v[i]>Slarge &&v[i]!=Flarge){
         Flarge=Slarge;
         Slarge=v[i];
     }                          //
     else if(v[i]>Tlarge && v[i]!=Flarge && v[i]!=Slarge){  
                            //   
         Tlarge=v[i];
     }
    }

   if(Flarge==INT_MIN){
    cout<<"no first large element is present :";
   }
   else cout<<Flarge<<" ";

   if(Slarge==INT_MIN){
    cout<<"no second large element is present :";
   }
   else cout<<Slarge<<" ";

   if(Tlarge==INT_MIN){
    cout<<"no third large element is present :";
   }
   else cout<<Tlarge<<" ";
   
}