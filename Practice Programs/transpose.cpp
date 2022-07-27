#include<iostream>
using namespace std;

class matrix{
    private:
        int mat[3][3];
    public:
        void getdata(){
            cout<<"Enter the matrix: "<<endl;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cin>>mat[i][j];
                }
            }
            
        }
        void showdata(){
            cout<<"The matrix is: "<<endl;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cout<<mat[j][i]<<"\t";
                }
                cout<<"\n";
            }
        }
};

int main(){
    matrix m;
    m.getdata();
    m.showdata();
}