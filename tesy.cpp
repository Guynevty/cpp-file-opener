#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;
int main(){
    cout << "enter a file path ";
    string g;
    vector<string>all;
    getline(cin,g);
    for(int i = 0; i < g.length(), i++;){
        char c = g[i];
        if(c = '\\'){
           g.insert(i+1,"\\");
        }
    }
    ifstream file(g);
    string input;
    while(getline(file,input)){
       all.push_back(input);
    }
    for(string ping : all){
      cout << ping << std::endl;
    }
}
