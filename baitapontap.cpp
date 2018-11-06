#include <iostream>

using namespace std;
void nhapmang(int ds[], int n)
{
    for(int i=0; i<n; i++)
    {

        cin>>ds[i];

    }
}
void xuatmang(int ds[], int n)
{
    for(int i=0; i<n; i++)
    {

        cout<<ds[i]<<endl;

    }

}
int kiemtraso(int so)
{
    int dem =0;
    for(int i=1; i<=so; i++)
    {
        if(so%i==0)
        {
            dem += 1;
        }
    }
    if(dem ==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void inrasonguyento(int ds[], int n)
{
    for(int i=0; i<n; i++)
    {
        if(kiemtraso(ds[i])==1)
        {
            cout<<i<<endl;
        }
    }
}

int main()
{
    int ds[10];
    int n=4;
    nhapmang(ds, n);
    xuatmang(ds, n);
    cout<<"so nguyen to trong mang la: "<<endl;
    inrasonguyento(ds, n);


}
