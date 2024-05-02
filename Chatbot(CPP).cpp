#include <iostream>
using namespace std;

void greet(string bot_name, string birth_year) {
    cout << "Hello! My name is " << bot_name << "." << endl;
    cout << "I was created in " << birth_year << "." << endl;
}

void remind_name() {
    cout << "Please, remind me your name." << endl;
    string name;
    cin >> name;
    cout << "What a great name you have, " << name << "!" << endl;
}

void guess_age() {
    cout << "Let me guess your age." << endl;
    cout << "Enter remainders of dividing your age by 3, 5, and 7." << endl;
    
    int rem3, rem5, rem7;
    cin >> rem3 >> rem5 >> rem7;
    int age = (rem3 * 70 + rem5 * 21 + rem7 * 15) % 105;
    
    cout << "Your age is " << age << "; that's a good time to start programming!" << endl;
}

void count() {
    cout << "Now I will prove to you that I can count to any number you want." << endl;
    int num;
    cin >> num;
    for (int i = 0; i <= num; i++) {
        cout << i << " !" << endl;
    }
}

void test() {
    cout << "Let's test your programming knowledge." << endl;
    cout << "Why do we use methods?" << endl;
    cout << "1. To repeat a statement multiple times." << endl;
    cout << "2. To decompose a program into several small subroutines." << endl;
    cout << "3. To determine the execution time of a program." << endl;
    cout << "4. To interrupt the execution of a program." << endl;
    
    int answer = 2;
    int guess;
    cin >> guess;
    while (guess != answer) {
        cout << "Please, try again." << endl;
        cin >> guess;
    }
    cout << "Completed, have a nice day!" << endl;
}

void end() {
    cout << "Congratulations, have a nice day!" << endl;
}

int main() {
    greet("MABbot.ai", "2024");
    remind_name();
    guess_age();
    count();
    test();
    end();
    return 0;
}
