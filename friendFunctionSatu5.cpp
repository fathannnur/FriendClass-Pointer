#include <iostream>
#include <string>
using namespace std;
class mahasiswa
{
private:
    string nama;
public:
    friend void setNama(mahasiswa &a, string);
};

void setNama(mahasiswa &a, string b)
{
    at8.nama = b;
    cput << a.nama;
}

int main()
{
    mahasiswa joko;
    setNama(joko, "Kairi Kumar");
    return 0;
}