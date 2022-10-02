/*
COVID-19 sequence analysis:

29883 nucleotides in the sequence. Sequence breakdown:

a: 8931 29.89%
t: 9606 32.15%
c: 5485 18.35%
g: 5861 19.61%
*/

/*
Author: Ilan Sela
Description: COVID-19 Gene Sequence Analysis
Class Section: 201
Date : 10.15.20
*/

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
const string GENOME_SEQUENCE_FILE = "covid_genome_sequence.txt";

int main()
{
    string line;
    long adenine_count = 0, thymine_count = 0, cytosine_count = 0, guanine_count = 0, total;
    double adenine_pct, thymine_pct, cytosine_pct, guanine_pct;
    ifstream genome_source(GENOME_SEQUENCE_FILE);
    // Checking that the file can actually open before reading.
    if (genome_source.is_open())
    {
        // Loop on each line and characters within the line to find the count for each character.
        while (getline(genome_source,line))
        {
            for (int i = 0; i < line.size(); i++)
            {
                switch(line[i])
                {
                    case 'a': adenine_count++; break;
                    case 't': thymine_count++; break;
                    case 'c': cytosine_count++; break;
                    case 'g': guanine_count++; break;
                }
            }
        }
        genome_source.close();
        total = adenine_count + thymine_count + cytosine_count + guanine_count;
        adenine_pct = adenine_count*100.0/total;
        thymine_pct = thymine_count*100.0/total;
        cytosine_pct = cytosine_count*100.0/total;
        guanine_pct = guanine_count*100.0/total;
        cout << "COVID-19 sequence analysis:" << endl << endl;
        cout << total << " nucleotides in the sequence. Sequence breakdown:" << endl << endl;
        cout << "a: " << adenine_count << " " << setprecision(4) << adenine_pct << '%' << endl;
        cout << "t: " << thymine_count << " " << setprecision(4) << thymine_pct << '%' << endl;
        cout << "c: " << cytosine_count << " " << setprecision(4) << cytosine_pct << '%' << endl;
        cout << "g: " << guanine_count << " " << setprecision(4) << guanine_pct << '%' << endl;
    }
}