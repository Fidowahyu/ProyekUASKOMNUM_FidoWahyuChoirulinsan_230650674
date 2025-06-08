# Richardson Extrapolation untuk Perhitungan Turunan Fungsi Sinus
## Proyek UAS mata kuliah Komputasi Numerik

## Nama: Fido Wahyu Choirulinsan
## NPM: 2306250674

Proyek ini mengimplementasikan **metode Richardson Extrapolation** untuk menghitung **turunan numerik** dari fungsi sinus dengan bahasa pemrograman **C++**. Teknik ini sangat berguna dalam memperkirakan turunan ketika bentuk analitik sulit diperoleh atau data hanya tersedia dalam bentuk diskret. 

---

## Deskripsi 

- **Topik**: Numerical Differentiation dengan Richardson Extrapolation
- **Fungsi yang dikaji**: `f(x) = sin(x)`
- **Bahasa**: C++
- **Metode**: Central Difference dan Richardson Extrapolation
- **Tujuan**: Membandingkan hasil turunan numerik dengan hasil analitik (turunan `cos(x)`) untuk mengukur akurasi metode.

---

## Latar Belakang

Dalam praktik rekayasa dan sains, tidak semua fungsi bisa diturunkan secara eksak. Pendekatan numerik seperti **finite difference** sering digunakan, namun akurasinya terbatas oleh nilai langkah `h`. **Richardson Extrapolation** adalah teknik yang meningkatkan akurasi dengan cara menggabungkan dua estimasi turunan numerik yang dihitung dengan nilai `h` yang berbeda, sehingga error dominan dapat dieliminasi.

---

## Metodologi

### 1. Central Difference Formula

Rumus dasar untuk menghitung turunan pertama:
```math
f'(x) ≈ (f(x + h) - f(x - h)) / (2h)
