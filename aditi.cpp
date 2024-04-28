#include<iostream>
using namespace std;
class complex 
{
    private:
    int a,b;
    public:
    void setData(int x,int y)
    {
        a=x;
        b=y;
    }
    void showData()
    {
        cout<<a+b<<" ";
    }
};
int main(){
    complex c1,c2; 
    c1.setData(2,3); 
    c2.setData(5,7);  
    c1.showData(); 
    c2.showData(); 
    return 0;

}
