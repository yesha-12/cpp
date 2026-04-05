
#include<iostream>
#include<cmath>
using namespace std;

int n;

class bank {
    int id;
    string name;
    int totalLoan;
    float interestRate;
    int tenure;

public:
    bank() {
        id = 0;
        name = "";
        totalLoan = 0;
        interestRate = 0;
        tenure = 0;
    }

    bank(string n, int i, int tl, float ir, int t) {
        name = n;
        id = i;
        totalLoan = tl;
        interestRate = ir;
        tenure = t;
    }

    void display() {
        cout << "\nLoan ID: " << id;
        cout << "\nApplicant Name: " << name;
        cout << "\nTotal Loan Amount: " << totalLoan;
        cout << "\nAnnual Interest Rate: " << interestRate;
        cout << "\nLoan Tenure (months): " << tenure;
        cout << "\nEMI: " << calculateEmi() << endl;
    }

    float calculateEmi() {
        float monthlyRate = interestRate / (12 * 100);
        float emi = (totalLoan * monthlyRate * pow(1 + monthlyRate, tenure)) /
                    (pow(1 + monthlyRate, tenure) - 1);
        return emi;
    }

};

int main() {

    string name1;
    int id1, totalL, tenure1;
    float rate;

    cout << "Enter total number of accounts: ";
    cin >> n;

    bank *s = new bank[n];   

    for(int i = 0; i < n; i++) {
        cout << "\nEnter applicant name: ";
        cin >> name1;

        cout << "Loan ID: ";
        cin >> id1;

        cout << "Total loan amount: ";
        cin >> totalL;

        cout << "Annual interest rate: ";
        cin >> rate;

        cout << "Loan tenure (months): ";
        cin >> tenure1;

        s[i] = bank(name1, id1, totalL, rate, tenure1);
    }

    for(int i = 0; i < n; i++) {
        s[i].display();
    }

    delete[] s; 
    cout<<"25cs032"  ;
    return 0;
}
