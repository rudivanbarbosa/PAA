#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <vector>

using namespace std;

float minimo(float a, float b){

if(a>= b){return b;}else{return a;}

}
vector < pair <float, float> > par;

void addpar(int v1, int v2)
	{
		par.push_back(make_pair(v1, v2));
	}

float BruteForceClosestPair() {
float d = 1000.0;

for(int i=0; i<par.size()-1; i++){
    for(int j=i+1; j< par.size(); j++){

        d = minimo(d, sqrt( (par[i].first - par[j].first)*(par[i].first - par[j].first)
                           +
                           (par[i].second - par[j].second)*(par[i].second - par[j].second) )
                     );
    }

        }
        return d;
}

int main(){




addpar(1,10);
addpar(2,20);
addpar(3,30);

cout << "Menor distancia entre os pontos: " << BruteForceClosestPair() << "\n";





}
