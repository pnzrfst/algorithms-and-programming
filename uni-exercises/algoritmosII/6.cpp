// Criar um sistema de cadastro e busca, você decide que entidade quer trabalhar (Pessoa, Veículo, Reserva, Animal...), 
// que permita ao usuário inserir novas entidades e buscar por um campo chave os dados de um cadastro existente.

// Dica: Use um vector ou equivalente como base de dados em memória para que possa crescer indefinidamente

// O campo chave pode ser um email, um código de pessoa, placa, código de reserva... depende do domínio escolhido

// Separar as funcionalidades em funções e procedimentos

#include <iostream>
#include <vector>

using namespace std;

struct User {
    string username;
    string name;
    int age;
};



void createUser(User user, vector<User> &users);
User findUserBy(vector<User> users);
User matchUser(User user, vector<User> users);
void fillUsersArray(vector <User> &users);


int main () {
    vector<User> users;
    User findedUser = {};
    
    fillUsersArray(users);
    
    findedUser = findUserBy(users);

    cout << "USUARIO ---> " << findedUser.username << "  COM O NOME DE ---> " <<  findedUser.name << " COM A AGE DE ---> " << findedUser.age;
}

void createUser ( User user, vector<User> &users){
    users.push_back(user);
};

void fillUsersArray(vector <User> &users) {

    int triggerExit = 0;

    while(triggerExit != 1) {
        User user = {};

        cout << "Digite o username" << "\n";
        cin >> user.username;

        cout << "Digite o name" << "\n";
        cin >> user.name;
        
        cout << "Digite a age" << "\n";
        cin >> user.age;


        cout << "Deseja parar? (0) NÃO, (1) SIM" << "\n";
        cin >> triggerExit;

        if(triggerExit == 1){
            createUser(user, users);
            break;
        }else{
            createUser(user, users);
        }
    }
}

User matchUser(User user, vector<User> users) {
    User findedUser = {};

    for(int i = 0; i < users.size(); i++){
        if(users[i].username == user.username && users[i].name == user.name && users[i].age == user.age){
            findedUser = users[i];
            return findedUser;
        }
    }

    cout << "NÃO ENCONTRADO!! PESQUISE DE NOVO. ";
    User nonExistent = {"", "", 00};
    return nonExistent;
}

User findUserBy(vector<User> users){
    User searchTerm = {};
    int acc = 0;

    do{
        cout << "DESEJA BUSCAR POR USERNAME? DIGITE-O > \n";
        cin >> searchTerm.username;


        cout << "DESEJA BUSCAR POR NAME? DIGITE-O > \n";
        cin >> searchTerm.name;


        cout << "DESEJA BUSCAR POR AGE? DIGITE-O > \n";
        cin >> searchTerm.age;

        acc = 1;
    } while (acc == 0);
    
    User findedUser = matchUser(searchTerm, users);

    return findedUser;
}