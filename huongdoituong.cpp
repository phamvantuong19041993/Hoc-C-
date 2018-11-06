
#include <iostream>
#include <cstdio>
#include <string>

using namespace std;
class sinhvien
{
private:
    int mahocsinh;
    string tenhocsinh;
    int tuoi;
    string quequan;


public:
    void hienthi()
    {
        cout<<"Ma hoc sinh: "<<mahocsinh<<endl;
        cout<<"Ten hoc sinh: "<<tenhocsinh<<endl;
        cout<<"Tuoi: "<<tuoi<<endl;
        cout<<"Que quan: "<<quequan<<endl;
    }
    void nhap()
    {
        cout<<"nhap ma hoc sinh: "<<endl;
        cin>>mahocsinh;
        cout<<"Ten hoc sinh: "<<endl;
        fflush(stdin);
        getline(cin, tenhocsinh);
        cout<<"Nhap tuoi hoc sinh: "<<endl;
        fflush(stdin);

        cin>>tuoi;
        cout<<"Nhap que quan hoc sinh: "<<endl;
        fflush(stdin);
        getline(cin, quequan);
    }


};
void nhapdssv(sinhvien sv[], int n)
{
    for(int i=0; i<n; i++)
    {
        sv[i].nhap();
    }
}
void xuatsinhvien(sinhvien sv[], int n)
{
    for(int i=0; i<n; i++)
    {
        sv[i].hienthi();
    }
}
int main()
{
    sinhvien a[100];
    int n;
    cout<<" Nhap so n"<<endl;
    cin>>n;
    sinhvien h;
    nhapdssv(a, n);
    xuatsinhvien(a, n);

}
