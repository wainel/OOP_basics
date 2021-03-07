#include <iostream>
#include <vector>

using namespace std;

void print_LCS(vector<vector<char>>& S, string& X, int i, int j){
    if(i==0 || j==0){
        return;
    }
    if('s'==S[i][j]){
        print_LCS(S, X, i-1, j-1);
        cout << X[i];
    }else if('j'==S[i][j]){
        print_LCS(S, X, i, j-1);
    }else{
        print_LCS(S, X, i-1, j);
    }
}

void calc_LCS(string& X, string& Y){
    vector<vector<int>> C;  // Length of LCS of X[1..i] and Y[1..j]
    vector<vector<char>> S; // Position of LCS
    for(int=0; i<X.size(); i++){
        C.push_back(vector<int>(Y.size(), 0));  // Initialize C to a NxM matrix
        S.push_back(vector<char>(Y.size(), 0));
    }
    for(int i=1; i<X.size(); i++){  //N
        for(int j=1; j<Y.size(); j++){  //M
            if(X[i]==Y[i]){
                C[i][j]= C[i-1][j-1]+1;
                S[i][j]= 's';    // X[i] or Y[j] is one item of LCS
            }else if (C[i][j-1] > C[i-1][j]){
                C[i][j]= C[i][j-1];
                S[i][j]= 'j';   // LCS(X[1..i], Y[1..j]) == LCS(X[1..i], Y[1..j-1])
            }else{
                C[i][j]= C[i-1][j];
                S[i][j]= 'i'; // LCS(X[1..i], Y[1..j]) == LCS(X[1..i-1], Y[1..j])
            }
        }
    }
    prtM(C); //print matrix
    print_LCS(S, X, X.size()-1, Y.size()-1);
}

int main()
{
    string X = " ACCGGGTAC";
    string Y = " AGGACCA";
    cout << "X: " << X << endl;
    cout << "Y: " << Y << endl;
    calc_LCS(X, Y);
}
