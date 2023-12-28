#include <iostream>

void fv(int v)
{
    std::cout << &v << " " << v << std::endl;
    
};

void fr(int& r)
{
    std::cout << &r << " " << r << std::endl;
    
};

void fp(int* p)
{
    std::cout << p << " "  << *p << "    " << &p << std::endl;
    
}

int main()
{
    int a = 2;
    int* b = new int(2);

    std::cout<<"vvvvvvvvvvvvvvvvvvvvvvvvvvvv"<<std::endl;
    std::cout << &a << " " << a << std::endl;
    fv(a);
    std::cout<<"rrrrrrrrrrrrrrrrrrrrrrrrrrr"<<std::endl;
    std::cout << &a << " " << a << std::endl;
    fr(a);
    std::cout<<"pppppppppppppppppppppppppppp"<<std::endl;
    std::cout << b << " " << *b  << "    " << &b << std::endl;
    fp(b);
}
