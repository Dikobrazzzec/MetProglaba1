#ifndef MYVECTOR_H
#define MYVECTOR_H


class myvector
{
public:
    myvector();
    myvector(int size);
    void WorkMode();
    void Append(int index, int value);
    void Remove(int index);
    int At(int index);
    void Print();
    void Deletion();
    int WMP;
private:
    int *array{};
    int *array2{};
    int SizeTwi{};
    int m_size{};
    int VectorSize{};
    void Expansion ();
    void LengthCheck();

    };

#endif // MYVECTOR_H
