#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string s1="";
    cout << " enter the string" << endl;
    getline(cin,s);
    int n=s.size();

    for(int i=0;i<n;i++){
        if(s[i]=='a'){
            continue;
        }
        else{

           s1+=s[i];
        }
    }
    cout<<s1;
}
