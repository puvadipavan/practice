#include<iostream>
using namespace std;
#include<string>
class complex{
    int a,b;
    public:
    void setdata(int n1,int n2){
      a=n1;
      b=n2;  
    }
    void print(){
        cout<<"the complex number is"<<a<<"+i"<<b<<endl;
    }
    friend complex add (complex o1,complex o2);
};
complex add(complex o1,complex o2){
    complex c3;
    c3.setdata(o1.a+o2.a,o1.b+o2.b);
    return c3;
}
int main(){
    complex c1,c2;
    c1.setdata(1,2);
    c2.setdata(3,4);
    c1.print();
    c2.print();
    return 0;
}