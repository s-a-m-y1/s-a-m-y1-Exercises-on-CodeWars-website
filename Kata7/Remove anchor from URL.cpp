#include<iostream>        /// Remove anchor from URL 
#include<string>
using namespace std;
string replaceAll(string str)
{
     string Word ="";
 if (str.empty())return "";
 if (!str.empty())
 {
    for (size_t i = 0; i < str.length(); i++)
    {
        if(str[i]!='#')
        {
          Word+=str[i];
        }
        else
        {
          break;
        }
    }
 
 }
    return Word;
   
}
/// or// 

string replaceAll(string str)
{
    string Word ="";
    string Delmter ="#";
     size_t pos =0;
   while ((pos = str.find(Delmter)) != std::string::npos)
    {
     Word = str.substr(0 ,pos);
     str.erase(0,pos+Delmter.length());
     break;
    }
    if (Word.empty())
    {
        return str;
    }
    
    
return Word;
}

int main()
{
    
     string e ="www.codewars.com#about";
    string h ="www.codewars.com?page=1";
    cout<<replaceAll(h)<<endl;
    return 0;

}