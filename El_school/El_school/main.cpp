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
    int randomIndexmat3 = rand() % 5;   // rng is from 0 to 4
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
    counter = 0;
    /////////4klas
    map<string, string> bel4klas = {//Creates a string with the answers and the questions.    
        {"Choose the word that comes first in alphabetical order: 'A: planet' 'B: plain' or 'C: pity'", "B"},
        {"I'm Sorry. You (blank) park here: 'A: must' 'B: have to' or 'C: can't'", "C"},
        {"What is the past simple form of the verb come?", "came"},
        {"What is the past simple form of the verb cut?", "cut"},
    };
    srand(time(0));                 //rng
    int randomIndexbel4 = rand() % 4;   // rng is from 0 to 4
    auto bel4 = next(bel4klas.begin(), randomIndexbel4); //auto pravi avtomatichen type next;question begin go vrushta v nachaloto;next go advansva s random number
    cout << bel4->first << endl;
    getline(cin, answer);
    if (answer == bel4->second) {
        counter++;
    }


    map<string, string> mat4klas = {//Creates a string with the answers and the questions.    
     {"The number seven hundred and nine million twelve thousand and eight is written in figures like this: 'A: 709 120 008' 'B: 709 012 800' 'C: 709 012 008'", "C"},
     {"36648:12=? 'A: 354' 'B: 3054' 'C: 30054'", "B"},
     {"Which three numbers are less than 30,020? 'A: 30 019, 30 020, 30 021' 'B: 30 001, 30 010, 30 019' 'C: 30 001, 30 010, 31 000'", "B"},
     {"?:4=7612", "30448"},
     {"75km=?m","75000"}
    };
    srand(time(0));                 //rng
    int randomIndexmat4 = rand() % 5;   // rng is from 0 to 4
    auto mat4 = next(mat4klas.begin(), randomIndexmat4); //auto pravi avtomatichen type next;question begin go vrushta v nachaloto;next go advansva s random number
    cout << mat4->first << endl;
    getline(cin, answer);
    if (answer == mat4->second) {
        counter++;
    }

    map<string, string> rzn4klas = {//Creates a string with the answers and the questions.    
   {"The capital of Bulgaria is:", "Sofia"},
   {"How many continents are there?", "7"},
   {"What is the opposite of north?", "south"},
   {"How many sides does a hexagon have?", "6"},
    };
    srand(time(0));                 //rng
    int randomIndexrzn4 = rand() % 4;   // rng is from 0 to 4
    auto rzn4 = next(rzn4klas.begin(), randomIndexrzn4); //auto pravi avtomatichen type next;question begin go vrushta v nachaloto;next go advansva s random number
    cout << rzn4->first << endl;
    getline(cin, answer);
    if (answer == rzn4->second) {
        counter++;
    }
    if (counter > 2) {
        cout << "You pass fourth grade! ";
    }
    counter = 0;
    /////////5klas
    map<string, string> bel5klas = {//Creates a string with the answers and the questions.    
        {"There (blank) 25 students in class: 'A: is' 'B: are' or 'C: will'", "B"},
        {"What is the opposite of sad? 'A: depressed' 'B: discouraged' or 'C: happy'", "C"},
        {"Which of these verbs are not in the past simple form? 'A: taught' 'B: sell' or 'C: ran'", "B"},
        {"What is the past simple form of the verb lead?", "led"},
        {"What is the past simple form of the verb stand?", "stood"},
    };
    srand(time(0));                 //rng
    int randomIndexbel5 = rand() % 4;   // rng is from 0 to 4
    auto bel5 = next(bel5klas.begin(), randomIndexbel5); //auto pravi avtomatichen type next;question begin go vrushta v nachaloto;next go advansva s random number
    cout << bel5->first << endl;
    getline(cin, answer);
    if (answer == bel5->second) {
        counter++;
    }


    map<string, string> mat5klas = {//Creates a string with the answers and the questions.    
     {"How many of the numbers 1; 3; 8; 11; 13; 15; 17; 19; 21 are prime numbers: 'A: 6' 'B: 5' 'C: 7'", "A"},
     {"The number which can be divided by 2 is: 'A: 412321' 'B: 300505' 'C: 107312'", "C"},
     {"The number which can be divided by 3 is: 'A: 3301' 'B: 7701' 'C: 1204'", "B"},
     {"How many square centimeters is 0.02 m2 equal to?", "200"},
     {"A recipe for making cookies calls for 10 cups of flour. If you want to make half of the recipe, how many cups of flour do you need?","5"}
    };
    srand(time(0));                 //rng
    int randomIndexmat5 = rand() % 5;   // rng is from 0 to 4
    auto mat5 = next(mat5klas.begin(), randomIndexmat5); //auto pravi avtomatichen type next;question begin go vrushta v nachaloto;next go advansva s random number
    cout << mat5->first << endl;
    getline(cin, answer);
    if (answer == mat5->second) {
        counter++;
    }

    map<string, string> rzn5klas = {//Creates a string with the answers and the questions.    
   {"What is the chemical symbol for water?", "H20"},
   {"Who painted the Mona Lisa?", "Leonardo da Vinci"},
   {"What is the opposite of east?", "west"},
   {"What is the tallest mountain in the world??", "Everest"},
   {"Who is the current President of the United States?", "Joe Biden"},
   {"What is the main ingredient in guacamole?", "avocado"},
   {"What is the largest mammal in the world?", "blue whale"},
   {"What is the currency of Japan?", "yen"},
   {"What is the capital of France?", "Paris"},
   {"What is the chemical symbol for gold?", "Au"},
    };
    srand(time(0));                 //rng
    int randomIndexrzn5 = rand() % 4;   // rng is from 0 to 4
    auto rzn5 = next(rzn5klas.begin(), randomIndexrzn5); //auto pravi avtomatichen type next;question begin go vrushta v nachaloto;next go advansva s random number
    cout << rzn5->first << endl;
    getline(cin, answer);
    if (answer == rzn5->second) {
        counter++;
    }
    if (counter > 2) {
        cout << "You pass fifth grade! ";
    }
    counter = 0;
    /////////6klas
    map<string, string> bel6klas = {//Creates a string with the answers and the questions.    
        {"Policemen are sometimes on (blank) at night: 'A: force' 'B: patrol' or 'C: cover'", "B"},
        {"What is the antonym of rigorous? 'A: difficult' 'B: effortless' or 'C: tough'", "B"},
        {"What is the plural form of aircraft?", "aircraft"},
        {"What is the past simple form of the verb understand?", "understood"},
        {"What is the past simple form of the verb teach?", "taught"},
    };
    srand(time(0));                 //rng
    int randomIndexbel6 = rand() % 4;   // rng is from 0 to 4
    auto bel6 = next(bel6klas.begin(), randomIndexbel6); //auto pravi avtomatichen type next;question begin go vrushta v nachaloto;next go advansva s random number
    cout << bel6->first << endl;
    getline(cin, answer);
    if (answer == bel6->second) {
        counter++;
    }


    map<string, string> mat6klas = {//Creates a string with the answers and the questions.    
     {"The value of the expression –a.3–3 if a=–4 is: 'A: 9' 'B: 4' 'C: -15'", "A"},
     {"The number which can be divided by 12 is: 'A: 234' 'B: 216' 'C: 266'", "B"},
     {"The number which can be divided by 29 is: 'A: 406' 'B: 1395' 'C: 910'", "A"},
     {"How many square centimeters is 0.0002 dm2 equal to?", "0.02"},
     {"If there are 500 pieces of candy and 10 students in a class, how many pieces of candy does each student get?","50"}
    };
    srand(time(0));                 //rng
    int randomIndexmat6 = rand() % 5;   // rng is from 0 to 4
    auto mat6 = next(mat6klas.begin(), randomIndexmat6); //auto pravi avtomatichen type next;question begin go vrushta v nachaloto;next go advansva s random number
    cout << mat6->first << endl;
    getline(cin, answer);
    if (answer == mat6->second) {
        counter++;
    }

    map<string, string> rzn6klas = {//Creates a string with the answers and the questions.    
   {"Who was the first person to step on the moon?", "Neil Armstrong"},
   {"What is the currency of the United Kingdom?", "pound"},
   {"Which planet is known as the Red Planet?", "Mars"},
   {"What is the largest ocean on Earth?", "Pacific Ocean"},
   {"Who painted the famous artwork Starry Night?", "Vincent van Gogh"},
   {"Who is known as the father of modern physics?", "Albert Einstein"},
   {"What is the chemical symbol for iron?", "Fe"},
   {"What is the tallest building in the world?", "Burj Khalifa"},
   {"Who wrote the play Hamlet?", "William Shakespeare"},
   {"Who is credited with inventing the telephone?", "Alexander Graham Bell"},
    };
    srand(time(0));                 //rng
    int randomIndexrzn6 = rand() % 4;   // rng is from 0 to 4
    auto rzn6 = next(rzn6klas.begin(), randomIndexrzn6); //auto pravi avtomatichen type next;question begin go vrushta v nachaloto;next go advansva s random number
    cout << rzn6->first << endl;
    getline(cin, answer);
    if (answer == rzn6->second) {
        counter++;
    }
    if (counter > 2) {
        cout << "You pass sixth grade! ";
    }
    counter = 0;
    /////////7klas
    map<string, string> bel7klas = {//Creates a string with the answers and the questions.    
        {"Is this a good time to talk? Sorry, no. I (blank) dinner: 'A: cook' 'B: am cooking' or 'C: cooking'", "B"},
        {"Which of these antonyms of the word comparable are spelt right? 'A: analogous' 'B: corespondent' or 'C: paralel'", "A"},
        {"What is the plural form of leaf?", "leaves"},
        {"What is the past simple form of the verb let?", "let"},
        {"What is the past simple form of the verb bring?", "brought"},
    };
    srand(time(0));                 //rng
    int randomIndexbel7 = rand() % 4;   // rng is from 0 to 4
    auto bel7 = next(bel7klas.begin(), randomIndexbel7); //auto pravi avtomatichen type next;question begin go vrushta v nachaloto;next go advansva s random number
    cout << bel7->first << endl;
    getline(cin, answer);
    if (answer == bel7->second) {
        counter++;
    }


    map<string, string> mat7klas = {//Creates a string with the answers and the questions.    
     {"Simultaneously from A to B and from B to A, two trucks set off against each other. The speed of one is 60 km/h,and the other is 70 km/h.If the distance between A and B is not less than 260 km, the two trucks may meet after: 'A:less than 2h' 'B: more than 8h' 'C: more than 3h'", "C"},
     {"The lengths of the sides of a triangle are whole numbers. If two of the sides of a triangle are 5 cm and 1 cm, then the third side is (blank) cm:", "4"},
     {"Given a triangle ABC such that C=90 degrees. Point P is arbitrary on side AB. It is true that: 'A: ВС < АС < АВ' 'B: АС < ВС < АВ' 'C: ВС < АВ < АС'", "B"},
     {"What are two fifths of 50?", "20"},
     {"3x-5=16,x=?","7"}
    };
    srand(time(0));                 //rng
    int randomIndexmat7 = rand() % 5;   // rng is from 0 to 4
    auto mat7 = next(mat7klas.begin(), randomIndexmat7); //auto pravi avtomatichen type next;question begin go vrushta v nachaloto;next go advansva s random number
    cout << mat7->first << endl;
    getline(cin, answer);
    if (answer == mat7->second) {
        counter++;
    }

    map<string, string> rzn7klas = {//Creates a string with the answers and the questions.    
   {"What is the smallest unit of life?", "The cell"},
   {"What is the process by which organisms produce offspring similar to themselves?", "Reproduction"},
   {"What is the process by which plants make their own food?", "Photosynthesis"},
   {"Who wrote the Declaration of Independence", "Thomas Jefferson"},
   {"Who was the famous Egyptian queen known for her beauty and influence?", "Cleopatra"},
   {"What is the unit of electric current?", "Ampere"},
   {"What is the main source of energy for the Earth?", "The Sun"},
   {"In what year did Christopher Columbus discover America?", "1492"},
   {"Who wrote Romeo and Juliet?", "William Shakespeare"},
   {"What goes up but never down?", "staircase"};
    srand(time(0));                 //rng
    int randomIndexrzn7 = rand() % 4;   // rng is from 0 to 4
    auto rzn7 = next(rzn7klas.begin(), randomIndexrzn7); //auto pravi avtomatichen type next;question begin go vrushta v nachaloto;next go advansva s random number
    cout << rzn7->first << endl;
    getline(cin, answer);
    if (answer == rzn7->second) {
        counter++;
    }
    if (counter > 2) {
        cout << "You pass seventh grade! ";
    }
    counter = 0;
}

