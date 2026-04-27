#include <iostream>
#include <string>
using namespace std;
class mahasiswa
{
private:
    string nama;
public:
    friend setNama(mahasiswa &a, string);
};

