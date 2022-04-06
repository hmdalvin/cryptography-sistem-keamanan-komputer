#include <iostream>
using namespace std;

// Program decrypt menggunakan Algoritma Caesar
string decrypt(string ciphertext, int shift)
{
    // Variabel simpan hasil
    string result = "";
    // hitung semua jumlah karakter chipertext
    for (int i = 0; i < ciphertext.length(); i++)
    {
        // cek setiap karakter kata di dalam ciphertext
        // jika karakter berupa huruf besar
        if (isupper(ciphertext[i]))
        {
            // simpan hasil proses
            result += char((int(ciphertext[i] - shift - 65) % 26 + 26) % 26 + 65);
        }
        // jika karakter berupa huruf kecil
        else
        {
            // simpan hasil proses
            result += char((int(ciphertext[i] - shift - 97) % 26 + 26) % 26 + 97);
        }
    }
    // kembalikan nilai hasil
    return result;
}

int main()
{
    // variabel ciphertext dan shift key
    string ciphertext;
    int shift;
    // masukan ciphertext dan juga shift key
    cout << "Masukan Ciphertext yang akan di dekripsi (HANYA HURUF): ";
    cin >> ciphertext;
    cout << "Masukan Shift Key : ";
    cin >> shift;
    // tampilkan hasil input dan proses enkripsi
    cout << "Ciphertext : " << ciphertext << endl;
    cout << "Shift : " << shift << endl;
    cout << "Text : " << decrypt(ciphertext, shift) << endl;
    return 0;
}