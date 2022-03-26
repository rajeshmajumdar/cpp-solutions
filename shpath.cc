#include <iostream>
#include <cstdio>
#include <climits>
#include <vector>
#include <stack>

using namespace std;

int main() {
    int cases, testcases, cities, neighIndex, cost, neigh;
    int index;
    string name, srcName, destName;
    map<string, int> nameMap;

    cin >> cases;

    while(cases--) {
        cin >> cities;

        vector< vector<int> > graph(cities);

        for(index = 0; index < cities; index++) {
            cin >> name;
            nameMap[name] = index+1;
            graph[index] = vector<int>(cities);

            cin >> neigh;
            while(neigh--) {
                cin >> neighIndex >> cost;
                for(int i=0; i < cities; i++) {
                    if (i == neighIndex-1) {
                        graph[index][i] = cost;
                    }
                }
            }
        }

        cin >> testcases;
        while(testcases--) {
            cin >> srcName >> destName;
            auto srcP = nameMap.find(srcName);
            auto destP = nameMap.find(destName);
            djikstra(graph, srcP->second, destP->second, cities);
        }
    }
}