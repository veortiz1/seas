#include <iostream>
using namespace std;
#include <fstream>
#include <string>
#include <vector>
#include <sstream>


int main(int argc,char* argv[]){

    string query=argv[1];

    string filename=argv[2];

    ifstream inputfile(filename);

    if(inputfile){
        cout<<"True!";
    }
    else{
        return 0;
    }

    string file_line;

   vector<string> lines;
    while(getline(inputfile,file_line)){
        lines.push_back(file_line);
    }

     istringstream query_spaces(query);

     vector <string> tokens;

     string current_word;

     while(query_spaces >> current_word){
        tokens.push_back(current_word);

     }

     if(tokens[0]=="Add"){
        cout<<"adddd";
     }

     



    






    

}