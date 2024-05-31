#include<iostream>
using namespace std;

class triangle{
private:
    double height, base;
public:
    void setHeight(double height){
        this->height=height;
    }
    void setBase(double base){
        this->base=base;
    }
    double getHeight(){return height;}
    double getBase(){return base;}
};

class rectangle{
private:
    double length,width;
public:
    void setLength(double length){
        this->length=length;
    }
    void setWidth(double width){
        this->width=width;
    }
    double getLength(){return length;}
    double getWidth(){return width;}
};

double getArea(triangle &tr){
    double area=0.5 * tr.getHeight() * tr.getBase();
    return area;
}

double getArea(rectangle &rect){
    double area=rect.getLength() * rect.getWidth();
    return area;
}



int main(){
    triangle tri;  //Creating triangle object
    rectangle rec;  //Creating rectangle object

    tri.setBase(5.6);
    tri.setHeight(12);

    rec.setLength(12);
    rec.setWidth(4);

    cout<<"area of triangle is "<<getArea(tri)<<endl;

    //using function with same name to do similar task (calculate area)
    // THIS IS FUNCTION OVERLOADING

    cout<<"area of rectangle is "<<getArea(rec)<<endl;
}
