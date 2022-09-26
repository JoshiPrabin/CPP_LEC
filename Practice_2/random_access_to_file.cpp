#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream out("onetwo.txt"); // opens the file in write mode
    if (! out)
    {
        cout<<"Error opening file."<<endl;
    }
    
    cout<<out.tellp()<<endl; // tells the current position of the pointer i.e. -1
    out<<"Hello World"; // writing in the file
    out.seekp(-5,ios::end);
    out<<"dear ";
    cout<<out.tellp()<<endl; // 16
    out.close(); // closing the file

    ifstream in("onetwo.txt");
    string st;
    in>>st;
    cout<<in.tellg()<<endl;
    cout<<st<<endl;
    cout<<in.tellg()<<endl;
    in.close();
}