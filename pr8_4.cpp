#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

bool isNumeric(string line) {
    stringstream ss(line);
    double num;
    while (ss >> num);              
    return ss.eof();               
}

int main() {
    ifstream file;
    string path, line;

    
    while (true) {
        cout << "Enter file path: ";
        cin >> path;
        file.open(path);
        if (file) break;
        cout << "File not found! Try again.\n";
    }

    int lineNo = 0;

    
    while (getline(file, line)) {
        lineNo++;

        if (isNumeric(line)) {
            stringstream ss(line);
            double num, sum = 0;
            int count = 0;

            while (ss >> num) {
                sum += num;
                count++;
            }

            cout << "Line " << lineNo << " Sum=" << sum;
            if (count) cout << " Avg=" << sum / count;
            cout << endl;
        } 
        else {
            cout << "Line " << lineNo << " Skipped (invalid)\n";
        }
    }

    file.close();
    cout<<"25cs032";
    return 0;

}