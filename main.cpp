//
// Created by tc018062 on 12/14/2023.
//
#include <fstream>
#include <string>
#include <iostream>
#include "WordGraph.h"
using namespace std;
int main(){
    fstream myFile;
    myFile.open("Words.txt",ios::out);
    if(!myFile.is_open()){
        cerr<< "Error occures here!"<< endl;
        return 1;
    }
    WordGraph graph3,graph4,graph5;
    string word;
    while(myFile>>word){
        if(word.length()==3){
            graph3.addEdgeGraph(word,word);
        }
        else if(word.length()==4){
            graph4.addEdgeGraph(word,word);
        }
        else if(word.length()==5){
            graph5.addEdgeGraph(word,word);
        }
    }
    myFile.close();


    return  0;
}