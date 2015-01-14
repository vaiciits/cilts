#include <iostream>
#include <fstream>
using namespace std;

struct entry{
    int pk;
    char s;
    string name;
    string surname;
    int parent1_pk;
    int parent2_pk;
};

int main(){
    entry arr[10000];
    int test = 0;
    int index = 0;
    fstream fin ("cilts.in");
    for (int i=0; i<10000000; i++){
        fin >> test;
        if (test == 0)
            break;
        index = test;
        arr[index].pk = index;
        fin >> arr[index].s;
        fin >> arr[index].name;
        fin >> arr[index].surname;
        fin >> arr[index].parent1_pk;
        fin >> arr[index].parent2_pk;
    }
    fin.close();


    return 0;
}
