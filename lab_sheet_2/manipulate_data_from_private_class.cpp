//WAP to add 2 private data of two different classes.

#include<iostream>
using namespace std;

class Class2;

class Class1{
    private:
        int num1;
    public:
        friend int add(Class1 a,Class2 b);
        Class1(){
            num1 = 10;
        }
};

class Class2{
    private:
        int num2;
    public:
        friend int add(Class1 a,Class2 b);
        Class2(){
            num2 = 20;
        }
};

int add(Class1 a,Class2 b){
    return a.num1+b.num2;
}

int main(){
    Class1 obj1;
    Class2 obj2;
    int sum = add(obj1,obj2);
    cout<<"The sum of the two private data of Class1 and Class2 is: "<<sum<<endl;
    return 0;
}