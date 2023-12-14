//
// Created by tc018062 on 12/14/2023.
//
#include <unordered_map>
#include <string>
#include <iostream>
#include <vector>

#ifndef GRAPH_PUZZLE_GAME_TALUCIL018062_WORDGRAPH_H
#define GRAPH_PUZZLE_GAME_TALUCIL018062_WORDGRAPH_H
class WordGraph{
public:
    std::unordered_map<std::string , std::vector<std::string>> graph;
    void addEdgeGraph(const std::string &word1,const std::string &word2);
    void printGraph();
};
#endif //GRAPH_PUZZLE_GAME_TALUCIL018062_WORDGRAPH_H
