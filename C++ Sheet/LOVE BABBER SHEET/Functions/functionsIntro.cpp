#include<iostream>
using namespace std;

// This is code is very bulkey,not-readable,Buggy and very large. This is not so efficient.  
int main(){

    int a , b;

    cin >> a >> b;

    int ans = 1;

    for(int i = 1; i <= b; i++){
        ans = ans * a;
    }
    
    cout << "answer is :" << ans << endl;

    int c , d;

    cin >> c >> d;

    ans = 1;

    for(int i = 1; i <= d; i++){
        ans = ans * c;
    }
    
    cout << "answer is :" << ans << endl;

    int e , f;

    cin >> e >> f;

    ans = 1;

    for(int i = 1; i <= f; i++){
        ans = ans * e;
    }
    
    cout << "answer is :" << ans << endl;
}