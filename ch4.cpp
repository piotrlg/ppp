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
    int a=0,b=0;
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
    int a=0,b=0;
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
    double a=0.0,b=0.0;
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

//dril 5
void f13()
{
    double a=0.0,b=0.0,dif=0.0;
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

//dril 6
void f14()
{
    double a=0.0,smallest=0.0,largest=0.0;
    
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

//dril 8
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

//dril 9
void f16()
{
    double value=0.0,smallest=0.0,largest=0.0,sum=0.0;
    int count=0;
    double normalized_value=0.0;
    string unit;
    int bad_unit=0;
    int first_run=1;
    
    while(cin>>value>>unit)
    {   
        bad_unit=0; //assume good unit
        
        //unit validation and to meters conversion
        if (unit=="cm")      normalized_value=value/100; 
        else if (unit=="m")  normalized_value=value;
        else if (unit=="in") normalized_value=value/100*2.54;
        else if (unit=="ft") normalized_value=value/100*2.54*12;
        else
        {
            //ugly but no other idea how to ignore values of bad units
            cout<<"Bad unit, ignoring"<<endl;
            bad_unit=1;
            --count; //don't count bad values
        }

        //special case of first loop
        if(first_run && !bad_unit)
        {
            sum=normalized_value;
            smallest=normalized_value;
            largest=normalized_value;
            first_run=0;
        }
        else if(!bad_unit)
        {
            sum+=normalized_value;
            if(normalized_value<smallest) smallest=normalized_value;
            else 
            if (normalized_value>largest) largest=normalized_value;
        }
        ++count;
    }
    cout << "Smallest m: "<< smallest<<endl;
    cout << "Largest m: "<< largest<<endl;
    cout << "Sum m: "<< sum<<endl;
    cout << "Counter: "<< count <<endl;
}


//dril 10, 11
void f17()
{
    double value=0.0,smallest=0.0,largest=0.0,sum=0.0;
    int count=0;
    double normalized_value=0.0;
    string unit;
    int bad_unit=0;
    int first_run=1;
    vector<double> values;
    
    while(cin>>value>>unit)
    {   
        bad_unit=0; //assume good unit
        
        //unit validation and to meters conversion
        if (unit=="cm")      normalized_value=value/100; 
        else if (unit=="m")  normalized_value=value;
        else if (unit=="in") normalized_value=value/100*2.54;
        else if (unit=="ft") normalized_value=value/100*2.54*12;
        else
        {
            //ugly but no other idea how to ignore values of bad units
            cout<<"Bad unit, ignoring"<<endl;
            bad_unit=1;
            --count; //don't count bad values
        }

        //special case of first loop
        if(first_run && !bad_unit)
        {
            sum=normalized_value;
            smallest=normalized_value;
            largest=normalized_value;
            first_run=0;
        }
        else if(!bad_unit)
        {
            sum+=normalized_value;
            if(normalized_value<smallest) smallest=normalized_value;
            else 
            if (normalized_value>largest) largest=normalized_value;
        }
        
        values.push_back(normalized_value);
        ++count;
        
    }
    
    sort(values);
    cout << "Values entered (sorted and metered): "; 
    for(auto v: values)
        cout << v << ", ";
    cout << endl;
    
    cout << "Smallest m: "<< smallest<<endl;
    cout << "Largest m: "<< largest<<endl;
    cout << "Sum m: "<< sum<<endl;
    cout << "Counter: "<< count <<endl;
    
}

//
// Exercises, page 128
//

//ex.2
void ex2()
{
    vector<double> temps;
    for (double temp; cin >> temp;)
        temps.push_back(temp);
    
    // median
    sort(temps);
    cout << "median: " << temps.size()/2 << endl;
}


int main()
try
{
    ex2();
}
catch (runtime_error e)
{
    cout << e.what() << endl;
}

