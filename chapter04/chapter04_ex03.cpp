
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<double> allDistances;
    double distance = 0;
    double total = 0;
    double smallest = 0;
    double largest = 0;
    double largestDist = 0;
    double smallestDist = 0;

    while (cin >> distance) {
        allDistances.push_back(distance);                          // loading all distances from cin
    }
    smallestDist = allDistances[0];
    largestDist = allDistances[0];



    for (int i = 0; i < allDistances.size(); i++) {

        total += allDistances[i];                                             // adding up distances for total
       
    }
    for (int i = 0; i < allDistances.size() - 1; i++) {                     
        if (allDistances[i] + allDistances[i+1] > largestDist) {            // searching largest distance
            largestDist = allDistances[i] + allDistances[i+1];
        }
        if (allDistances[i] + allDistances[i+1] < smallestDist) {           // searching smallest distance
            smallestDist = allDistances[i] + allDistances[i+1];
        }
    }
    cout << "Total Distance: " << total << endl;
    cout << "Largest Distance: " << largestDist << endl;
    cout << "Smallest Distance: " << smallestDist << endl;

    }

