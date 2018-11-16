#include "std_lib_facilities.h"


// str 104
void f1()
{
    constexpr double cm_per_inch = 2.54;
    double length = 1;
    char unit = 0;
    
    cout << "podaj dlugosc zakonczoną jednostką (c, i, k, y: ";
    cin>>length>>unit;
    if (unit == 'i')
        cout << length << " cali to " << length*cm_per_inch << " cm." << endl;
    else if (unit == 'c')
        cout << length << " cm to " << length/cm_per_inch << " cali." << endl;
    else
        cout << "nie znana jednostka\n";

}

// str 105
void f2()
{
    constexpr double yen_rate = 113.77;
    constexpr double kroner_rate = 6.57843;
    constexpr double pound_rate = 0.77052;
    
    double value = 1;
    char unit = 0;
    
    cout << "podaj wartość zakonczoną jednostką waluty (y, k, p: ";
    cin >> value >> unit;
    if (unit == 'y')
        cout << value << " yenów to " << value / yen_rate << " dolców." << endl;
    else if (unit == 'k')
        cout << value << " krone to " << value / kroner_rate << " dolców." << endl;
    else if (unit == 'p')
        cout << value << " pounds to " << value / pound_rate << " dolców." << endl;
    else
        cout << "nie znana waluta\n";

    
}

// str 109
void f3()
{
    constexpr double yen_rate = 113.77;
    constexpr double kroner_rate = 6.57843;
    constexpr double pound_rate = 0.77052;
    
    double value = 1;
    char unit = 0;
    
    cout << "podaj wartość zakonczoną jednostką waluty (y, k, p: ";
    cin >> value >> unit;
    switch (unit)
    {
        
    case 'y' :
        cout << value << " yenów to " << value / yen_rate << " dolców." << endl;
        break;
    case 'k' :
        cout << value << " krone to " << value / kroner_rate << " dolców." << endl;
        break;
    case 'p' :
        cout << value << " pounds to " << value / pound_rate << " dolców." << endl;
        break;
    default:
        cout << "nie znana waluta\n";
        break;
    }

}

// str 109
void f4()
{
    int i = 0;
    while (i<100)
    {
        cout << i << "\t" << i*i << endl;
        ++i;
    }
}

// str 111
void f5()
{
    int i = 0;
    while (i<30)
    {
        cout << char('a' + i) << "\t" << i+97 << endl;
        ++i;
    }
}

// str 113
void f6()
{
        
    for (int i = 32; i < 126; ++i)
        cout << char(i) << "\t" << i << endl;        
}

void f7()
{
    vector<string> vi(30);
    for (auto i:vi)
        cout << i << endl;
}


// str 122
void f8()
{
    vector<double> temps;
    double temp_sum = 0;
    for (double temp; cin >> temp;)
    {
        temps.push_back(temp);
        temp_sum += temp;
    }
        
    // srednia
    cout << "srednia: " << temp_sum/temps.size() << endl;
    
    // mediana
    sort(temps);
    cout << "mediana: " << temps[temps.size()/2] << endl;
}

// str 125
void f9()
{
    vector<string> disliked{"brokół", "dupa", "kwoka"};
    string s;
    while(cin>>s)
    {
        for (auto v:disliked)
            if (s == v) s="BLEEP";
        cout << s << endl;
    }
}

//str 126
void f10()
{
    int a,b=0;
    while(cin>>a>>b)
    {
        //ten warunek nie jest nigdy wykonywany
        //petla sie konczy gdy na cin pojaiw się coś innego niż int
        if(a=='|' || b=='|')
            break;
        else
            cout <<"a: "<<a<<", b: "<<b<<endl;
    }
}

//str 126
void f11()
{
    int a,b=0;
    while(cin>>a>>b)
    {   
        //ten warunek nie jest nigdy wykonywany
        //petla sie konczy gdy na cin pojaiw się coś innego niż int
        if(a==char('|') || b==char('|'))
        {
            cout << "bye..."<<endl;
            break;
        }
        if(a<b)
            cout <<"the smaller value is: "<<a<<", the larger is: "<<b<<endl;
        else if (a>b)
            cout <<"the smaller value is: "<<b<<", the larger is: "<<a<<endl;
        else
            cout <<"the numbers are equeal"<<endl;
    }
}

void f12()
{
    double a,b=0.0;
    while(cin>>a>>b)
    {   
        if(a<b)
            cout <<"the smaller value is: "<<a<<", the larger is: "<<b<<endl;
        else if (a>b)
            cout <<"the smaller value is: "<<b<<", the larger is: "<<a<<endl;
        else
            cout <<"the numbers are equeal"<<endl;
    }
}

void f13()
{
    double a,b,dif=0.0;
    while(cin>>a>>b)
    {   
        cout << 1.0/100<<endl;
        if(a<b)
        {
            dif=b-a;
            cout <<"the smaller value is: "<<a<<", the larger is: "<<b<<
            " the dif: "<< dif << endl;
        }
        else if (a>b)
        {
            dif=a-b;
            cout <<"the smaller value is: "<<b<<", the larger is: "<<a<<
            " the dif: "<< dif << endl;
        }
        else
            cout <<"the numbers are equeal"<<endl;
        
        if(dif < 1.0/100 && dif>0.0)
                cout <<"the numbers are almost equeal"<<endl;
        
    }
}

void f14()
{
    double a,smallest,largest=0.0;
    
    //obsluga pierwszej wklepanej wartosci
    //nie ma jeszcze pojecia najmniejszej i najwiekszej wartosci
    cin >> a;
    cout << "Podałes pierwsza wartość: "<< a << endl;
    
    while(cin>>a)
    {   
        cout << "Podałeś: "<<a;
        
        if(a<smallest)
        {
            cout <<", the smallest so far"<< endl;
            smallest=a;
        }
        else if (a>largest)
        {
            cout <<", the largest so far"<< endl;
            largest=a;
        }
        else
            cout << endl;
    }
}

void f15()
{
    double length=0.0;
    string unit;
    vector<string> allowed_units{"cm","m","in","ft"};
    
    
    while(cin>>length>>unit)
    {   
        //zakladamy ze unit jest lipny
        int bad_unit=1;
        for(auto s:allowed_units)
            if(unit==s) bad_unit=0;
        if(bad_unit)
            cout<< "Nie obsługuje takich jednostek"<<endl;
        else
            cout << "Podałeś: " << length << unit << endl;
        
    }
}



int main()
try
{
    f15();
}
catch (runtime_error e)
{
    cout << e.what() << endl;
}

