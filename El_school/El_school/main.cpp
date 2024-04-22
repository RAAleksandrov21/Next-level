#include <iostream>
#include <map>
#include <string>
#include <cstdlib>
#include "function.h"
void printSlogan();
void menu();
using namespace std;
int main() {
    printSlogan();
    for (int i = 10; i >0; i++) {
        menu();
        int number;
        cin >> number;
        system("CLS");
        if (number == 1) {
            bool testresult1 = 0;
            bool testresult2 = 0;
            bool testresult3 = 0;
            bool testresult4 = 0;
            bool testresult5 = 0;
            bool testresult6 = 0;
            bool testresult7 = 0;
            bool testresult8 = 0;
            bool testresult9 = 0;
            bool testresult10 = 0;
            bool testresult11 = 0;

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
                bool testresult1 = 1;

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
                bool testresult2 = 1;

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
                bool testresult3 = 1;

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
                bool testresult4 = 1;

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
                bool testresult5 = 1;

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
                bool testresult6 = 1;

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
           {"What goes up but never down?", "staircase"} };
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
                bool testresult7 = 1;

            }
            counter = 0;
            /////////8klas
            map<string, string> bel8klas = {//Creates a string with the answers and the questions.    
                {"It was (blank) serious accident that he was kept in the hospital for a month:' 'A: such a' 'B: so' 'C: such' or 'D: so a'", "A"},
                {"This small dictionary (blank) 50.000 words.' 'A: makes' 'B: has' 'C: consists' or 'D: uses'", "B"},
                {"Which word is spelled incorrectly?' 'A: Literally' 'B: Mischievus' or 'C: Nauseous' ", "B"},
                {"\"Do not PICK the flowers\" The word in all caps has similar meaning with:' 'A: Take' 'B: Throw' 'C: Bring' or 'D: Break'", "A"},
                {"what is the comparative verb of heavy?' 'A: heavier' 'B: more heavier' 'C: more haevy' or 'D: heavy'", "A"},
            };
            srand(time(0));                 //rng
            int randomIndexbel8 = rand() % 4;   // rng is from 0 to 4
            auto bel8 = next(bel8klas.begin(), randomIndexbel8); //auto pravi avtomatichen type next;question begin go vrushta v nachaloto;next go advansva s random number
            cout << bel8->first << endl;
            getline(cin, answer);
            if (answer == bel8->second) {
                counter++;
            }


            map<string, string> mat8klas = {//Creates a string with the answers and the questions.    
             {"4x – 10 = 18", "7"},
             {"4x>=68", "17"},
             {"Which ratio is equivalent to the following? 3 : 5' 'A = 6 : 18' 'B = 9 : 15' 'C = 12 : 15' or 'D = 15 : 20", "B"},
             {"3x + 7 = 25", "6"},
             {"3y−2=13","5"}
            };
            srand(time(0));                 //rng
            int randomIndexmat8 = rand() % 5;   // rng is from 0 to 4
            auto mat8 = next(mat8klas.begin(), randomIndexmat8); //auto pravi avtomatichen type next;question begin go vrushta v nachaloto;next go advansva s random number
            cout << mat8->first << endl;
            getline(cin, answer);
            if (answer == mat8->second) {
                counter++;
            }

            map<string, string> rzn8klas = {//Creates a string with the answers and the questions.    
           {"What is the chemical formula for table salt?", "NaCl"},
           {"What is the atomic number of carbon?", "6"},
           {"Who was the first President of the United States?", "George Washington"},
           {"Who wrote the Declaration of Independence?", "Thomas Jefferson"},
           {"What is the process by which plants make their own food using sunlight, carbon dioxide, and water?", "Photosynthesis "},
           {"What is the largest organ in the human body?", "The skin"},
           {"What is the currency of China ? ", "Yuan"},
           {"Who invented the telephone?", "Alexander Graham Bell"},
           {"Who discovered gravity?", "Sir Isaac Newton"},
           {"What is the longest river in the world?", "Nile River"},
            };
            srand(time(0));                 //rng
            int randomIndexrzn8 = rand() % 4;   // rng is from 0 to 4
            auto rzn8 = next(rzn8klas.begin(), randomIndexrzn8); //auto pravi avtomatichen type next;question begin go vrushta v nachaloto;next go advansva s random number
            cout << rzn8->first << endl;
            getline(cin, answer);
            if (answer == rzn8->second) {
                counter++;
            }
            if (counter > 2) {
                cout << "You pass eighth grade! ";
                bool testresult8 = 1;

            }
            counter = 0;
            /////////9klas
            map<string, string> bel9klas = {//Creates a string with the answers and the questions.    
                {"Identify the subject in the sentence: \"The cat chased the mouse.\"", "The cat"},
                {"Identify the verb in the sentence: \"The cat chased the mouse.\"", "chased"},
                {"Identify the point of view used in the sentence: \"I went to the store and bought some groceries.\"", "first-person"},
                {"What is the past participle of the verb \"swim\"", "swum"},
                {"Identify the past participle in the sentence: \"The cake was baked by Sarah.\"", "baked"},
            };
            srand(time(0));                 //rng
            int randomIndexbel9 = rand() % 4;   // rng is from 0 to 4
            auto bel9 = next(bel9klas.begin(), randomIndexbel9); //auto pravi avtomatichen type next;question begin go vrushta v nachaloto;next go advansva s random number
            cout << bel9->first << endl;
            getline(cin, answer);
            if (answer == bel9->second) {
                counter++;
            }


            map<string, string> mat9klas = {//Creates a string with the answers and the questions.    
             {"4x2 − 9 = 0", "x = -3/2 or x = 3/2"},
             {"Find the square root of 144.", "12"},
             {"2√x + 3 = 7", "4"},
             {"3x2 − 5x + 2 = 0", "1000"},
             {"x/2 + 4 = 9","x = 1 and x = 2/3"}
            };
            srand(time(0));                 //rng
            int randomIndexmat9 = rand() % 5;   // rng is from 0 to 4
            auto mat9 = next(mat9klas.begin(), randomIndexmat9); //auto pravi avtomatichen type next;question begin go vrushta v nachaloto;next go advansva s random number
            cout << mat9->first << endl;
            getline(cin, answer);
            if (answer == mat9->second) {
                counter++;
            }

            map<string, string> rzn9klas = {//Creates a string with the answers and the questions.    
           {"Who was the leader of the Soviet Union during World War II?", "Joseph Stalin"},
           {"What event marked the beginning of World War I?", "The assassination of Archduke Franz Ferdinand"},
           {"Who was the first female Prime Minister of the United Kingdom?", "Margaret Thatcher"},
           {"What is Ohm's law?", "V=IR"},
           {"What is the role of enzymes in biological reactions?", "They speed up chemical reactions in living organisms"},
           {"What is the role of the nervous system in the human body?", "Transmitting signals between different parts of the body"},
           {"What is the function of chlorophyll in plants?", "To capture sunlight during photosynthesis"},
           {"What is the capital of Canada?", "Ottawa"},
           {"What is the chemical symbol for sodium?", "Na"},
           {"In which year did World War II end?", "1945"},
           {"In which year did the Titanic sink?", "1912"},
           {"Who composed the famous opera \"The Barber of Seville\"?", "Gioachino Rossini"},
            };
            srand(time(0));                 //rng
            int randomIndexrzn9 = rand() % 4;   // rng is from 0 to 4
            auto rzn9 = next(rzn9klas.begin(), randomIndexrzn9); //auto pravi avtomatichen type next;question begin go vrushta v nachaloto;next go advansva s random number
            cout << rzn9->first << endl;
            getline(cin, answer);
            if (answer == rzn9->second) {
                counter++;
            }
            if (counter > 2) {
                cout << "You pass ninth grade! ";
                bool testresult9 = 1;

            }
            counter = 0;
            /////////10klas
            map<string, string> bel10klas = {//Creates a string with the answers and the questions.    
                {"Identify the type of figurative language used in the sentence: \"The stars danced in the night sky.\"", "Personification"},
                {"What is the purpose of using dialogue in a story?", "Dialogue helps to develop characters and advance the plot."},
                {"Define the term \"foreshadowing\" in literature.", "Foreshadowing is a literary device used to hint at future events in a story."},
                {"Identify the type of sentence: \"She enjoys playing the piano.\"", "declarative sentence"},
                {"Identify the literary device used in the phrase: \"The darkness enveloped him like a heavy blanket.\"", "simile"},
                {"Define the term \"thesis statement\" in academic writing", "concise statement that summarizes the main point or argument of an essay"},
                {"What is the purpose of a persuasive essay?", "to convince the reader of a particular viewpoint or argument"},
            };
            srand(time(0));                 //rng
            int randomIndexbel10 = rand() % 4;   // rng is from 0 to 4
            auto bel10 = next(bel10klas.begin(), randomIndexbel10); //auto pravi avtomatichen type next;question begin go vrushta v nachaloto;next go advansva s random number
            cout << bel10->first << endl;
            getline(cin, answer);
            if (answer == bel10->second) {
                counter++;
            }


            map<string, string> mat10klas = {//Creates a string with the answers and the questions.    
             {"2x + y = 5   x − 3y = −2", "x = 1 and y = 3"},
             {"Calculate the area of a circle with radius 6 units.", "36π"},
             {"Find the slope of the line passing through the points(-3,2) and (4, -5)", "-1"},
             {"log2 (x + 5) = 3.", "3"},
             {"Calculate the length of the hypotenuse of a right triangle with legs measuring 5 units and 12 units.","169"},
            };
            srand(time(0));                 //rng
            int randomIndexmat10 = rand() % 5;   // rng is from 0 to 4
            auto mat10 = next(mat10klas.begin(), randomIndexmat10); //auto pravi avtomatichen type next;question begin go vrushta v nachaloto;next go advansva s random number
            cout << mat10->first << endl;
            getline(cin, answer);
            if (answer == mat10->second) {
                counter++;
            }

            map<string, string> rzn10klas = {//Creates a string with the answers and the questions.    
           {"What was the main cause of the Great Depression in the 1930s?", "What was the main cause of the Great Depression in the 1930s?"},
           {"What was the purpose of the Marshall Plan?", "Tto provide economic aid to help rebuild Western European economies"},
           {"What was the main goal of the Civil Rights Movement in the United States?", "to end racial segregation and discrimination against African Americans"},
           {"Who was the leader of the Indian independence movement against British rule?", "Mahatma Gandhi"},
           {"What was the main cause of the French Revolution?", "social inequality and economic hardship"},
           {"What is the function of the mitochondria in a cell?", "To generate energy"},
           {"What is the function of the circulatory system in the human body?", "transports oxygen, nutrients, hormones, and waste products"},
           {"What is the function of the ribosomes in a cell?", "site of protein synthesis"},
           {"Describe the structure and function of the cell membrane.", "acts as a semi - permeable barrier"},
           {"Define the term \"stoichiometry\" in chemistry.", "the branch of chemistry that deals with the quantitative relationships between reactants and products in chemical reactions."},
           {"Who is the author of the book \"The Catcher in the Rye\"?", "J.D. Salinger"},
           {"What is the largest moon in the Solar System?", "Ganymede"},
            };
            srand(time(0));                 //rng
            int randomIndexrzn10 = rand() % 4;   // rng is from 0 to 4
            auto rzn10 = next(rzn10klas.begin(), randomIndexrzn10); //auto pravi avtomatichen type next;question begin go vrushta v nachaloto;next go advansva s random number
            cout << rzn10->first << endl;
            getline(cin, answer);
            if (answer == rzn10->second) {
                counter++;
            }
            if (counter > 2) {
                cout << "You pass tenth grade! ";
                bool testresult10 = 1;

            }
            counter = 0;
            /////////11klas
            map<string, string> bel11klas = {//Creates a string with the answers and the questions.    
                {"Identify the literary device used in the following sentence: \"The world is a stage.\"", "Metaphor"},
                {"Who is the author of the novel \"Pride and Prejudice\"?", "Jane Austen"},
                {"What is the main theme of the novel \"1984\" by George Orwell", "Totalitarianism, surveillance, and the loss of individual freedom."},
                {"What literary period is characterized by a focus on individualism, nature, and the supernatural?", "Romanticism"},
                {"Who wrote the poem \"The Waste Land\"?", "T.S. Eliot"},
                {"What is the main theme of the play \"Death of a Salesman\" by Arthur Miller?", "The American Dream"},
                {"Who wrote the novel \"The Great Gatsby\"?", "F. Scott Fitzgerald"},
            };
            srand(time(0));                 //rng
            int randomIndexbel11 = rand() % 4;   // rng is from 0 to 4
            auto bel11 = next(bel11klas.begin(), randomIndexbel11); //auto pravi avtomatichen type next;question begin go vrushta v nachaloto;next go advansva s random number
            cout << bel11->first << endl;
            getline(cin, answer);
            if (answer == bel11->second) {
                counter++;
            }


            map<string, string> mat11klas = {//Creates a string with the answers and the questions.    
             {"x2 − 6x + 9 = 0", "x = 3 repeated root"},
             {"f(x)=3x2 + 2x + 5", "f'(x) = 6x + 2."},
             {"Find the equation of the tangent line to the curve y=x3 - 2x + 5 at the (2, 9)", "y - 9 = 10(x-2)"},
             {"log2(8) − log2(4)", "1"},
             {"Find the sum of the series: 1 + 1/2 + 1/4 + 1/8 + ... (infinite geometric series)","2"},
            };
            srand(time(0));                 //rng
            int randomIndexmat11 = rand() % 5;   // rng is from 0 to 4
            auto mat11 = next(mat11klas.begin(), randomIndexmat11); //auto pravi avtomatichen type next;question begin go vrushta v nachaloto;next go advansva s random number
            cout << mat11->first << endl;
            getline(cin, answer);
            if (answer == mat11->second) {
                counter++;
            }

            map<string, string> rzn11klas = {//Creates a string with the answers and the questions.    
           {"Who was the leader of the Soviet Union during the Cuban Missile Crisis?", "Nikita Khrushchev"},
           {"What was the purpose of the Marshall Plan?", "Tto provide economic aid to help rebuild Western European economies"},
           {"What was the main goal of the Civil Rights Movement in the United States?", "to end racial segregation and discrimination against African Americans"},
           {"What were the main causes of World War I?", "militarism, alliances, imperialism, and nationalism"},
           {"What was the significance of the Berlin Wall?", "a symbol of the Cold War division between East and West Germany"},
           {"What is the function of the mitochondria in a cell?", "To generate energy"},
           {"What is the basic unit of heredity?", "Gene"},
           {"What is the name of the process by which organisms break down food molecules to release energy?", "Cellular respiration"},
           {"What is the scientific term for the study of heredity?", "Genetics"},
           {"What is the unit of measurement for the amount of a substance in chemistry?", "mol"},
           {"What is the name of the bond formed between two atoms by the sharing of electrons?", "Covalent bond."},
           {"What is the term for the minimum amount of energy required to start a chemical reaction?", "Activation energy"},
            };
            srand(time(0));                 //rng
            int randomIndexrzn11 = rand() % 4;   // rng is from 0 to 4
            auto rzn11 = next(rzn11klas.begin(), randomIndexrzn11); //auto pravi avtomatichen type next;question begin go vrushta v nachaloto;next go advansva s random number
            cout << rzn11->first << endl;
            getline(cin, answer);
            if (answer == rzn11->second) {
                counter++;
            }
            if (counter > 2) {
                cout << "You pass eleventh grade! ";
                bool testresult1 = 11;

            }
            //bool testresult1 = 1;

            if (testresult11) {
                cout << "You should go to the 12 grade.";
            }
            else if (testresult10) {
                cout << "You should go to the 11 grade.";

            }
            else if (testresult9) {
                cout << "You should go to the 10 grade.";

            }
            else if (testresult8) {
                cout << "You should go to the 9 grade.";

            }
            else if (testresult7) {
                cout << "You should go to the 8 grade.";

            }
            else if (testresult6) {
                cout << "You should go to the 7 grade.";

            }
            else if (testresult5) {
                cout << "You should go to the 6 grade.";

            }
            else if (testresult4) {
                cout << "You should go to the 5 grade.";

            }
            else if (testresult3) {
                cout << "You should go to the 4 grade.";

            }
            else if (testresult2) {
                cout << "You should go to the 3 grade.";

            }
            else if (testresult1) {
                cout << "You should go to the 2 grade.";

            }
            else {
                cout << "You should go to the 1 grade.";

            }
        }
        if (number == 2) {
            cout << "This is ";
        }
        if (number == 3) {
            cout << "credit";
        }
        if (number == 4) {
            break;
        }
    }
    cout << "Thank you for participating";
}
