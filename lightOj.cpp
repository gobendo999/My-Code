
#include <bits/stdc++.h>
using namespace std;

#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

/*bool solve ( string& ss ){

    int last = ss[ss.size()-1] - '0';

    if ( last % 2 == 0 ) return 1;
    return 0;
}*/

int main(){

 /*   int t;
    cin>>t;

    while ( t-- ){

        string ss;
        cin>>ss;

       if( solve(ss) == 1 ){

        cout<< "even\n";
       }else{

        cout<< "odd\n";
       }


    }*/

   int t; 

   cin>>t; 

   while(t--){
    int nm;
    cin>>nm; 

    if(nm%2==0){
        cout<<"even\n";
    }else{
        cout<<"odd\n";
    }
   }    

    return 0;
}