#include<bits/stdc++.h>
using namespace std;

string maxstring(string a, string b){
	int cont = 1;
	long long i = 0;
	if(a.size() == b.size()) return max(a,b);
	else{
		while(cont){
			if(a[i] == "")
				return a;	
			if(b[i] == "")
				return b;
			if(a[i] > b[i]){
			cont = 0; 
			return a;
			}
			else if(a[i] < b[i]){
			cont = 0; 
			return b;
			}
			i++;
		}
	}	
}

struct numeros{
	string n;	
	numeros(){}
};
bool operator==( const numeros &a1 , const numeros &a2){
    
    if( n1.n == a2.n ) return true;
    return false;
}

bool operator<( const numeros &a1 , const numeros &a2){
    string ms = maxstring(n1.n,n2.n);
    if( n2.n == ms ) return true;
    return false;
}
bool ordenar(const numeros &n1 , const numeros &n2){
	if(n1.n < n2.n) return true;
	return false;
}

vector <numeros> numbers;

int main(){
	
	string numero;
	numeros a;
	int n;
	
 	while(cin>>n){
		numero = ""; 
		if (n == 0) break;
		for(int i = 1; i <= n; i++){
			cin>>a;
			numbers.push_back(a);
		}
		sort(numbers.begin(), numbers.end(), ordenar);
		for(int j = 0; j< numbers.size();j++){
			numero = numbers[j] + numero;
		}
		cout<<numero<<endl;	
		numbers.clear();
	
	}
	return 0;	
}
