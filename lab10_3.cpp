#include<iostream>
#include<fstream>
#include<iomanip>
#include<cmath>
#include<string>
using namespace std;

int main (){
	ifstream source;
    double sumData = 0, sumSqureData = 0;
    int i=0;
	source.open("score.txt") ;

	string score;
    while (getline(source, score)) {
        double Score = stod(score);
        sumData += Score;
        sumSqureData += pow(Score, 2);
        i++;
    } 

    double mean = sumData / i;
    double SD   = sqrt((sumSqureData / i)- pow(mean, 2));

    cout << "Number of data = " << i << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << SD;
}