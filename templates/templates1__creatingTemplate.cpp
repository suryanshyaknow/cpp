#include<iostream>
#include<string>
using namespace std;

//************************* My first template: ************************************
template <class T> // T could be any datatype here whatsoever!
class vector
{
public:
    T *arr;
    int size;
    vector(int size)
    {
        this->size = size;
        arr = new T[size];
    }
    T dotProduct(vector &v)
    {
        T dot = 0;
        for (int i = 0; i < size; i++)
        {
            dot += this->arr[i]*v.arr[i]; 
        }
        return dot;
    }
    void crossProduct(vector &v)
    {
        T *c = new T[this->size];
        c[0] = this->arr[1]*v.arr[2] - this->arr[2]*v.arr[1];
        c[1] = this->arr[2]*v.arr[0] - this->arr[0]*v.arr[2];
        c[2] = this->arr[0]*v.arr[1] - this->arr[1]*v.arr[0];

        cout << c[0] << "i + " << c[1] << "j + " << c[2] << "k"; 
    }
};


int main()
{   
    vector <float> v1(3);
    v1.arr[0] = 12.89;
    v1.arr[1] = 11.12;
    v1.arr[2] = 7.34;
    
    vector <float> v2(3);
    v2.arr[0] = 12.3;
    v2.arr[1] = 3.2;
    v2.arr[2] = 1.9;

    cout << "v1.v2 = " << v1.dotProduct(v2) << endl;
    
    // vector <string> v3(3);
    // v1.arr[0] = 'Sury';
    // v1.arr[1] = 'div';
    // v1.arr[2] = 'jiy';
    
    // vector <string> v4(3);
    // v2.arr[0] = 'ansh';
    // v2.arr[1] = 'yansh';
    // v2.arr[2] = 'anshi';

    // cout << "v3.v4 = " << v3.dotProduct(v4) << endl;
    
    cout << "v1 X v2 = ";
    v1.crossProduct(v2);
    
    return 0;
}