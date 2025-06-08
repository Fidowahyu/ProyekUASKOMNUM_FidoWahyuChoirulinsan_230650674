# Richardson Extrapolation untuk Perhitungan Turunan Fungsi Sinus
## Proyek UAS mata kuliah Komputasi Numerik

## Nama: Fido Wahyu Choirulinsan
## NPM: 2306250674

## 📌 Deskripsi Proyek

Proyek ini mengimplementasikan metode **Richardson Extrapolation** untuk memperkirakan **turunan pertama** dari fungsi sinus menggunakan pendekatan numerik berbasis *central difference*. Teknik ini digunakan untuk meningkatkan akurasi estimasi turunan dibandingkan metode numerik biasa, terutama saat bekerja dengan data diskrit atau tidak tersedia bentuk analitik fungsi.

Metode ini relevan dalam:
- Situasi di mana fungsi hanya tersedia dalam bentuk diskrit
- Peningkatan akurasi numerik tanpa memperkecil `h` terlalu ekstrem
- Pengembangan algoritma turunan numerik dalam bahasa pemrograman C++

---

## Outline Program

### Input:
- Fungsi `f(x) = sin(x)`
- Nilai titik `x = π/4` (dapat dimodifikasi)
- Nilai langkah `h` (misal: 0.1, 0.01, 0.001)

### Proses:
1. Hitung turunan numerik dengan *central difference* untuk setiap nilai `h`
2. Hitung Richardson Extrapolation dari dua estimasi sebelumnya
3. Hitung nilai analitik dari `f'(x) = cos(x)`
4. Bandingkan hasil numerik dan analitik, serta hitung error absolut

### Output:
- Tabel hasil estimasi turunan, analitik, dan error
- (Opsional) File CSV berisi komponen hasil estimasi
- Visualisasi grafik error (jika diimplementasikan)

---
Link youtube: 
