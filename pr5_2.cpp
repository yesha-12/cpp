    
#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main()
{
    ifstream file("sample.txt");   

    string line;

    if (!file)
    {
        cout << "Error: File could not be opened!" << endl;
        return 1;
    } 

    int wordcount=0;
    int linecount=0;
    int charcount=0;

    while(getline(file,line))
    {
        linecount++;

        bool inword=false;

        for(int i=0;i<line.length();i++)
        {
            charcount++;
            if(isalnum(line[i]))
            {
                if(!inword)
                {
                    wordcount++;
                    inword=true;
                }
            }
            else
            {inword=false;}
        }
        charcount++;
    }
    file.close();
    cout<<"total lines:"<<linecount<<"\ntotal words:"<<wordcount<<"\ntotal characters:"<<charcount;

    return 0;

   
}