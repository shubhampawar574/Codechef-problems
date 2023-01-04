#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    int a=1, b=-1, c=-1;
	    
	    for(int i=2; i*i<=n; i++){
	        if(n%i==0){
	            b=i;
	            break;
	        } 
	    }
	    
	    if(b!=-1){
	        c=n/b;
	        //if n=9, since a, b, c shuld be distinct nos. but using above code,
	        //we get a=1,b=3,c=3 which is wrong so below if-else is required
	        if(b!=c)
	            cout<<a<<" "<<b<<" "<<c<<endl;
	        else cout<<-1<<endl;
	    }
	    else{
	        cout<<-1<<endl;
	    }
	}
	return 0;
}
