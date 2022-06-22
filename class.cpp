#include<bits/stdc++.h>
using namespace std;
string s;
class Sample
{
    // public:
    // string s;//only accesible inside the class,or via the class methods
public:
void read(void);//can be accessed globally
void chck_bin(void);
};
void Sample :: read(void)
{
    cout<<"enter the number"<<endl;
    cin>>s;
}
void Sample :: chck_bin(void)
{
    // cout<<s;
    for(int i = 0; i<s.length();i++)
    {
        if (s[i]=='0' or s[i]=='1')
        {
            continue;
            
        }
        else
        {
            cout<<"It is not Binary";
            exit(0);
        }
    }
    
}
class Sampleson: public Sample
{
    public:
    void print()
    {
        cout<<s;
        cout<<"Hi"<<"\n";
    }
};

int main()
{
    Sample sample;
    Sampleson  son;
    sample.read();
    sample.chck_bin();
    son.print();
    return 0;
}
