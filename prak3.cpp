#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Name_values
{
public:

    int Fehlers;
    string E_Tag;
    int Nummer;
    vector<int> Mo, Di, Mi, Do, Fr, Sa, So;
 int nummer;
     string Tag;
     string TagKurz;
  
public:
    
    int Eingabe();
    void Vergleich();
    void Ausgabe();
    void warte();




    //Standardkonstruktor
   Name_values()
   {

   }
   // Konstruktor
//    Name_values(string e_Tag,int nummer)
//    {
     
//    }
};

int Name_values::Eingabe()
{

    cout << "Bitte einen Wochentag eingeben:";
    cin >> E_Tag;

    if (E_Tag == "q")
    {

        return 0;

    }
    else
    {
        cout << "Bitte Zahl eingeben: " << endl;
        cin >> Nummer;

        return 1;
    }
}

void Name_values::Vergleich()
{

    if (E_Tag == "Mo" || E_Tag == "Montag")
    {

        Mo.push_back(Nummer);

    }
    else
    {
        if (E_Tag == "Di" || E_Tag == "Dienstag")
        {

            Di.push_back(Nummer);

        }
        else
        {
            if (E_Tag == "Mi" || E_Tag == "Mitwoch")
            {

                Mi.push_back(Nummer);

            }
            else
            {

                if (E_Tag == "Do" || E_Tag == "Donnerstag")
                {

                    Do.push_back(Nummer);

                }
                else
                {
                    if (E_Tag == "Fr" || E_Tag == "Freitag")
                    {

                        Fr.push_back(Nummer);

                    }
                    else
                    {
                        if (E_Tag == "Sa" || E_Tag == "Samstag")
                        {

                            Sa.push_back(Nummer);

                        }
                        else
                        {
                            if (E_Tag == "So" || E_Tag == "Sonntag")
                            {

                                So.push_back(Nummer);

                            }
                            else
                            {

                                Fehlers++;

                            }
                        }
                    }
                }
            }
        }
    }
    cout<<E_Tag;
}

void Name_values::Ausgabe()
{

    int Temp;

    if (Mo.size())
    {

        Temp = 0;
        cout << "Montag:" << endl;
        for (int i = 0; i < Mo.size(); ++i)
        {

            cout << "Wert/e: " << Mo[i] << endl;
            Temp = Temp + Mo[i];

        }

        cout << "Mittelwert: " << Temp / Mo.size() << endl;
        cout << " Anzahl der Werte: " << Mo.size() << endl;

    }

    if (Di.size())
    {

        Temp = 0;
        cout << "Dienstag:" << endl;

        for (int i = 0; i < Di.size(); ++i)

        {

            cout << " Wert/e:" << Di[i] << endl;
            Temp = Temp + Di[i];

        }

        cout << " Mittelwert: " << Temp / Di.size() << endl;
        cout << " Anzahl der Werte:  " << Di.size() << endl;

    }

    if (Mi.size())
    {

        Temp = 0;
        cout << "Mittwoch:" << endl;

        for (int i = 0; i < Mi.size(); ++i)
        {

            cout << "Wert/e: " << Mi[i] << endl;
            Temp = Temp + Mi[i];

        }

        cout << "Mittelwert: " << Temp / Mi.size() << endl;
        cout << " Anzahl der Werte:  " << Mi.size() << endl;

    }

    if (Do.size())
    {

        Temp = 0;
        cout << "Donnerstag:" << endl;
        for (int i = 0; i < Do.size(); ++i)
        {

            cout << "Wert/e: " << Do[i] << endl;
            Temp = Temp + Do[i];

        }

        cout << " Mittelwert: " << Temp / Do.size() << endl;
        cout << " Anzahl der Werte:  " << Do.size() << endl;
    }

    if (Fr.size())
    {
        Temp = 0;
        cout << "Freitag:" << endl;

        for (int i = 0; i < Fr.size(); ++i)
        {

            cout << " Wert/e: " << Fr[i] << endl;
            Temp = Temp + Fr[i];

        }

        cout << "Mittelwert: " << Temp / Fr.size() << endl;
        cout << " Anzahl der Werte: " << Fr.size() << endl;

    }

    if (Sa.size())
    {

        Temp = 0;
        cout << "Samstag:" << endl;

        for (int i = 0; i < Sa.size(); ++i)
        {

            cout << " Wert/e: " << Sa[i] << endl;
            Temp = Temp + Sa[i];

        }

        cout << " Mittelwert: " << Temp / Sa.size() << endl;
        cout << " Anzahl der Werte: " << Sa.size() << endl;

    }

    if (So.size())
    {
        Temp = 0;
        cout << "Sonntag:" << endl;

        for (int i = 0; i < So.size(); ++i)
        {

            cout << "Wert/e: " << So[i] << endl;
            Temp = Temp + So[i];

        }

        cout << "Mittelwert: " << Temp / So.size() << endl;
        cout << " Anzahl der Werte: " << So.size() << endl;

    }

    cout << "Fehlers " << Fehlers << endl;

}

void Name_values::warte()
{

    string eingabetag;
    cin.ignore();
    getline(cin, eingabetag, 'q');

}

int main()
{

    Name_values Wo_Tag;

    while (Wo_Tag.Eingabe())
    {

        Wo_Tag.Vergleich();

    }

 Wo_Tag.Ausgabe();
    Wo_Tag.warte();
  
    return 0;

}