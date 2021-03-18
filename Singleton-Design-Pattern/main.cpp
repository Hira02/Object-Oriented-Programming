#include<bits/stdc++.h>
using namespace std;
class Singleton{
    private:
        static Singleton* instance;
        int val;
        Singleton(){
            val = 5;
        }
     public:
        static Singleton* getInstance(){
            if(!instance)
                instance = new Singleton();
            return instance;
        }   
        // void print
        void setValue(int x){
            this->val = x;
        }

        int getValue(){
            return this->val;
        }
};
Singleton *Singleton::instance = 0;
int main(){
    //Singleton* s = new Singleton();
    Singleton* s = s->getInstance();
    s->setValue(10);
    cout<<s->getValue()<<"\n";
    Singleton* t = t->getInstance();
    cout<<t->getValue();
    return 0;
}