#include<iostream>
// #include<unordered_map>     // random order
#include<map>               // ordered - O(logN) complexity - use balanced tree like datastructure
using namespace std;

int main() {
    // unordered_map< string, int > menu;
    map< string, int > menu;

    // insertion key value pairs inside the hashtable - O(1) operation
    menu["maggie"] = 15;
    menu["colddrink"] = 20;
    menu["dosa"] = 99;
    menu["pizza"] = 499;
    menu["platter"] = 399;

    // update - O(1) operation
    menu["dosa"] = (1.1)*menu["dosa"];

    // deletion - O(1) operation
    menu.erase("dosa");

    // search - O(1) operation
    string item = "dosa";

    if(menu.count(item) == 0){
        cout << item << " is not available" << endl;
    } else {
        cout << item << " is available " << endl << "Price : " << menu[item] << endl;
    }

    // iteration
    // for(pair<string,int> item: menu){
    // pair [
    //     first -> key
    //     second -> value
    // ]
    for(auto item: menu){
        cout << item.first << " - " << item.second << endl;
    }

    // order of storing - random order

    // Example - Implement a phone a book with names and multiple mobile numbers of the person
    // map< string, list<string> >

    return 0;
}