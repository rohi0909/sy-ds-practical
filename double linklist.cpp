#include <iostream>

using namespace std;

struct song
{
    string name;
    song* pre;
    song* next;
};

int main()
{
    
    song* newsong = new song;

    
    newsong->name = "Tere N";

    
    newsong->pre=null;
    newsong->next=null;

    cout << "Song: " << newsong->name << endl;

    
   

    return 0;
}
