#include<iostream>
using namespace std;

class Product{
    int buying_price;
public:
    int selling_price;
    Product(int b_price, int s_price){
        buying_price=b_price;
        selling_price=s_price;
    }
    friend profit_cal(Product p);

};

int profit_cal(Product pr){
    return pr.selling_price-pr.buying_price;
}



int main(){
    Product bread(100,120);

    cout<<"Profit: "<<profit_cal(bread)<<endl;

}
