#include <iostream>
#include <vector>
#include <list>
using namespace std;

class HashTable {
private:
    int size;
    vector<list<int>> table;

    int hashFunction(int key) {
        return key % size;
    }

public:
    HashTable(int s) {
        size = s;
        table.resize(size);
    }

    // Insert
    void insert(int key) {
        int index = hashFunction(key);

        // Avoid duplicate keys
        for (int x : table[index]) {
            if (x == key) {
                cout << "Key already exists\n";
                return;
            }
        }

        table[index].push_back(key);
        cout << key << " inserted\n";
    }

    // Search
    bool search(int key) {
        int index = hashFunction(key);

        for (int x : table[index]) {
            if (x == key) {
                return true;
            }
        }

        return false;
    }

    // Remove
    void remove(int key) {
        int index = hashFunction(key);

        for (auto it = table[index].begin(); 
             it != table[index].end(); 
             ++it) {

            if (*it == key) {
                table[index].erase(it);
                cout << key << " removed\n";
                return;
            }
        }

        cout << key << " not found\n";
    }

    // Display
    void display() {
        for (int i = 0; i < size; i++) {
            cout << i << " : ";

            for (int x : table[i]) {
                cout << x << " -> ";
            }

            cout << "NULL\n";
        }
    }
};

int main() {

    HashTable ht(10);

    ht.insert(10);
    ht.insert(20);
    ht.insert(25);
    ht.insert(35);

    cout << "\nHash Table:\n";
    ht.display();

    cout << "\nSearching:\n";

    if (ht.search(25))
        cout << "25 found\n";
    else
        cout << "25 not found\n";

    if (ht.search(50))
        cout << "50 found\n";
    else
        cout << "50 not found\n";

    cout << "\nRemoving:\n";
    ht.remove(25);

    cout << "\nHash Table after removal:\n";
    ht.display();

    return 0;
}