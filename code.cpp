#include<bits/stdc++.h>
using namespace std;
main(){
int n,i,j;
cin>>n;
int m=(2*n)-1;
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        if((i<n&&i>=j)||(i>=n&&(i+j)<m)){
            cout<<"*";
        }
        else{
    cout<<" ";
        }
}
cout<<"\n";
}
}
