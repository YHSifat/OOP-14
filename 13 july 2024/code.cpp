#include<iostream>
using  namespace std;

class Vehicle{

protected:
    string id, color;


public:
    Vehicle(string id, string color){
        //cout<<"vehicle cons"<<endl;
        this->id=id;
        this->color=color;
    }
};


class Bike: private Vehicle{
private:
    int mileage,total_travel,fuel_capacity,current_fuel;

public:
    Bike(string i,string col,int m, int t, int f):Vehicle(i,col){
        //cout<<"bike const"<<endl;
        mileage=m;
        total_travel=t;
        fuel_capacity=f;
        current_fuel=0;
    }

    void Travel(int km){
        int fuel_cost=km/mileage;

        if(fuel_cost>current_fuel){
            cout<<"Insufficient Fuel"<<endl;
            return;
        }

        total_travel+=km;
        current_fuel-=fuel_cost;
        cout<<"Successfully traveled "<<km<<" . Fuel cost "<<fuel_cost<<endl;

    }
    void Refill(int fuel){
        if(fuel>fuel_capacity-current_fuel){
            cout<<"Overflow"<<endl;
            return;
        }
        current_fuel+=fuel;

        cout<<"successfully refilled"<<endl;
        cout<<"current fuel "<<current_fuel<<endl;

    }

    void showStatus(){
        cout<<"Current Fuel: "<<current_fuel<<endl;
        cout<<"Total Traveled: "<<total_travel<<endl;
    }




};



int main(){
    Bike myBike("49-4606","Black",35, 0, 15);


    myBike.Travel(120); //travel 120 km
    cout<<endl;

    myBike.Refill(10);
    cout<<endl;

    myBike.Travel(120);
    cout<<endl;

    myBike.Travel(220);
    cout<<endl;

    myBike.showStatus();
    cout<<endl;
    myBike.Refill(15);






}
