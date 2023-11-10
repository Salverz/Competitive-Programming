#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> people;

    // Get input for names
    int numberOfPeople;
    cin >> numberOfPeople;
    for (int i = 0; i < numberOfPeople; i++) {
        string input;
        cin >> input;
        people.push_back(input);
    }

    // Get input for commands
    int numberOfCommands;
    cin >> numberOfCommands;
    for (int i = 0; i < numberOfCommands; i++) {
        string command;
        cin >> command;
        if (command == "cut") {
            string cutter, cuttingInFrontOf;
            cin >> cutter >> cuttingInFrontOf;
            
            std::vector<string>::iterator pos = find(people.begin(), people.end(), cuttingInFrontOf);
            people.insert(pos, cutter);
        } else if (command == "leave") {
            string leaver;
            cin >> leaver;

            std::vector<string>::iterator pos = find(people.begin(), people.end(), leaver);
            people.erase(pos);
        }
    }

    for (int i = 0; i < people.size(); i++) {
        cout << people[i] << "\n";
    }
    
}   