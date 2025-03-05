#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vl vector<long long>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define all(v) v.begin(), v.end()
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define rrep(i, a, b) for(int i = a; i >= b; --i)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);

/*void intcode(){
    #ifndef ONLINE_JUDGE 
  
    // For getting input from input.txt file 
    freopen("input.txt", "r", stdin); 
  
    // Printing the Output to output.txt file 
    freopen("output.txt", "w", stdout); 
    #endif 
}*/

const int MOD = 1e9 + 7;
const int INF = 1e9;
template<typename T>
void print_vector(const vector<T>& v) {
    for (const auto& el : v) {
        cout << el << ' ';
    }
    cout << '\n';
}
template<typename T>
void read_vector(vector<T>& v) {
    for (auto& el : v) {
        cin >> el;
    }
}
int main() {
   
    optimize();   
    file();
  
    /*int t; 

    cin>>t; 
    while(t--){

        string s; 

        cin>>s; 
        cout<<s<<" ";
    }*/
//revers order
  /*  string s1; 

    cin>>s1; 
    string str ;

    for(int i = s1.size() - 1; i>=0; --i  ){
        str.push_back(s1[i]);
    }
    cout<<str<<endl;*/

    // palendrome ckk 
   /* 
    int t; 
    cin>>t; 
    while(t--){
      string str ;
      cin>>str; 
      string str2; 
      for( int i = str.size() - 1; i>=0; --i){
        str2.push_back(str[i]);
      }  

      if(str == str2){
        cout<<"Yes! It is palindrome!"<<endl;

      }else{
        cout<<"Sorry! It is not palindrome!"<<endl;
      }
    }*/

/*    int t;

    cin>>t; 
    map<string, bool> viss; 
    while(t--){

        string s;
        cin>>s; 
        if(viss[s] ==1) cout<<"YES\n";
            else cout<<"NO\n"; 

            viss[s] = 1;
    }
*/
/*int t; 

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
*/    

   /* int cnt ;
    for( int i = 1000; i>=1 ;--i){
        cout<<i;

        if(i%5==1);
            cnt++;
            cout<<" ";
         }*/
    for (int i = 1000; i >= 1; i--)
    {
        cout << i<<" ";
        if(1001-i%5==0) 
            cout<<endl;}
return 0;
}