//its type of rectanglge which is opposite to to the hollow rectangle
*     *
*     *
* * * *
* * * *
* * * *
*     *
*     *
//print the above pattren
#include<iostream>
using namespace std;
int main(){
    int i,j,row,col;
    cout <<"enter the row and column" <<endl;
    cin >> row >> col;
    for (i=1;i<=5;i++){
        for(j=1;j<=4;j++){
            if(j==1 || j==4){
                cout << "*";
            }
            else if(i==2 || i==3 || i==4){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
//thank you show some love and star the repo
