#include<bits/stdc++.h>
using namespace std;

class Polar;

class Cartesian{
public:
    int x,y;
    Cartesian(){
        x=0;y=0;
    }
    Cartesian(int x,int y){
        this->x=x;
        this->y=y;
    }
    show_data(){
        cout<<"Cartesian co-ordinates : "<<x<<" "<<y<<endl;
    }

    Cartesian(Polar &po);


};

class Polar{
public:
    int r, theta;
    Polar(){
        r=0;
        theta=0;
    }
    Polar(int a,int b){
        a=r;theta=b;
    }
    show_data(){
        cout<<"Polar co-ordinates : "<<r<<" "<<theta<<endl;
    }
    Polar(Cartesian &car){
        r=sqrt(car.x*car.x+car.y*car.y);
        theta=atan(car.y/car.x);
    }


};

Cartesian::Cartesian(Polar &po){
        this->x=po.r*cos(po.theta);
        this->y=po.r*sin(po.theta);
}



int main(){
    Polar p1_pol(5,30);

    Cartesian p1_car(3,4);
    p1_pol=p1_car;



    p1_pol.show_data();
}

