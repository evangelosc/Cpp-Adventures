#include <algorithm>
#include <iostream>
#include <ostream>
#include <utility>

class remoteInt{
    public:
        remoteInt(){
            m_p = nullptr;
        }
        explicit remoteInt(const int n){
            m_p = new int(n);
        }
        remoteInt(const remoteInt &other){
            if (other.m_p){
                m_p = new int(*other.m_p);
            } else {
                m_p = nullptr;
            }
        }
        remoteInt(remoteInt &&other){
            m_p = other.m_p;
            other.m_p = nullptr;
        }
        remoteInt& operator=(const remoteInt &other){
            remoteInt(other).swap(*this);
            return *this;
        }
        remoteInt& operator=(remoteInt &&other){
            remoteInt(std::move(other)).swap(*this);
            return *this;
        }
        void swap(remoteInt &other){
            std::swap(m_p, other.m_p);
        }
        const int get() const{ return m_p ? *m_p : 0; }
        ~remoteInt() { delete m_p; }
    
    private:
        int *m_p;
};

remoteInt square(const remoteInt &r){
    const int i = r.get();
    return remoteInt(i*i);    
}

int main(){
    remoteInt a(8);
    std::cout << a.get() << std::endl;

    remoteInt b(10);
    std::cout << b.get() << std::endl;

    b = square(a);
    std::cout << b.get() << std::endl;
    std::cout << "here" << std::endl;

    return 0;
}