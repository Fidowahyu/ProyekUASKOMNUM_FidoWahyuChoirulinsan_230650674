/*
    Program: Diferensiasi Numerik menggunakan Richardson Extrapolation
    Nama: Fido Wahyu C
    NPM: 2306250674
    Deskripsi: Program ini menghitung turunan dari suatu fungsi menggunakan metode Richardson Extrapolation dan membandingkan hasilnya dengan turunan analitik.
*/

#include <iostream>
#include <iomanip>
#include <cmath>

// Contoh fungsi yang akan diturunkan: f(x) = sin(x)
double f(double x)
{
    return sin(x);
}

// Analytical derivative untuk perbandingan: f'(x) = cos(x)
double df_analytical(double x)
{
    return cos(x);
}

// Metode Richardson Extrapolation untuk turunan pertama
double richardson(double (*func)(double), double x, double h)
{
    double D1 = (func(x + h) - func(x - h)) / (2 * h);
    double D2 = (func(x + h / 2) - func(x - h / 2)) / h;
    return (4 * D2 - D1) / 3;
}

int main()
{
    double x = M_PI / 4; // Titik di mana turunan dihitung (pi/4)
    double h = 0.1;      // Step size

    // Hitung turunan dengan Richardson Extrapolation
    double derivative = richardson(f, x, h);

    // Hitung nilai eksak
    double analytical = df_analytical(x);

    // Menampilkan hasil
    std::cout << std::fixed << std::setprecision(8);
    std::cout << "Numerical Differentiation using Richardson Extrapolation\n";
    std::cout << "f(x) = sin(x)\n";
    std::cout << "Point x = pi/4 = " << x << "\n";
    std::cout << "Step size h = " << h << "\n";
    std::cout << "Richardson derivative: " << derivative << "\n";
    std::cout << "Analytical derivative: " << analytical << "\n";
    std::cout << "Error: " << fabs(derivative - analytical) << "\n";
    return 0;
}