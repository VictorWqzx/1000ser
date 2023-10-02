#pragma once

int* createIntArray(int size)
{
    int* array = new int[size];
    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        array[i] = rand() % 10 + 1;
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
    return array;
}



void ser1(int size) {
    int* array = createIntArray(size);
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    std::cout << sum;
    delete(array);
}


void ser2(int size) {
    int* array = createIntArray(size);
    int proiz = 1;
    for (int i = 1; i < size; i++)
    {
        proiz *= array[i];
    }
    std::cout << proiz;
    delete[]array;
}

double* createDoubleArray(double size)
{
    double* array = new double[size];
    srand(time(NULL));
    double decimalPart = 0;
    for (int i = 0; i < size; i++)
    {
        decimalPart = (rand() % 10) / 10.0;
        array[i] = static_cast<double>(rand() % 10 + 1) + decimalPart;
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
    return array;
}

void ser3(int size) {
    int* array = createIntArray(size);
    int srznach = 1;
    for (int i = 0; i < size; i++)
    {
        srznach += array[i] / 2;
    }
    std::cout << srznach;
    delete[]array;
}

void ser4(int size) {
    int* array = createIntArray(size);
    int sum = 1;
    int proizv = 1;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
        proizv *= array[i];
    }
    std::cout << "sum= " << sum << std::endl << "proizv= " << proizv;
    delete[]array;
}


void ser5(int size)
{
    double* array = createDoubleArray(size);
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        double dec = array[i] - static_cast<int>(array[i]);
        double integ = array[i] - dec;
        std::cout << integ << " ";
        sum += integ;
    }
    std::cout << std::endl << sum;
    delete[]array;
}


void ser6(int size)
{
    double* array = createDoubleArray(size);
    double tas = 1;
    for (int i = 0; i < size; i++)
    {
        double dec = array[i] - static_cast<int>(array[i]);
        double integ = array[i] - dec;
        std::cout << array[i] - integ << " ";
        tas *= dec;
    }
    std::cout << std::endl << tas;
    delete[]array;
}

void ser7(int size)
{
    double* arr = createDoubleArray(size);
    for (int i = 0; i < size; i++)
    {
        std::cout << round(arr[i]) << " ";
    }
    delete[] arr;
}


void ser8(int size)
{
    int* array = createIntArray(size);
    int s = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] % 2 == 0)
        {
            std::cout << array[i] << " ";
            s++;
        }
    }
    std::cout << std::endl << s;
    delete[] array;
}


void ser9(int size)
{
    int* array = createIntArray(size);
    int s = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] % 2 != 0)
        {
            std::cout << array[i] << " ";
            s++;
        }
    }
    std::cout << std::endl << s;
    delete[] array;
}

bool ser10(int size)
{
    int* array = createIntArray(size);
    for (int i = 0; i < size; i++)
    {
        if (array[i] > 0)
        {
            std::cout << true;
            delete[] array;
            return true;
        }
    }
    std::cout << true;
    delete[] array;
    return false;
}

bool ser11(int size, int k) {
    int* array = createIntArray(size);
    for (int i = 0; i < size; i++)
    {
        if (array[i] < k) {
            std::cout << true;
            delete[] array;
            return true;
        }
    }
    std::cout << false;
    delete[] array;
    return false;
}

void ser12(int size) {
    int s = 0;
    int* array = createIntArray(size);
    for (int i = 1; i < size; i++)
    {
        if (array[i] == 0) {
            break;
            s++;
        }
    }
    std::cout << s;
    delete[] array;
}

void ser13(int size) {
    int s = 0;
    int sum = 0;
    int* array = createIntArray(size);
    for (int i = 1; i < size; i++)
    {
        sum += array[i];
        if (array[i] == 0) {
            break;
            s++;
        }
    }
    std::cout << sum;
    delete[] array;
}

void ser14(int size, int k) {
    int* array = createIntArray(size);
    int mensh = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == 0) {
            break;
            if (array[i] < k)
                mensh++;
        }
    }
    std::cout << mensh;
    delete[] array;
}

//void ser15(int size, int k) {
//    int* array = createIntArray(size);
//    int mensh = 0;
//    for (int i = 0; i < size; i++)
//    {
//        if (array[i] == 0) {
//            break;
//            if (array[i] > k)
//                mensh++;
//        }
//    }
//    std::cout << mensh;
//    delete[] array;
//}


//void ser16(int size, int k) {
//    int* array = createIntArray(size);
//    int mensh = 0;
//    for (int i = 0; i < size; i++)
//    {
//        if (array[i] == 0) {
//            break;
//            if (array[i] < k)
//                mensh++;
//        }
//    }
//    std::cout << mensh;
//    delete[] array;
//}


void ser17(int size, int k) {
    int* array = createIntArray(size);
    for (int i = 0; i < size; i++)
    {

    }
}