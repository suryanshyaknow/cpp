#include <iostream>
#include <string>
using namespace std;

class Anime
{
private:
    /* data */
    string hentai;
public:
    string anime;

    string getHanime();
    void setHanime(string s)
    {
        hentai = s; // I don't want it to be accessed outside the function
    }
    
};

string Anime :: getHanime() // datatype here should be of the method you are using at hand.
{
    return hentai;
}

int main(){
    Anime favAnime;

    favAnime.anime = "Naruto"; // object of the class Anime
    favAnime.setHanime("One Piece parody"); // Method of the class Anime

    cout << "\nFavourite Anime: " << favAnime.anime << endl;
    cout << "Favourite Hentai: " << favAnime.getHanime() << endl;

    Anime worstanime;

    worstanime.anime = "The anime that made Zero2 famous. I don't remember the name.";
    worstanime.setHanime("Don't know cuz didn't watch any!!");

    cout << "\nWorst Anime I've ever watched: " << worstanime.anime << endl;
    cout << "Worst Hentai I've ever watched till date: " << worstanime.getHanime() << endl;

    return 0;
}