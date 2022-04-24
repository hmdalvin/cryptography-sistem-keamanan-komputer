#include <iostream>
using namespace std;

// Program enkripsi menggunakan Algoritma Caesar
string encrypt(string text, int shift)
{
    // Variabel simpan hasil
    string result = "";
    // hitung semua jumlah karakter kata
    for (int i = 0; i < text.length(); i++)
    {
        // cek setiap karakter kata di dalam text
        // jika karakter berupa huruf besar
        if (isupper(text[i]))
        {
            // simpan hasil proses
            result += char(int(text[i] + shift - 65) % 26 + 65);
        }
        // jika karakter berupa huruf kecil
        else
        {
            // simpan hasil proses
            result += char(int(text[i] + shift - 97) % 26 + 97);
        }
    }
    // kembalikan nilai hasil
    return result;
}

int main()
{
    // variabel teks dan shift key
    string text;
    int shift;
    // masukan teks dan juga shift key
    cout << "Masukan Teks yang akan di enkrispi (HANYA HURUF): ";
    cin >> text;
    cout << "Masukan Shift Key : ";
    cin >> shift;
    // tampilkan hasil input dan proses enkripsi
    cout << "Text : " << text << endl;
    cout << "Shift : " << shift << endl;
    cout << "ciphertext : " << encrypt(text, shift) << endl;
    return 0;
}