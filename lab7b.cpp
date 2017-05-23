#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector <string> expunge_letter(
    vector <string>:: iterator first,
    vector <string>:: iterator last,
    vector <string>:: iterator d_first,
    char x){

  copy_if(first, last, d_first, [x](string a){return(if (x != a))};
      }

      int main(){
      vector <string> v = {"The", "rain", "in", "Spain", "falls", "mainly", "on",
      "the", "plain"};
      }
