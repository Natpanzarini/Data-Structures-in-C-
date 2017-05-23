/* Nafeis Weixelman
 * Natalio Panzarini
 * Cameron Hossein 
*/

#include <iostream>
#include <stack>

using std::stack;

template <class T>
bool contains (const T& value, const stack<T>& s){
    stack<T> copy = s;

    for(int i = 0; i < copy.size(); i++)
    {
        if (copy.top() == value)
            return true;
    
        copy.pop();
    }
    return false; 
}

template <class T>
stack<T> reverse(const std::stack<T>& s){
    stack<T> copy1 = s;
    stack<T> copy2;

    while(!copy1.empty()){
        copy2.push(copy1.top());
        copy1.pop();
    }
    return copy2;
}

int main(){
    stack<int> s; 
    for(auto i: {1,2,3,4})
        s.push(i);
    std::cout << std::boolalpha << contains(1,s) << std::endl;
    stack<int> r = reverse(s);
    while(!s.empty()){
        std::cout << s.top() << std::endl;
        s.pop();
    }
    while(!r.empty()){
        std::cout << r.top() << std::endl;
        r.pop();
    }
    return 0;
}

