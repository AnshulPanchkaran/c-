#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string, string> responses = {
    {"hello", "Hello there!"},
    {"how are you", "I'm doing well, thank you."},
    {"what's up", "Not much, just chatting with you."},
    {"bye", "Goodbye!"},
};

int main() {
    while (true) {
        cout << "You> ";
        string userInput;
        getline(cin, userInput);

        if (userInput == "bye") {
            break;
        }

        if (responses.count(userInput)) {
            cout << "Chatbot> " << responses[userInput] << endl;
        } else {
            cout << "Chatbot> I'm sorry, I don't understand." << endl;
        }
    }

    return 0;
}
