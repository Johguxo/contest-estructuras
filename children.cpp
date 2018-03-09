#include<bits/stdc++.h>
using namespace std;
string maxstring(string a, string b){
	int cont = 1;
	long long i = 0;
	string mayor;
	if(a.size() > b.size()) mayor = a;
	else if(a.size() < b.size()) mayor = b;
	else if(a.size() == b.size()){
		while(cont){
			
			if(a[i] > b[i]){
			cont = 0; 
			mayor = a;
			}
			else if(a[i] < b[i]){
			cont = 0; 
			mayor = b;
			}
			i++;
		}
	}
	
	return mayor;
}
int main(){
	vector <int> numbers;
	string numero;
	int n,a;
 	while(cin>>n){
 		int cont = 1;
		string grande = "0"; 
		if (n == 0) break;
		
		for(int i = 1; i <= n; i++){
			cin>>a;
			numbers.push_back(a);
		}
		
		while(cont){
			numero = "";
			
			for(int j = 0; j< numbers.size();j++){
				numero = to_string(numbers[j]) + numero;
			}
			if(!next_permutation(numbers.begin(), numbers.end())) cont = 0;
			grande = maxstring(grande,numero);
		}
		cout<<grande<<endl;	
		numbers.clear();
	
	}
	return 0;	
}
