#include <iostream>
#include <chrono>
bool run = true;
void program () { system("clear"); int i = 0; while(run == true) { i++; if (i >= 999999999) { run = false; } } } int main() { using std::chrono::high_resolution_clock; using std::chrono::duration_cast; using std::chrono::duration; using std::chrono::milliseconds; std::chrono::steady_clock::time_point t1 = high_resolution_clock::now(); program(); std::chrono::steady_clock::time_point t2 = high_resolution_clock::now(); duration<double> secs = t2 - t1; if (run == false) { system("clear"); std::cout << "Finished in " << secs.count() << " seconds!"; std::cin.get(); return 0; } } 
