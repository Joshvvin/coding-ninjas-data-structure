#include <iostream>
#include <boot/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
/*long long unsigned int fact(int n){
    if(n==1){
        return 1;
        
    }
    else{
        return(n*fact(n-1));
    }
}*/
int main(){
    int n;
	cin>>n;
	int128_t f=1;
    for(int i=n;i>0;i--){
		f=f*i;
	}
    cout<<f;
}
