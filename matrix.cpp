#include<iostream>//yo using coding

using namespace std;

int main(){
    int a,b;
    cout <<"Enter the values for matrix 1 in form a(ij)";
    int m1[4][4];
    for(int i =0;i<4;i++){
        for(int j = 0 ;j<4;j++){
            cin>>a;
            m1[i][j] = a;
        }
     }
    cout <<"\nMatrix 1 is:\n";
    for(int i =0;i<4;i++){
        for(int j = 0 ;j<4;j++){
            cout << m1[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout <<"Enter the values for matrix 2 in form a(ij)";
    int m2[4][4];
    for(int i =0;i<4;i++){
        for(int j = 0 ;j<4;j++){
            cin>>b;
            m2[i][j] = b;
        }
    }
    cout <<"\nMatrix 2 is:\n";
    for(int i =0;i<4;i++){
        for(int j = 0 ;j<4;j++){
            cout << m2[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout <<"\nM1M2 is : \n";
    int m3[4][4];
    for(int i = 0;i<4;i++){
        for(int k =0 ; k<4;k++){int c =0;
            for(int j = 0;j<4;j++){
                c += (m1[i][j])*(m2[j][k]);
            }
             m3[i][k] = c ;
             cout <<m3[i][k]<<"\t";
        } 
        cout << endl;
    }
    return 0;
       


       
}