//Crie um sistema de cadastro simples contato (ou produtos, ou outra entidade que preferir)
//que carregue os dados de um arquivo, permita exibir a lista completa de cadastros, buscar um item
//especifico ou inserir um novo cadastro que deverá ser agregado ao arquivo.
#include<iostream>
#include<vector>

struct ProductEntity {
    int id;
    char name[30]; 
    int quantity;
};

using namespace std;

vector<ProductEntity> loadAllProducts(char filename[13]);
bool createdProduct(int id, char name[256], int quantity, char filename[13]);
ProductEntity searchProduct(int id, char filename[13]);

int main () {
    char productsFile[13] = "products.txt";
    
    int search_id;
    int id;
    char name[256];
    int quantity;

    cout << "\n Insira o id do produto: ";
    cin >> id;

    cout << "\n Insira o nome do produto: ";
    cin >> name;

    cout << "\n Insira a quantidade: ";
    cin >> quantity;

    if (createdProduct(id, name, quantity, productsFile)) cout << "\n EBAAA, criou!!";
    
    cout << "\n Retornando todos os produtos: ";
    
    vector<ProductEntity> products = loadAllProducts(productsFile);

    for(int i = 0; i < products.size(); i++) {
        cout << "\n Id: " << products[i].id;
        cout << "\n Nome: " << products[i].name;
        cout << "\n Quantidade: " << products[i].quantity;
    }

    cout << "\n Procurar por produto com o id(): ";
    cin >> search_id;

    ProductEntity product = searchProduct(search_id, productsFile);

    cout << "\n Mostrando dados do produto: " << product.id;
    cout << "\n ID>> " << product.id << " Nome: " << product.name << " Quantidade" << product.quantity;

};


bool createdProduct(int id, char name[256], int quantity, char filename[13]) {
    FILE *opened_file = fopen(filename, "a");

    if(!id || !name || !quantity || !opened_file) {
        cout << "\n Informações inválidas, verifique.";
        return false;
    }


    if(opened_file != nullptr) {
        fprintf(opened_file, "%d;%s;%d\n", id, name, quantity);
        
        fclose(opened_file);
    };

    return true;

}

vector<ProductEntity> loadAllProducts(char filename[13]) {
    FILE *opened_file = fopen(filename, "r");
    vector<ProductEntity> allProduts;
    char buffer[256];

    while(fgets(buffer, sizeof(buffer), opened_file) != NULL) {
        ProductEntity product;
        if(sscanf(buffer, "%d;%29[^;];%d\n", &product.id, &product.name, &product.quantity) == 3) {
            allProduts.push_back(product);
        };
    }

    fclose(opened_file);
    return allProduts;
}

ProductEntity searchProduct(int id, char filename[13]) {
    char buffer[256];
    FILE *opened_file = fopen(filename, "r");
    
    ProductEntity searched_product;

    while (fgets(buffer, sizeof(buffer), opened_file) != NULL) {
        ProductEntity product;
        if (sscanf(buffer, "%d;%29[^;];%d", &product.id, product.name, &product.quantity) == 3
            && product.id == id) {
            searched_product = product; 
            break;
        }
    }

    fclose(opened_file);
    return searched_product;
}