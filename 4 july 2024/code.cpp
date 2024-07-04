#include<iostream>
using namespace std;

class Shape{
protected:
    string id="00";
public:
    int posx=1,posy=1;
    Shape(){
        cout<<"this is shape clas"<<endl;
    }
    
};

class Triangle: public Shape{
private:
    double base,height;
public:
    Triangle(double a,double b){
        base=a;
        height=b;
        cout<<"this is Triangle"<<endl;
    }

    void printPOS(){
        cout<<posx<<" "<<posy<<endl;
    }
    void printID(){
        cout<<"this is shape id: "<<id<<endl;
    }
};

class Rectangle: private Shape{
private:
    double length,width;
public:
    Rectangle(double a,double b){
        length=a;
        width=b;
        cout<<"this is Rectangle"<<endl;
    }
    void printPOS(){
        cout<<posx<<" "<<posy<<endl;
    }
};


int main(){
    Triangle tr(5.5, 7);
    cout<<endl;

    tr.printPOS();//<<endl;
    tr.posx=5;
    tr.posy=7;
    tr.printPOS();

    tr.printID();
    // cout<<"access from outside "<<tr.id<<endl;



    cout<<endl;
    Rectangle rc(7.6, 10);
    cout<<endl;

    rc.printPOS();
    // rc.posx=10;
    // rc.posy=20;
    // rc.printPOS();



    return 0;
}










