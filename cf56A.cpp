#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,i=0;
  cin>>n;
  set<string>S{"ABSINTH","BEER","BRANDY","CHAMPAGNE","GIN","RUM","SAKE","TEQUILA","VODKA","WHISKEY","WINE"};
  while(n--){
 string s;
 cin>>s;
  if(isalpha(s[0])){
    if(S.count(s)){
      i++;
    }

  }else if(stoi(s)<18){
     i++;
  }



  }
  cout<<i<<"\n";

}