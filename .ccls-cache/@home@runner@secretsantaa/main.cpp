#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>


using namespace std;

void santalist(vector<string> &vec, vector<string> &vec2) {
    vector<string> vec3 = vec;
    for (int i = 0; i < 10 && !vec3.empty(); i++) {
        int randnum = rand() % vec3.size();
        string selectedName = vec3[randnum];
        vec2.push_back(selectedName);
        vec3.erase(vec3.begin() + randnum);
    }
}


int main(){
    srand(time(0));
    vector<string> list {"Carol", "Dorine", "Sheila", "Mom", "Emma", "Bryan", "Brian", "Russell", "Pookie"};
    vector<string> duplist {"Emma", "Russell", "Mom", "Dorine", "Carol", "Sheila", "Pookie", "Brian", "Bryan"};
    vector<string> newlist;

    santalist(list, newlist);
    cout << "Santa's List: " << endl;
if (newlist == duplist) {
  do {
    newlist.clear();
    santalist(list, newlist);
  } while (newlist == duplist);
} else {
  for (int i = 0; i < newlist.size(); i++) {
    cout << list[i] << " Has:" << newlist[i] << endl;
  }
}
return 0;
}

