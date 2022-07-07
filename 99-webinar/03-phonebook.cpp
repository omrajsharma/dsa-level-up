#include <iostream>
#include <map>
#include <list>
#include <string>
using namespace std;

int main() {
    map< string, list<string> > phonebook;

    phonebook["Omraj"].push_back("111111111");
    phonebook["Omraj"].push_back("111111112");
    phonebook["Omraj"].push_back("111111113");

    
    phonebook["Riya"].push_back("111111111");
    phonebook["Riya"].push_back("111111112");
    phonebook["Riya"].push_back("111111113");

    for(auto person: phonebook){
        cout << person.first << endl;
    }


    return 0;
}