#include <iostream>
#include <string>
using namespace std;


struct Ksi {
    
    Ksi* Knast;
};


struct Wyp {
    Ksi* wypozyczona;
    string dataWyp;
    Wyp* nastWyp;
};

struct Phone {
    string name_b;
    string name_m;
    string factor;
    int year;
    int size;
    int price;
    Phone* Cnast;
    Wyp* wypKs;
};




void dodajphone(Phone*& gl, const string nam, string na,  string facto, int yea, int siz, int pric);

void wypiszC(Phone* czyt);
void wypiszLC(Phone* glowa);






int main()
{
    Phone* glowaC = NULL;
    Ksi* glowaK = NULL;
  

   
    
    string namm;
    string nammm;
    string fa;
    int y;
    int s;
    int p;
    cin >> namm;
    cin >> nammm;
    cin >> fa;
    cin >> y;
    cin >> s;
    cin >> p;


    dodajphone(glowaC, namm, nammm, fa, y, s, p);
    
    wypiszLC(glowaC);
    cout << endl;

    


    cout << endl;
   
    wypiszLC(glowaC);

  

    cin.get();
    return 0;
}






void dodajphone(Phone*& gl, const string nam, string na, string facto, int yea, int siz, int pric)
{
    
    Phone* nowy = new Phone;
    nowy->name_b = nam;
    nowy->name_b = na;
    nowy->factor = facto;
    nowy->year = yea;
    nowy->size = siz;
    
    nowy->price = pric;
    nowy->Cnast = NULL;
    nowy->wypKs = NULL;

    if (gl == NULL) 
    {
        gl = nowy; return;
    }

    if (gl->name_b > nowy->name_b)
    {
        nowy->Cnast = gl;
        gl = nowy;
        return;
    }
    if (gl->name_m == nowy->name_m)
    {
        if (gl->name_m > nowy->name_m)
        {
            nowy->Cnast = gl;
            gl = nowy;
            return;
        }
    }

    Phone* tmp = gl; 
    while (tmp->Cnast != NULL && tmp->Cnast->name_b < nowy->name_b)
        tmp = tmp->Cnast;

    nowy->Cnast = tmp->Cnast;
    tmp->Cnast = nowy;
}





void wypiszC(Phone* czyt) 
{
   
    if (czyt != NULL) {
        cout << czyt->name_b << " " << czyt->name_m << " " << czyt->factor << czyt->year << " " << czyt->size << " " << czyt->price << endl;
       

    }
}
void wypiszLC(Phone* glowa)
{
    while (glowa != NULL)
    {
        wypiszC(glowa);
     

        glowa = glowa->Cnast;
    }
}
Phone* znajdzphone(Phone* gl, const string nazw, const string nam)
{
    while (gl != NULL)
    {
        if (gl->name_b == nazw && gl->name_m == nam)
            return gl;

        gl = gl->Cnast;
    }
    return NULL;

}














void usunphone(Phone* gl, const string nazwisko, const string imie)
{


    if (gl == usun)
    {
        if (usun->wypKs == NULL)
        {
            gl = gl->Cnast;
            delete usun; return;
        }

    }
    Phone* tmp = gl;
    while ((tmp->Cnast != NULL) && tmp->Cnast != usun)
        tmp = tmp->Cnast;

    if (tmp->Cnast != NULL)
    {
        if (usun->wypKs == NULL) {
            usun = tmp->Cnast;
            tmp->Cnast = tmp->Cnast->Cnast;
            delete usun;
        }
            
        
        
    }
}
