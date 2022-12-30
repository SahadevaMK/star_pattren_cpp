#include<iostream>
using namespace std;
int main(){
    int i,j,row,col;
    cin >> row >> col ;
    for(i=1;i<=row;i++){
        for (j=1;j<=col;j++){
            if(i==1 || i==row){
                cout << "*";
            }
            else if (j==1 || j==col){
                cout << "*";
            }
            else{
                cout << " ";// to give space
            }
        }
        cout << endl;
    }
    return 0;
}
//thank you show some love and star the repo
