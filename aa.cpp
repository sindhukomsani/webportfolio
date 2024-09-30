#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_dec_float.hpp>
 using namespace boost::multiprecision;
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) {
    cpp_dec_float_100 a;
    cpp_dec_float_100 b;
    cin>>a>>b;

    cpp_dec_float_100 c= a*b;

    cout<<fixed<<setprecision(0)<<c<<endl;
    }
    
    return 0;
}
