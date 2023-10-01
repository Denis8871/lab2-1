#include<iostream>
class Money
{
private:
    long long hryvnias;
    unsigned int kopecks;

public:

    void Init(long long hryvnias, unsigned int kopecks);
    void Read();
    void Display();
    std::string toString() const;

    Money operator+(const Money& other) const {
        Money result;
        result.hryvnias = this->hryvnias + other.hryvnias;
        result.kopecks = this->kopecks + other.kopecks;
        if (result.kopecks >= 100) {
            result.hryvnias += result.kopecks / 100;
            result.kopecks %= 100;
        }
        return result;
    }

    Money operator-(const Money& other) const {
        Money result;
        result.hryvnias = this->hryvnias - other.hryvnias;
        if (this->kopecks < other.kopecks) {
            result.hryvnias--;
            result.kopecks = 100 - (other.kopecks - this->kopecks);
        }
        else {
            result.kopecks = this->kopecks - other.kopecks;
        }
        return result;
    }

    bool operator<(const Money& other) const {
        if (this->hryvnias == other.hryvnias) {
            return this->kopecks < other.kopecks;
        }
        return this->hryvnias < other.hryvnias;
    }
};

