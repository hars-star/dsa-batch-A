
#include<iostream>
using namespace std;
int findindex(string name[],int n,string part,int i){

if(i==n){
    return -1;
}
if(name[i]==part){
    return i;
}

return findindex(name,n,part,i+1);
}
int main(){
int n;
cout<<"enter the size:"<<endl;
cin>>n;
cout<<"enter the id:"<<endl;
string name[n];
for(int i=0;i<n;i++){
    cin>>name[i];
}
string part;
cout<<"enter the target";
cin>>part;
cout<<"found at index"<<findindex(name,n,part,0);
}
