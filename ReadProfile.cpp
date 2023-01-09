
//
// file to read the actual profile if it exists
// Francesco Serangeli 9/01/23
//
#include <limits>
#include <iostream>
#include <fstream>
using namespace std;
int fileExist;
string name,username,surname,password;
#include <fstream>
#include <limits>

std::fstream& GotoLine(std::fstream& file, unsigned int num){
    file.seekg(std::ios::beg);
    for(int i=0; i < num - 1; ++i){
        file.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }
    return file;
}


void getusername(){
    using namespace std;
    fstream file("SoftwareProfile.txt");

    GotoLine(file, 3);

    string line8;
    file >> line8;

    // cout << line8<<endl;
    username = line8;
}
void getName(){
    fstream file("SoftwareProfile.txt");

    GotoLine(file, 4);

    string line8;
    file >> line8;

    // cout << line8<<endl;
    name = line8;
}
void getsurname(){
    fstream file("SoftwareProfile.txt");

    GotoLine(file, 5);

    string line8;
    file >> line8;

    // cout << line8<<endl;
    surname = line8;
}
void getpassword(){
    fstream file("SoftwareProfile.txt");

    GotoLine(file, 6);

    string line8;
    file >> line8;

    // cout << line8<<endl;
    password = line8;
}
void getFullProfile(){
    getusername();
    getName();
    getsurname();
    getpassword();
    cout << "username: "<< username<<endl;
    cout << "name: "<< name<<endl;
    cout << "surname: "<< surname<<endl;
}
void fileExists(){
    fileExist = 0;
    ifstream Profile;
    Profile.open("SoftwareProfile.txt");
    if (Profile){
        fileExist == 1;
        getFullProfile();
    }
    else {
        fileExist == 0;
        cout << "file does not exist"<<endl;
    }
}
int main(){
    fileExists();
    
}
