#include <iostream>
#include <vector>
#include <map>

using namespace std;

int solution(vector< vector<int> >& costs) {
    vector< vector<int> > fin;
    multimap<int, int> res;

    int cityA = 0, cityB = 0;

    int diff;

    for(int i=0; i < costs.size(); i++) {
        diff = costs[i][0] - costs[i][1];
        res.insert(make_pair(diff, i));
    }

    for(auto i=res.begin(); i!=res.end(); i++) {
        fin.push_back(costs[i->second]);
    }

    for(int j=0; j < fin.size()/2; j++) {
        cityA += fin[j][0];
    }
    for(int j=fin.size()/2; j < fin.size(); j++) {
        cityB += fin[j][1];
    }

    return cityA + cityB;
}

int main() {

    vector<int> vectorA;
    vector<int> vectorB;
    vector<int> vectorC;
    vector<int> vectorD;
    vector<int> vectorE;
    vector<int> vectorF;


    vector< vector<int> > finalVector;

    vectorA.push_back(259);
    vectorA.push_back(770);

    vectorB.push_back(448);
    vectorB.push_back(54);

    vectorC.push_back(926);
    vectorC.push_back(667);

    vectorD.push_back(184);
    vectorD.push_back(139);

    vectorE.push_back(840);
    vectorE.push_back(118);

    vectorF.push_back(577);
    vectorF.push_back(469);

    finalVector.push_back(vectorA);
    finalVector.push_back(vectorB);
    finalVector.push_back(vectorC);
    finalVector.push_back(vectorD);
    finalVector.push_back(vectorE);
    finalVector.push_back(vectorF);

    cout << solution(finalVector) << endl;
}