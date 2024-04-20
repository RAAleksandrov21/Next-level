#include <iostream>
#include <map>
#include <string>
#include <cstdlib>
using namespace std;
int main() {
    int counter = 0;
    /////////1klas
    map<string, string> bel1klas = {//Creates a string with the answers and the questions.    
        {"It could be different colours like brown, white, gray, etc, it eats carrots, it is easily scared and jumps a lot what is it?", "rabbit"},
        {"How many syllables are in the word Jupiter?", "3"},
        {"How many vowels are in the word rabbit?", "2"},
        {"How many syllables are in the word question?", "4"},
    };
    srand(time(0));                 //rng
    int randomIndexbel1 = rand() % 4;   // rng is from 0 to 4
    auto bel1 = next(bel1klas.begin(), randomIndexbel1); //auto pravi avtomatichen type next;question begin go vrushta v nachaloto;next go advansva s random number
    cout << bel1->first << endl;
    string answer;
    getline(cin, answer);
    if (answer == bel1->second) {
        counter++;
    }


    map<string, string> mat1klas = {//Creates a string with the answers and the questions.    
     {"14+5=?", "19"},
     {"18-6=?", "12"},
     {"12=20-?", "8"},
     {"5+12-3=?", "14"},
     {"3+?=6","3"}
    };
    srand(time(0));                 //rng
    int randomIndexmat1 = rand() % 5;   // rng is from 0 to 4
    auto mat1 = next(mat1klas.begin(), randomIndexmat1); //auto pravi avtomatichen type next;question begin go vrushta v nachaloto;next go advansva s random number
    cout << mat1->first << endl;
    getline(cin, answer);
    if (answer == mat1->second) {
        counter++;
    }

    map<string, string> rzn1klas = {//Creates a string with the answers and the questions.    
   {"Which season is the coldest?", "winter"},
   {"Which season is the hottest?", "summer"},
   {"Which season is before summer?", "spring"},
   {"Which season is before winter?", "autumn"},
    };
    srand(time(0));                 //rng
    int randomIndexrzn1 = rand() % 4;   // rng is from 0 to 4
    auto rzn1 = next(rzn1klas.begin(), randomIndexrzn1); //auto pravi avtomatichen type next;question begin go vrushta v nachaloto;next go advansva s random number
    cout << rzn1->first << endl;
    getline(cin, answer);
    if (answer == rzn1->second) {
        counter++;
    }
    if (counter > 2) {
        cout << "You pass first grade! " << endl;
    }
    counter = 0;
    /////////2klas
    map<string, string> bel2klas = {//Creates a string with the answers and the questions.    
        {"Which is the better header for the text: 'The little lion' or 'in the zoo' ", "in the zoo"},
        {"What is the text about: 'Two friends' or 'a walk in the zoo' ", "a walk in the zoo"},
        {"How many names are in the first sentence", "2"},
    };
    srand(time(0));                 //rng
    int randomIndexbel2 = rand() % 3;   // rng is from 0 to 4
    auto bel2 = next(bel2klas.begin(), randomIndexbel2); //auto pravi avtomatichen type next;question begin go vrushta v nachaloto;next go advansva s random number
    cout << "This is the text that the test will be about" << endl;
    cout << "Today, my friends Petjo and Ioana went to the zoo. We saw naughty monkeys, ostriches and goldfish.A brown walrus swam in the cold water. We also stopped at the little lion cub.Shouldn't we come again tomorrow?" << endl;
    cout << bel2->first << endl;
    getline(cin, answer);
    if (answer == bel2->second) {
        counter++;
    }


    map<string, string> mat2klas = {//Creates a string with the answers and the questions.    
     {"14+50=?", "64"},
     {"75-24=?", "51"},
     {"81-17=?", "64"},
     {"?+54=81", "27"},
     {"7*?=63","9"}
    };
    srand(time(0));                 //rng
    int randomIndexmat2 = rand() % 5;   // rng is from 0 to 4
    auto mat2 = next(mat2klas.begin(), randomIndexmat2); //auto pravi avtomatichen type next;question begin go vrushta v nachaloto;next go advansva s random number
    cout << mat2->first << endl;
    getline(cin, answer);
    if (answer == mat2->second) {
        counter++;
    }

    map<string, string> rzn2klas = {//Creates a string with the answers and the questions.    
   {"She is my mother's sister so she is my ?", "aunt"},
   {"She is my mother's mother so she is my ", "grandmother"},
   {"He is my father's brother so he is my?", "uncle"},
   {"He is my father's son so he is my?", "brother"},
    };
    srand(time(0));                 //rng
    int randomIndexrzn2 = rand() % 4;   // rng is from 0 to 4
    auto rzn2 = next(rzn2klas.begin(), randomIndexrzn2); //auto pravi avtomatichen type next;question begin go vrushta v nachaloto;next go advansva s random number
    cout << rzn2->first << endl;
    getline(cin, answer);
    if (answer == rzn2->second) {
        counter++;
    }
    if (counter > 2) {
        cout << "You pass second grade! ";
    }
    counter = 0;
    /////////3klas
    map<string, string> bel3klas = {//Creates a string with the answers and the questions.    
        {"Which words are not related to each other?: 'A: people, vegetables, sell' 'B: travel, traveler, traveled' or 'C: cheerful, cheerful, cheerful'", "A"},
        {"Which word is written wrong?: 'A: pretty' 'B: considerate' or 'C: beutiful'", "C"},
        {"What is the past simple form of the verb play?", "played"},
    };
    srand(time(0));                 //rng
    int randomIndexbel3 = rand() % 3;   // rng is from 0 to 4
    auto bel3 = next(bel3klas.begin(), randomIndexbel3); //auto pravi avtomatichen type next;question begin go vrushta v nachaloto;next go advansva s random number
    cout << bel3->first << endl;
    getline(cin, answer);
    if (answer == bel3->second) {
        counter++;
    }


    map<string, string> mat3klas = {//Creates a string with the answers and the questions.    
     {"43+195=?", "238"},
     {"1000-574=?", "426"},
     {"153.6=?", "918"},
     {"?-570=430", "1000"},
     {"1km=?m","1000"}
    };
    srand(time(0));                 //rng
    int randomIndexmat3 = rand() % 4;   // rng is from 0 to 4
    auto mat3 = next(mat3klas.begin(), randomIndexmat3); //auto pravi avtomatichen type next;question begin go vrushta v nachaloto;next go advansva s random number
    cout << mat3->first << endl;
    getline(cin, answer);
    if (answer == mat3->second) {
        counter++;
    }

    map<string, string> rzn3klas = {//Creates a string with the answers and the questions.    
   {"Amy turned 14 two years ago from now so this year she turns:", "16"},
   {"What word is spelled incorrectly in every single dictionary?", "incorrectly"},
   {"How many months have 28 days?", "12"},
   {"He is my father's grandson so he is my:", "son"},
    };
    srand(time(0));                 //rng
    int randomIndexrzn3 = rand() % 4;   // rng is from 0 to 4
    auto rzn3 = next(rzn3klas.begin(), randomIndexrzn3); //auto pravi avtomatichen type next;question begin go vrushta v nachaloto;next go advansva s random number
    cout << rzn3->first << endl;
    getline(cin, answer);
    if (answer == rzn3->second) {
        counter++;
    }
    if (counter > 2) {
        cout << "You pass third grade! ";
    }
}
