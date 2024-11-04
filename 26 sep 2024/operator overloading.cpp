#include<iostream>
using namespace std;
 
class Vec{
    int i,j,k;
public:
    Vec(int i=0,int j=0,int k=0){
        this->i=i;
        this->j=j;
        this->k=k;
    }
    
    Vec operator+(Vec &sec_vec){
        Vec result_vec;
 
        result_vec.i=this->i+sec_vec.i;
        result_vec.j=this->j+sec_vec.j;
        result_vec.k=this->k+sec_vec.k;
 
        return result_vec;
    }
 
    void disp_vec(){
        cout<<this->i<<" "<<this->j<<" "<<this->k<<endl;
    }
 
    friend Vec operator-(Vec &first_vec, Vec &sec_vec);
 
    Vec operator++(){
        Vec tmp;
        tmp.i=this->i+1;
        tmp.j=this->j+1;
        tmp.k=this->k+1;
 
        return tmp;
    }
 
};
 
Vec operator-(Vec &first_vec, Vec &sec_vec){
    Vec result_vec;
 
        result_vec.i=first_vec.i-sec_vec.i;
        result_vec.j=first_vec.j-sec_vec.j;
        result_vec.k=first_vec.k-sec_vec.k;
 
        return result_vec;
}
 
 
 
int main(){
    cout<<"i j k"<<endl;
    Vec vec1(5,4,-2), vec2(3,2,5);
 
    Vec res=vec1+vec2;
    res.disp_vec();
 
    Vec neg=vec1-vec2;
    neg.disp_vec();
 
    res=++res;
    res.disp_vec();
 
}