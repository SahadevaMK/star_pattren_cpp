#include <iostream>

using namespace std;
int main()
{
    char name[]="How are you in the sentence of the work in";
    int i,count;
     for(i=0;name[i]!='\0';i++)
     {   
         if(name[i]==' ')           ///number of word
         {
             count++;
         }
     }
         cout<<count+1<<endl;
}
