#include<iostream>
using namespace std;

inline int calc(int x,int y){
    return x+y;
}

int main(){
    int a,b;
    cin>>a>>b;

    int sum=calc(a,b);
    //int sum=a+b;


    cout<<sum<<endl;


}
