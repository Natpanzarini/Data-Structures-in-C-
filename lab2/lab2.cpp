#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int>  numbers(vector<string> names){
vector<int> stringlength;
	for (auto x: names){
		stringlength.push_back(x.size());
	}
	return stringlength;
}

int main(){
vector<string> n= {"Nat", "Cameron", "Nafeis", "Nils"};
for(auto na: numbers(vector<string>{"Nat", "Cameron", "Nafeis", "Nils"})){
cout << na << endl;

}
/*
int great(vector<string> n){
int max=n[0].size();
for( int i =0; i < n.size();i++){

if (n[i].size()>max){
max=n[i].size();
}
return max;
cout << max;
}
if ( n[i]<min){
min = n[i]
}

}
*/
//cout <<"\n"<< max << " " << min;

return 0;
}
