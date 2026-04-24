#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    map<string, vector<string>> dir;
    int choice;
    string folder, file;

    while (true) {
        cout << "\n1.Add Folder 2.Add File 3.Display 4.Exit: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter folder name: ";
            cin >> folder;
            dir[folder];   
            cout << "Folder added\n";
            break;

        case 2:
            cout << "Enter folder name: ";
            cin >> folder;
            cout << "Enter file name: ";
            cin >> file;
            dir[folder].push_back(file);
            cout << "File added\n";
            break;

        case 3:
            for (auto it = dir.begin(); it != dir.end(); it++) {
                cout << it->first << ":\n";
                for (auto f : it->second) {
                    cout << "  " << f << endl;
                }
            }
            break;

        case 4:
            return 0;

        default:
            cout << "Invalid choice\n";
        }
    }
    cout<<"25cs032";
    return 0;
}