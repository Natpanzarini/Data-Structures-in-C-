#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;
int my_count(vector <int> x, int y);
int my_count_if(vector <int> x, int y, UnaryPredicate p);

int main(){
  int count_v = 7;
  int countif_v = 10;

  vector <int> num(1000);
  for_each (num.begin(),num.end(),){
    iota(num.begin(), num.end(), 0);
    cout << "Group: " <<  num[i] << endl;
    for (int k = 0; k < 100; k++){
      iota(num.begin(),num.end(), 0);
      cout << num[k] << " ";
    }
    cout << endl << "Count Value: " << count(num.begin(),num.end(), 7) << endl;
    cout << "Countif Value: " << count_if(num.begin(), num.end(), [](int i){return i % 2 == 0;}) << endl;
  }
}

int my_count(vector <int> num, int count_v){
  int counter = 0;
  for (int i = 0; i < num.size(); i++){
  if(count_v == num[i])
    counter++;
  }
  return counter;
}

int my_count_if(vector<int> num, int countif_v){
  for (int i = 0; i < num.size(); i++){
    if(countif_v == num[i])
      return num[i];
  }
}

int isvalue(int x){
  x ==
