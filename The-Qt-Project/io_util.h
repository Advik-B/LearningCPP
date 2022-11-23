#include <iostream>
#include <fstream>
#include <utility>

namespace util_io {
    using namespace std;


    class BinaryFile
    {
    public:
        explicit BinaryFile(string filename)
        {
            this->filename = std::move(filename);
        };
        void Write(const string &data)
        {
            ofstream file;
            file.open(this->filename, ios::binary);
            file << data;
            file.close();
        };
        string Read()
        {
            ifstream file;
            file.open(this->filename, ios::binary);
            string data;
            file >> data;
            file.close();
            return data;
        };

    private:
        string filename;
    };


    template<typename T>
    void Print(T text, bool newline = true, bool flush = true) {
        std::cout << text;
        if (newline) cout << "\n";
        if (flush) cout.flush();
    }

    void FileWrite(const char *filename, const char *text) {
        ofstream file;
        file.open(filename);
        file << text;
        file.close();
    }

    void FileWriteBinary(string &filename, string &text) {
        BinaryFile file(filename);
        file.Write(text);
    }

    string FileRead(string &filename, int max_size = 300) {
        // Return until max_size is reached
        ifstream file;
        file.open(filename);
        string data;
        data.reserve(max_size);
        file >> data;
        file.close();
        return data;
    }

    string FileReadBinary(string &filename) {
        BinaryFile file(filename);
        return file.Read();
    }

}
