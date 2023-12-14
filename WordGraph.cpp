//
// Created by tc018062 on 12/14/2023.
//

#include <iostream>
#include <string>
#include "WordGraph.h"
using namespace std;

void WordGraph::addEdgeGraph(const std::string &word1, const std::string &word2) {
    graph[word1].push_back(word2);
    graph[word2].push_back(word1);
}

void WordGraph::printGraph() {}

