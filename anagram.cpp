#include <iostream>
#include <vector>
using namespace std;
void anagram(std::string one, std::string two) {
    vector<char> similarLetters;
    if(one.length() == two.length()) {//one.length = 3 two.length == 3. 
        for(int i = 0; i < one.length(); i++) { //first iteration: i = 0. second iter: i = 1. char is g
            for(int j=0; j < two.length(); j++){//first iteration: j = 0. goes until j = 1. second iter: 
                if (one[i] == two[j]) { //first iteration: if ggr[0](g) = rgg[1](g)
                    two[j] =' ';
                    similarLetters.push_back(one[i]);//first iteration: similarLetters = {'g'}
                }
            }
        }
        
        for(int k = 0; k < similarLetters.size(); k++) {
            cout << similarLetters[k]; 
        }
        bool anagram;
        if(similarLetters.size() == one.length()) {
            for(int m =0; m<one.length();m++) {
                if(similarLetters[m] != one[m]) {
                    cout << "Not anagram";
                    anagram = false;
                    break;
                }
                else{
                    anagram=true;
                }
            }
            if(anagram==true) {
                cout << "Is anagram";
            }
        }
        else{
            cout << "Not anagram";
        }         
    }
    else{
        cout << "Not anagram";
    }
}
int main() {
    cout << endl;
    string one;
    string two;
    cout << "Enter a word: ";
    cin >> one;
    cout << "Enter a second word: ";
    cin >> two;
    anagram(one, two);

}
