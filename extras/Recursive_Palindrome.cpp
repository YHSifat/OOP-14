#include<iostream>
using namespace std;

bool isPalindrome(string s){
    int n=s.length();
    if(n<2)return true;

    if(s[0]==s[n-1]){
        string cur=s.substr(1,n-2);
        return isPalindrome(cur);
    }else return false;

}

int main(){
    string str;
    cin>>str;

    string ans=(isPalindrome(str))?"YES":"NO";
    cout<<ans<<endl;
}
