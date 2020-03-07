#include <iostream>
#include <fstream>
#include <cmath>
#include <stdlib.h>

using namespace std;

class Dictionary {
    
public:
    
    void lang_C() {
        
        int chooseAct;
        
        string nameFile_C = "dict_C++.txt";
        ofstream DictLang_C (nameFile_C);
        
        cout << "What do you want to do?\n";
        cout << "1. Write smth in dictionary\n";
        cout << "2. Read smth from dictionary\n";
        cout << "3. Delete smth from dictionary\n";
        cout << "4. Exit\n";
        cout << "   Your choose: ";
        cin >> chooseAct;
        
        
        switch (chooseAct) {
            case 1:
                writeFile(nameFile_C);
                break;
            
            case 2:
                readFile(nameFile_C);
                break;
            
            case 3:
                deleteFile(nameFile_C);
                break;
                
            case 4:
                exit(0);
                
            default:
                cout << "EROR\n";
                break;
        }
        
        DictLang_C.close();
    }

    void lang_J() {
        
        int chooseAct;
        
        string nameFile_J = "dict_Java.txt";
        ofstream DictLang_J(nameFile_J);
        
        cout << "What do you want to do?\n";
        cout << "1. Write smth in dictionary\n";
        cout << "2. Read smth from dictionary\n";
        cout << "3. Delete smth from dictionary\n";
        cout << "4. Exit\n";
        cout << "   Your choose: ";
        cin >> chooseAct;
        
        
        switch (chooseAct) {
            case 1:
                writeFile(nameFile_J);
                break;
            
            case 2:
                readFile(nameFile_J);
                break;
            
            case 3:
                deleteFile(nameFile_J);
                break;
                
            case 4:
                exit(0);
                
            default:
                cout << "EROR\n";
                break;
        }
    
        DictLang_J.close();
    }

    void lang_K() {
        
        int chooseAct;
        
        string nameFile_K = "dict_Kotlin.txt";
        ofstream DictLang_K(nameFile_K);
        
        cout << "What do you want to do?\n";
        cout << "1. Write smth in dictionary\n";
        cout << "2. Read smth from dictionary\n";
        cout << "3. Delete smth from dictionary\n";
        cout << "4. Exit.\n";
        cout << "   Your choose: ";
        cin >> chooseAct;
        
        
        switch (chooseAct) {
            case 1:
                writeFile(nameFile_K);
                break;
            
            case 2:
                readFile(nameFile_K);
                break;
            
            case 3:
                deleteFile(nameFile_K);
                break;
                
            case 4:
                exit(0
                     );
                
            default:
                cout << "EROR\n";
                break;
        }
    
        DictLang_K.close();
    }
    
    void writeFile(string fileName) {
        
        string chooseExit;
        
        string nameCommand;
        string contentCommand;
        string meenCommand;
        
        ofstream writeFile(fileName);
        
        for (;;) {
            
            cout << "You must write three things.\n";
            cout << "1. Name of this command, then you can find command use this name.\n";
            cout << "2. Content of this command.\n";
            cout << "3. Meen of this command.\n";
            cout << "   You want to start(Y / N): ";
            cin >> chooseExit;
            
            if (chooseExit == "Y") {
                cout << "First let's set name for this command. Write at the bottom of this message.\n";
                cin >> nameCommand;
                
                cout << "Second you can text content of this command. Write at the bottom of this message.\n";
                cin >> contentCommand;
                
                cout << "Now you can write meening of this command. Write at the bottom of this message.\n";
                cin >> meenCommand;
                
                writeFile << nameCommand;
                
                cout << "Thanks, now you can read this command from CoderDict.\n";
                continue;
            }
            else if (chooseExit == "N") {
                cout << "Ok.";
                break;
            }
            else {
                cout << "EROR. Try again :-)\n";
                continue;
            }
            
        }
        
    }

    void readFile(string fileName) {
        
        
    }

    void deleteFile(string fileName) {
        
        
    }
};

int main(int argc, const char * argv[]) {
    
    Dictionary myAct;
    int chooseLang;
    cout << "Choose the language or exit(1 - C++; 2 - Java; 3 - Kotlin; 4 - Exit): ";
    cin >> chooseLang;
    
    for (;;) {
        
        switch (chooseLang) {
            case 1: {
            
                myAct.lang_C();
                break;
            }
            
            case 2: {
                
                myAct.lang_J();
                break;
            }
            case 3: {
            
                myAct.lang_K();
                break;
            }
                
            case 4:
                break;
            
            default:
            
                cout << "Eror\n";
                break;
        }
    }
    
    
}
