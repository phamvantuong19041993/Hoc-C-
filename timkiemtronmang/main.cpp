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
int kiemtraso(int ds[], int n, int x)
{

    for(int i=0; i<n; i++)
    {
        if(ds[i]==x)
        {

            return 1;
        }
    }
}
void chenthem1phantu(int ds[], int &n, int vitri, int socanchen)
{
    for(int i=n; i>=vitri; i--)
    {
        ds[i]= ds[i-1];
    }
    ds[vitri]= socanchen;
    n++;

}
void xoa(int ds[], int &n, int socanxoa)
{
    for(int i=socanxoa; i<n; i++)
    {
        ds[i]= ds[i+1];
    }
    n--;
}



int main()
{

   int ds[10];
   int n=4;
   int x;
   int dem;
   nhapmang(ds, n);
   xuatmang(ds, n);
   cout<<"Moi nhap so x: "<<endl;
   cin>>x;
   if(kiemtraso(ds, n, x)==1)
   {
       cout<<"X co trong mang"<<endl;





   }
   chenthem1phantu(ds, n, 1,8);
   cout<<"mang sau khi chen: "<<endl;
   xuatmang(ds, n);
   xoa(ds, n, 3);
   cout<<"mang sau khi xoa"<<endl;
   xuatmang(ds, n);




    return 0;
}
