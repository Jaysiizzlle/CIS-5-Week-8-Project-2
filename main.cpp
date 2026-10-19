#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::endl;
const int scoreAt0 = 92; 

// Project 2 — Jaylen
// CIS 5 Week 08
// Do not edit the boilerplate. It randomly generates 30 elements into the array.
// One main only. No vector. No extra functions. No files.

int main() {
  const int N = 30;
  int scores[N];
  const int scoreAt10 = 55; // change this number

  // Do not edit this boilerplate. It randomly generates 30 elements into the array.
  srand(static_cast<unsigned>(time(nullptr)));

  const int scoreAt20 = 72; // changed this number

  for (int i = 0; i < N; ++i) {
    scores[i] = rand() % 100;
  }

  scores[0] = scoreAt0;
  const int scoreAt27 = 81; // changed this number
  scores[10] = scoreAt10;
  scores[20] = scoreAt20;
  scores[27] = scoreAt27;

  

  // TODO: print each index and scores[i]
for (int i = 0; i < N; ++i) {
  cout << "Student grade at index "<< "[" << i <<  "] " << scores[i] << endl;
}

  int aCount = 0;
  int bCount = 0;
  int cCount = 0;
  int dCount = 0;
  int fCount = 0;
  for (int i = 0; i < N; i++) {
    if (scores[i] >= 90){
      ++aCount;    
    }
    else if (scores[i] >= 80){
      ++bCount;    
    }
   else if (scores[i] >= 70){
      ++cCount;    
    }
   else if (scores[i] >= 60){
      ++dCount;    
    }
   else {
     ++fCount;
    }
  }

  cout << "A students: " << aCount << endl;
  cout << "B students: " << bCount << endl;
  cout << "C students: " << cCount << endl;
  cout << "D students: " << dCount << endl;
  cout << "F students: " << fCount << endl;

  int i = 0;
while (i < N){
  if (scores[i] < 60){
    cout << "Student in index " << i << " come to office hours" << endl;
  }

  ++i;
}

  return 0;
}
