#include<iostream>
using namespace std;

class Obj{
public:
    int x=0;
    static int cnt;

    Obj(){
        cnt++;
        cout<<"object created"<<endl;
    }
    static void display_count(){

        cout<<"number of objects created: "<<cnt<<endl;
    }
};

int Obj::cnt=0;


int main(){
    Obj a,b,c,d;
    Obj s;

    Obj::display_count();




}
