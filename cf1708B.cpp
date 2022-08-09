#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    
    if(b==0) return 0;
    else if(a%b==0) return b;
    else return gcd(b,a%b);
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
while(t--){
    int n,l,r;
    cin>>n>>l>>r;
    set<int>s;
    set<int>::iterator it;
   
    for(int i=1;i<=n;i++){
        for(int j=l;j<=r;j++){
            int z=gcd(j,i);
            if(!s.count(z)){
                s.insert(z);
                
                break;
            }

        }
         
    }
  if(s.size()!=5){
     cout<<"NO"<<'\n';
  }else{
    cout<<"YES"<<'\n';
    for(it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<'\n';
  }
   
}

}