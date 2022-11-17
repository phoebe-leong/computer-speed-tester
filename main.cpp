#include <iostream>
#include <chrono>
bool run = true;

void program ()
{
  int i = 0;
  system("clear");
  
  while(run == true)
  {
    i++;
    if (i >= 999999999)
    {
      run = false;
    }
  }
}

int main() {
  std::chrono::steady_clock::time_point t1
  std::chrono::steady_clock::time_point t2
  
  using std::chrono::high_resolution_clock;
  using std::chrono::duration_cast;
  using std::chrono::duration;
  using std::chrono::milliseconds;
  
  t1 = high_resolution_clock::now();
  program();
  t2 = high_resolution_clock::now();
  duration<double> secs = t2 - t1;
  
  if (run == false)
  {
    system("clear");
    std::cout << "Finished in " << secs.count() << " seconds!";
    std::cin.get();
    
    return 0;
  }
} 
