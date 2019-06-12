/* Written by Jatinder Singh */

#include <iostream>
#include <vector>
using namespace std;

int fib(int N) {
        if (N == 0) return 0;
        if (N == 1) return 1;
        
        return fib(N-1) + fib(N-2);
}

void addtoSeq(vector<int>& seq){
	seq.push_back(seq[seq.size()-1]+ seq[seq.size()-2]);
}

void printSeq(vector<int>& seq){
	cout << "Current Fibonacci sequence: ";
	for(int j = 0; j < seq.size(); j++){
	 	cout << seq[j] << ' ';
	}
	cout << endl;
}

int main(){
	vector<int> fibSeq;
	fibSeq.push_back(0);
	fibSeq.push_back(1);
	int x;

	cout << "Enter an integer: " << endl;
	cin >> x;

	while(fibSeq[fibSeq.size()-1] < x){
		addtoSeq(fibSeq);
	}

	printSeq(fibSeq);
 
	int result = (fibSeq[fibSeq.size()-1] - x) > (x -fibSeq[fibSeq.size()-2] ) ? x -fibSeq[fibSeq.size()-2] : fibSeq[fibSeq.size()-1] - x;
	cout << result << endl;
}
