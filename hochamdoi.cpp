#include <iostream>
#include <queue>

using namespace std;

int main()
{  queue<int> q;
q.push(20);
q.push(30);
q.push(40);
while(!q.empty())// kiem tra xem q co rong ko
{
    cout<<q.front()<<endl;// in phan tu dau ra
    q.pop();



}


    return 0;
}
