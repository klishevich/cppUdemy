#include <iostream>
#include <string>
using namespace std;

string convert(string from_str, string to_str, string message) {
    for (size_t i {0}; i< message.length(); i++)
    {
        char curr_char = message.at(i);
        // cout << "curr_char: " << curr_char << endl;
        size_t curr_char_index = from_str.find(curr_char);
        // cout << "curr_char_index: " << curr_char_index << endl;
        if (curr_char_index != string::npos)
        {
            char encripted_char = to_str.at(curr_char_index);
            // cout << "encripted_char: " << encripted_char << endl;
            message.at(i) = encripted_char;
        }
    }
    return message;
}

int main( )
{
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key      {"NOPQRSTUVWXYZopqrstuvwxyzabcdefghijklmnABCDEFGHIJKLM"};
    string message;
    cout << "Enter your message: ";
    getline(cin, message);
    string enryptedMsg = convert(alphabet, key, message);
    cout << "Encrypted message:" << endl;
    cout << enryptedMsg << endl;
    string decryptedMsg = convert(key, alphabet, enryptedMsg);
    cout << "Decrypted message:" << endl;
    cout << decryptedMsg << endl;
    
    return 0;
}
