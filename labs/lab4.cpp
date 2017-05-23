//Lab 4a
//Natalio Panzarini
//02-22-2017

//Submitted first program too early, this is my final submission for lab4a

#include <iostream>

using namespace std;

int main(){

    void print_array(ostream& os, int*a, int n);

    int x = 7;
    int* p1 = &x;

    int* p2 = new int[7]{1,2,4,8,16,32,64};
    int y = p2[0];

    int* p3 = p2;
    p2 = p1;
    p2 = p3;

    cout << "Value of p1: ";
    cout << x << endl;

    cout << "Value of p2: ";
    cout << y << endl;
    
    cout << "For number 9: " << endl;
    cout << x << endl;
    print_array(cout, p2, 7);
    print_array(cout, p3,7);

    int* p4 = new int[7];

    for(int i = 0; i < p3[7]; i++){
        p4[i] = p3[i];
    }

    p2[2] = *p1;
    
    cout << "For number 13: " << endl;
    print_array(cout, p1, 1);
    print_array(cout, p2, 7);
    print_array(cout, p3, 7);
    print_array(cout, p4, 7);

    delete [] p2;
    delete [] p4;

    return 0;
}

void print_array(ostream& os, int* a, int n) {

    for (int i = 0; i < n; i++){

        cout << a[i] << " ";
    }
    cout << endl;
}
