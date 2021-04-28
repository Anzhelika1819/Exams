#include <iostream>
#include <fstream>
using namespace std;
struct Music
{
    string Name;
    string Author;
    string Text;
    int year;
    void delText() {
        Text = "";
    }
};
void addTextFromConsple(Music music, string text) {
    music.Text = text;
}

void addTextFromFile(Music music, string pathTofile) {
    fstream file("file.text");
    if (file.is_open()) { //вызов метода is_open()
        cout << "Все ок! Файл открыт!\n\n" << endl;
        file >> pathTofile;
    }
    else
    { 
        cout << "Файл не открыт!\n\n" << endl;
    }
}


int main()
{
    setlocale(LC_ALL, "Rus");
    Music* music = new Music[];
    music[0].delText();
    

    }
    
