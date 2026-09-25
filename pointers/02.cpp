//cria um crud d pessoa, para cada pessoa, insira um contato de emergência

#include <iostream>
using namespace std;

struct People {
    string name;
    string email;
    People *emergencyContact;
};

int main () {
    People p;
    int counter = 0;

    do{
        cout << "insira o nome da pessoa: \n";
        cin >> p.name;

        cout << "insira o email da pessoa \n";
        cin >> p.email;

        cout << "insira o nome do contato de emergencia: \n";
        p.emergencyContact = new People();
        cin >> p.emergencyContact->name;

        counter++;
    }while(counter < 4);

    for(int i = 0; i < counter; i++) {
        cout << "Pessoa: " << i << p.name << '\n' << p.email << '\n' << p.emergencyContact->name;
    }
}
