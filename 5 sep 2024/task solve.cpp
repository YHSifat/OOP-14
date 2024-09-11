#include<iostream>
using namespace std;

class Quadrilateral{
protected:
    int A,B,C,D;

public:
    Quadrilateral(int A,int B,int C,int D){
        this->A=A;
        this->B=B;
        this->C=C;
        this->D=D;
    }
    void display(){
        cout<<"this is a Quadrilateral "<<A<<" "<<B<<" "<<C<<" "<<D<<endl;
    }
};

class Parallelogram : protected Quadrilateral{
protected:
    int height;
public:
    Parallelogram(int A,int B,int height):Quadrilateral(A,B,A,B){
        this->height=height;
    }
    void display(){
        cout<<"this is a Parallelogram "<<A<<" "<<B<<" "<<C<<" "<<D<<" H "<<height<<endl;
    }
};


class Rectangle : protected Parallelogram{
public:
    Rectangle(int A,int B):Parallelogram(A,B,A){}
    void display(){
        cout<<"this is a Rectangle "<<A<<" "<<B<<" "<<C<<" "<<D<<" H "<<height<<endl;
    }
};

int main(){
    Quadrilateral Q1(1,2,3,4);

    Parallelogram P1(5,6,3);

    Rectangle R1(10,20);

    Q1.display();
    P1.display();
    R1.display();

}
