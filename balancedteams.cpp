#include<bits/stdc++.h>
using namespace std;

int main(){

int ans=0;
int n; 
cin>>n;
int arr[1000];

for(int i=0 ; i<n;i++){
cin>>arr[i];
}

sort(arr,arr+n);

int j=0;

for(int i=0 ; i<n ; i++){

while(j<n && arr[i]+5 >=arr[j]){
    
    j++;
    ans=max(ans,j-i);

}


}

 cout<<ans<<endl;



    return 0;
}