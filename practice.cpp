#include <iostream>
#include <string>
using namespace std;
class Noob
{
 public:   
    string s;
public:
    void read(void);
    void check(void);
    void ones(void);
};
void Noob::read(void){
    cout<<"enter the binatry number"<<endl;
    cin>>s;
}
void Noob ::check(){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0'&&s.at(i)!='1'){
            cout<<"invalid number";
            exit(0);
        }
    }
     cout<<"valid number";
}
int main(){
    Noob b;
    b.read();
    b.check();
    return(0);
}