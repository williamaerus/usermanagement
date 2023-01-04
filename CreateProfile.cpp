#include <iostream> // everything
#include <fstream> // file management
#include <chrono> // for the time module
#include <ctime> // for the time module
#include <unistd.h> // for the username
using namespace std;

//variables 
string firstTime, name, surname, password, answer;

void confirm() {
    cout << "are you sure? Y/n: ";
    string response;
    getline(cin, response);
    if (response == "y" || response == "Y") {
        answer = "yes";
    } else if (response == "n" || response == "N") {
        answer = "no";
    }
}

void askPassword() {
    cout << "what's your Password ";
    getline(cin, password);
    confirm();
    if (answer == "yes") {
        cout << "your account has been succesfully setup, welcome: " << name<< endl;
    } else if (answer == "no") {
        askPassword();
    } else {
        askPassword();
    }
}

void askSurname() {
    cout << "what's your surname? ";
    getline(cin, surname);
    confirm();
    if (answer == "yes") {
        askPassword();
    } else if (answer == "no") {
        askSurname();
    } else {
        askSurname();
    }
}

void askName() {
    cout << "what's your name? ";
    getline(cin, name);
    confirm();
    if (answer == "yes") {
        askSurname();
    } else if (answer == "no") {
        askName();
    } else {
        askName();
    }
}

void get_time() {
    auto start = std::chrono::system_clock::now();
    auto end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    firstTime = std::ctime(&end_time);
}

void create_profile() {
    // todo 1) create a file, 2) register the first login time and date 3) register username and password;

    // create all variables and functions

    ofstream PUBProfile("Public Profile.txt");
    ofstream SoftwareProfile("SoftwareProfile.txt");
    int getlogin_r(char *buf, size_t bufsize);
    get_time();

    // save everything on files
    // the PUBProfile is made to be seen by the user
    // the SoftwareProfile contains the user
// the SoftwareProfile contains the same things but in a way that the software can read easier

PUBProfile << "first login time and date: " << firstTime << endl;
SoftwareProfile << firstTime << endl;
PUBProfile << "username: " << getlogin() << endl;
SoftwareProfile << getlogin() << endl;

// get user input

askName();

// save user input on file

PUBProfile << "name: " << name << endl;
SoftwareProfile << name << endl;
PUBProfile << "surname: " << surname << endl;
SoftwareProfile << surname << endl;
PUBProfile << "Password: " << password << endl;
SoftwareProfile << password << endl;

}

int main() {
    create_profile();
    return 0;
}


