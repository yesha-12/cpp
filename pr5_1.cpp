
    
#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main()
{
    
    // string st="hello yesha!!";
    // ofstream out("sample.txt");
    // out<<st;

    // out.close();
    // string st;
    // ifstream in("sample.txt");
    // getline(in,st);
    // in>>st;
    // cout<<st;                                                                                                                                 
    // in.close();

    // one paragraf string arry 
    string paragraph;
    string words[100];
    int count[100] = {0};
    int wordcount = 0;

    cout << "Enter the paragraph: ";
    getline(cin, paragraph);

    string current_word = "";

    for (int i = 0; i < paragraph.length(); i++)
    {
        char c = paragraph[i];

        if (isalnum(c))
        {
            current_word += tolower(c);
        }
        else if (current_word != "")
        {
            bool found = false;

            for (int j = 0; j < wordcount; j++)
            {
                if (words[j] == current_word)
                {
                    count[j]++;
                    found = true;
                    break;
                }
            }

            if (!found && wordcount < 100)
            {
                words[wordcount] = current_word;
                count[wordcount] = 1;
                wordcount++;
            }

            current_word = "";
        }
    }

    if (current_word != "")
    {
        bool found = false;

        for (int j = 0; j < wordcount; j++)
        {
            if (words[j] == current_word)
            {
                count[j]++;
                found = true;
                break;
            }
        }

        if (!found && wordcount < 100)
        {
            words[wordcount] = current_word;
            count[wordcount] = 1;
            wordcount++;
        }
    }

    for (int i = 0; i < wordcount; i++)
    {
        cout << words[i] << " : " << count[i] << endl;
    }

    return 0;
}