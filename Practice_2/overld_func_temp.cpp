#include<iostream>
#include<cstring>
using namespace std;
template<class T>
T maxm(T a, T b){
    if (a>b)
    {
        return a;
    }
    else{
        return b;
    }
    
}

char *maxm(char *a, char *b){
    if (strcmp(a,b)>0)
    {
        return a;
    }
    else{
        return b;
    }
    
}

int main(){
    int a=10,b=20;
    cout<<"The greater is "<<maxm(a,b)<<endl;
    char x='a',y='b';
    cout<<"The greater is "<<maxm(x,y)<<endl;
    return 0;
}