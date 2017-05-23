//Header File for Project 1 - Natalio Panzarini 5170525
#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include <math.h>
#include <limits>
#include <vector>
#include <cstdlib>
#include <unistd.h>
#include "header.h"

using namespace std;

int main(int argc, char *argv[]){

    char op, c;
    unsigned int holder;
    string input;
    vector<unsigned int> numbers;
    bool running = true;
    bool verbose = false;

    //getopt usage to take command line arguments

    while ((c = getopt(argc, argv, "hv")) != -1){
        switch(c){
            case 'h':
                cout << "Usage: ~/bin/calc [-h] [-v]" << endl << "to run the program interactively. To run using standard input:" << endl << "  echo 'equation' | ./calc" << endl  << "where 'equation' is a single prefix notation equation, i.e. '+ 2 2'" << endl << "or :" << endl;
                cout << " ~/bin/calc < input_file.txt" << " where 'input_file.txt' contains prefix notation equations," << endl << "one per line." << endl << endl;
                cout << "Options: " << endl << "-h Show this text" << endl;
                cout << "-v Set a verbose output flag. Default = false." << endl << endl;
                cout << "Running with no input from standard in enters 'interactive mode'." << endl;
                cout << "Equations can be entered one per line." << endl;
                cout << "The program runs until 'quit' is the first word on a line or" <<  endl;
                cout << "EOF is reached." << endl << endl;
                break;

            case 'v':
                verbose = true;
                break;

            default:
                cout << "Error, Invalid program option '" << c << "' ";
                break;
        }
        cout << "Verbose flag: " << boolalpha << verbose << endl;
    }

    /*Main while loop that will run interactive mode until "quit" is typed.
      It also checks for 'verbose', and other cases such as end of file and
      if the preliminary numbers entered are too big.*/

    while(running){
        input.clear();
        getline(cin, input);
        if (cin.eof()) 
            break;
        while (input.empty()&& !cin.eof())
            getline(cin, input);
        istringstream stream(input);
        numbers.clear();
        stream >> op;

        while (!stream.eof() && stream >> holder) {
            numbers.push_back(holder);
        }
        if(stream.fail() && !stream.eof()){
            cout << "Input was too big" << endl;
            continue;
        }
        if(verbose)
            cout << input << " = ";
        switch(op)
        {
            case '+':
                add(numbers);
                break;

            case '*':
                multiply(numbers);
                break;

            case '^':
                power(numbers);
                break;

            case 'q':
                running = false;
                break;

            default:
                cout << "Input " << op << " unrecognized. skipping." << endl;
        }
    }
    return 0;
}

//Next three functions are the operations for the calculator: Addition, Multiplication, and Exponential

void add(vector<unsigned int> &numbers){
    int result = 0;
    for(int i = 0; i < numbers.size(); i++){
        if(numbers[i] >= std::numeric_limits<unsigned int>::max() - result){
            cout << result << " Addition failed: result too big";
        }else{
            result = result + numbers[i];
        }
    }
    cout << result <<  endl;
}

void multiply(vector<unsigned int> &numbers){
    int result = 1;
    for(int i = 0; i < numbers.size(); i++){
        if(numbers[i] >= std::numeric_limits<unsigned int>::max() / result){
            cout <<"Multiplication failed: result too big" << endl;;
            return;
        }else{
            result = result * numbers[i];
        }
    }
    cout << result << endl;
}

void power(vector<unsigned int> &numbers){
    unsigned int result = numbers[0];
    for(int i = 1; i < numbers.size(); i++){
        if(result > pow(std::numeric_limits<unsigned int>::max(),(1.0/numbers[i]))){
            cout <<"Exponentiation failed: result too big" << endl;;
            return;
        }else{
            result = pow(result,numbers[i]);
        }
    }
    cout << result << endl;
}
