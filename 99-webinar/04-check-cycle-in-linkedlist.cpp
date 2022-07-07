#include <iostream>
#include<unordered_map>
using namespace std;

bool containCycle(node* head){
    // storing address, boolean
    unordered_map< node*, bool > hashtable;

    node temp = head;
    while(temp != NULL){
        // check if temp already exists in the hashtable
        if(hashtable.count(temp) != 0){
            return true;
        }
        // insert
        hashtable[temp] = true;
        temp = temp->next;
    }

    return false;
}

int main() {



    return 0;
}