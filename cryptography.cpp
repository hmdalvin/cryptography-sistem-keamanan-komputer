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
    // variabel teks, shift key, chipertext, dan plaintext
    string text, ciphertext, plaintext;
    int shift;
    // masukan teks dan juga shift key
    cout << "Masukan Teks yang akan di enkrispi (HANYA HURUF): ";
    cin >> text;
    cout << "Masukan Shift Key : ";
    cin >> shift;

    // simpan ciphertext dan plaintext hasil enkripsi dan dekripsi
    ciphertext = encrypt(text, shift);
    plaintext = decrypt(ciphertext, shift);

    // tampilkan hasil input dan proses enkripsi
    cout << "Text Input : " << text << endl;
    cout << "Shift Key Input: " << shift << endl;
    cout << "ciphertext : " << ciphertext << endl;
    cout << "plaintext : " << plaintext << endl;
    return 0;
}