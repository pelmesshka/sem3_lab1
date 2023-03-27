#include <iostream>
#include "ArraySequence.h"
#include "LinkedListSequence.h"
#include "Functions.h"
#include <time.h>
#include <chrono>

class Timer
        {
        private:
            using clock_t = std::chrono::high_resolution_clock;
            using second_t = std::chrono::duration<double, std::ratio<1> >;

            std::chrono::time_point<clock_t> m_beg;

        public:
            Timer() : m_beg(clock_t::now())
            {
            }

            void reset()
            {
                m_beg = clock_t::now();
            }

            double elapsed() const
            {
                return std::chrono::duration_cast<second_t>(clock_t::now() - m_beg).count();
            }
        };


void TEST(int sizetest){
    int data[sizetest];
    std::cout << "Start test" << std::endl;
    for (int i = 0; i < sizetest; ++i) {
        data[i] = rand() % 1000;
    }

    std::cout << "Array ShellSort : " << std::endl;
    ArraySequence<int> a(data, sizetest);
    Timer t_1;
    a.ShellSort(cmp3);
    std::cout << "Sorting time: " << t_1.elapsed()*1000 << '\n';
    IsOk(&a,cmp1);
    Timer t_2;
    a.ShellSort(cmp3);
    std::cout << "sorting time of the sorted data: " << t_2.elapsed()*1000 << '\n';
    IsOk(&a,cmp1);
    a.ShellSort(cmp2);
    std::cout << "Test result of sorted data in reverse order: ";
    IsOk(&a,cmp4);
    Timer t_3;
    a.ShellSort(cmp3);
    std::cout << "sorting time of the data sorted in reverse order: " << t_3.elapsed()*1000 << '\n';
    IsOk(&a,cmp1);
    std::cout << std::endl <<std::endl;


    std::cout << "List ShellSort : " << std::endl;
    LinkedListSequence<int> b(data, sizetest);
    Timer t_4;
    b.ShellSort(cmp3);
    std::cout << "Sorting time: " << t_4.elapsed()* 1000<< '\n';
    IsOk(&b,cmp1);
    Timer t_5;
    b.ShellSort(cmp3);
    std::cout << "sorting time of the sorted data: " << t_5.elapsed() * 1000 << '\n';
    IsOk(&b,cmp1);
    b.ShellSort(cmp2);
    std::cout << "Test result of sorted data in reverse order: ";
    IsOk(&b,cmp4);
    Timer t_6;
    b.ShellSort(cmp3);
    std::cout << "sorting time of the data sorted in reverse order: " << t_6.elapsed() *1000<< '\n';
    IsOk(&b,cmp1);
    std::cout << std::endl <<std::endl;


    std::cout << "Array MergeSort : " << std::endl;
    ArraySequence<int> c(data, sizetest);
    Timer t_7;
    c.MergeSort(cmp3);
    std::cout << "Sorting time: " << t_7.elapsed()*1000 << '\n';
    IsOk(&c,cmp1);
    Timer t_8;
    c.MergeSort(cmp3);
    std::cout << "sorting time of the sorted data: " << t_8.elapsed()*1000 << '\n';
    IsOk(&c,cmp1);
    c.MergeSort(cmp2);
    std::cout << "Test result of sorted data in reverse order: ";
    IsOk(&c,cmp4);
    Timer t_9;
    c.MergeSort(cmp3);
    std::cout << "sorting time of the data sorted in reverse order: " << t_9.elapsed()*1000 << '\n';
    IsOk(&c,cmp1);
    std::cout << std::endl <<std::endl;


    std::cout << "List MergeSort : " << std::endl;
    LinkedListSequence<int> d(data, sizetest);
    Timer t_10;
    d.MergeSort(cmp3);
    std::cout << "Sorting time: " << t_10.elapsed()* 1000<< '\n';
    IsOk(&d,cmp1);
    Timer t_11;
    d.MergeSort(cmp3);
    std::cout << "sorting time of the sorted data: " << t_11.elapsed() * 1000 << '\n';
    IsOk(&d,cmp1);
    d.MergeSort(cmp2);
    std::cout << "Test result of sorted data in reverse order: ";
    IsOk(&d,cmp4);
    Timer t_12;
    d.MergeSort(cmp3);
    std::cout << "sorting time of the data sorted in reverse order: " << t_12.elapsed() *1000<< '\n';
    IsOk(&d,cmp1);
    std::cout << std::endl <<std::endl;


    std::cout << "Array QuickSort : " << std::endl;
    ArraySequence<int> e(data, sizetest);
    Timer t_13;
    e.QuickSort(cmp2);
    std::cout << "Sorting time: " << t_13.elapsed() *1000<< '\n';
    IsOk(&e,cmp1);
    Timer t_14;
    e.QuickSort(cmp2);
    std::cout << "sorting time of the sorted data: " << t_14.elapsed() *1000<< '\n';
    IsOk(&e,cmp1);
    e.QuickSort(cmp3);
    std::cout << "Test result of sorted data in reverse order: ";
    IsOk(&e,cmp4);
    Timer t_15;
    e.QuickSort(cmp2);
    std::cout << "sorting time of the data sorted in reverse order: " << t_15.elapsed()*1000 << '\n';
    IsOk(&e,cmp1);
    std::cout << std::endl <<std::endl;



    std::cout << "List QuickSort : " << std::endl;
    LinkedListSequence<int> f(data, sizetest);
    Timer t_17;
    f.QuickSort(cmp2);
    std::cout << "Sorting time: " << t_17.elapsed()*1000 << '\n';
    IsOk(&f,cmp1);
    Timer t_18;
    f.QuickSort(cmp2);
    std::cout << "sorting time of the sorted data: " << t_18.elapsed()*1000 << '\n';
    IsOk(&f,cmp1);
    f.QuickSort(cmp3);
    std::cout << "Test result of sorted data in reverse order: ";
    IsOk(&f,cmp4);
    Timer t_19;
    f.QuickSort(cmp2);
    std::cout << "sorting time of the data sorted in reverse order: " << t_19.elapsed()*1000 << '\n';
    IsOk(&f,cmp1);
    std::cout << std::endl <<std::endl;

}