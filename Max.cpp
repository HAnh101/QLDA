#include <iostream>
using namespace std;
struct Sinhvien
{
    string ten, maso;
    float diemtoan, diemli, diemhoa;
    void diemtrungbinh(){
        cout << (diemtoan + diemli + diemhoa) / 3;
    }
    void in(){
        cout << ten << maso << diemtoan << diemli << diemhoa << endl;
    }
};

int main(){
    Sinhvien c[1];
    /*cin >> c.diemtoan >> c.diemli >> c.diemhoa >> c.maso;
    cin.ignore();
    getline(cin, c.ten);
    c.diemtrungbinh();
    c.in();*/
    for(int i =0; i < 1; i++){
        cin >> c[i].diemtoan >> c[i].diemli >> c[i].diemhoa >> c[i].maso;
        cin.ignore();
        getline(cin, c[i].ten);
        c[i].in();
        c[i].diemtrungbinh();
    }
}