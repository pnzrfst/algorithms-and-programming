//achar os palindromos e escrever eles num arquivo .txt
#include <cstdio>
#include <iostream>
using namespace std;

char *invertWord(char *word);
bool areTheyPalindrome(char *current_word, char *inverted_word);

int main () {
    char filename[11] = "person.txt";
    char palindromeFile[15] = "palindrome.txt";


    FILE *file = fopen(filename, "r");
    FILE *openedPalindromeFile = fopen(palindromeFile, "a");

    if(file == NULL){
        fprintf(file, "Não foi possível ler %s");
        return 0;
    }

    char buffer[256];
    int counter = 0;
    
    char current_word[256];

    while(fgets(buffer, sizeof(buffer), file) != NULL) {

        sscanf(buffer, "%s", current_word);

        char *inverted_word = invertWord(current_word);
        
        if(areTheyPalindrome(current_word, inverted_word)){
            cout << current_word << "\n";
            cout << inverted_word << "\n";

            fprintf(openedPalindromeFile, "%s\n", current_word);

            counter++;
        }

        cout << "\n Palavra antes: " << current_word;
        cout << "\n Palavra depois: " << inverted_word;

        delete[] inverted_word;
    }

    cout << "\n Temos o total de " << counter << " palindromos";
}


char *invertWord(char *word) {
    char* finish = word;
    
    while(*finish != '\0') {
        finish++;
    }

    char* inverted_word = new char[finish - word +1];
    char* start = inverted_word;

    while(finish > word) {
        finish--;
        *start = *finish;
        start++;
    }

    *start = '\0';


    return inverted_word;
}


bool areTheyPalindrome(char *current_word, char *inverted_word) {
    while(*current_word != '\0') {
        if(*current_word != *inverted_word ) {
            return false;
        }

        current_word++;
        inverted_word++;
    }

    return true;
}
