#include<iostream>
#include<string>
using namespace std;

// string solve(const string& str)
// {


// if(str.empty())return "";
// size_t Cap =0;
// size_t sml=0;
// string Word ="";
// for(size_t i = 0 ;i<str.length();i++)
// {
//     if(isupper(str[i])) Cap++;
//     else if (islower(str[i])) sml++;
// }
// for(size_t o =0 ;o<str.length();o++)
// {
    
//     if (Cap!=sml)
//     {
//      if (Cap>sml)
//     {
//     Word+=toupper( str[o]);
//     }
//     else
//     {
//     Word+=tolower(str[o]);
//     }
//     }
//     else
//     {
//     Word+=tolower(str[o]);
//     }

// }
//       return Word;
// }

string solve(const string& str)
{
    size_t Cap =0 , sml =0;
    for( char C:str )
    {
        if(isupper(C))Cap++;
        else if(islower(C))sml++;
    }
    string Word ="";
    bool IsUpper = (Cap>sml);
    for(char W : str)
    {
        if (IsUpper)
        {
          Word+=toupper(W);
        }
        else
        {
            Word+=tolower(W);
        }
        

    }
return Word;
}
int main()
{
    cout<<solve("code")<<endl;
    cout<<solve("CODe")<<endl;
    cout<<solve("COde")<<endl;
    cout<<solve("Code")<<endl;

return 0;
}

