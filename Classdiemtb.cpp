#include<iostream>
using namespace std;

class Classdiemtb
{
private:
    float diemt, dieml, diemh;
public:
    Classdiemtb(float dt, float dl, float dh){
        diemt = dt; 
        dieml = dl;
        diemh = dh;
    };
    int tong(){
        int tong = 0;
        tong = diemt + dieml + diemh;
        return tong;
    }
    float diemtb(){
        return  tong()/3;
    }
   
};

int main(){
    Classdiemtb a(3,4,5);
    cout << a.diemtb();
}

