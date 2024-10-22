# Tugas Asistensi P2
Berikut merupakan program untuk Tugas Asistensi P2 yang berdujul "Perulangan Percabangan Array String"
## Peritah Tugas Asistensi
Buatlah mesin generator gambar. Mesin ini akan menerima input gambar yang diinginkan dan mengeluarkan output gambar sesuai input yang dimasukkan. 

Kriteria Wajib (80 poin) : 
1. Dapat menampilkan output gambar yang minimal tersusun dari simbol asterisk “*” dan space “ “.
2. Dapat menampilkan satu jenis gambar berukuran panjang dan lebar sesuai input dengan minimal panjang 10 karakter dan lebar 5 karakter serta maksimal panjang 100 karakter dan lebar 75 karakter. 
3. Apabila melebihi atau kurang dari batas maksimal dan minimal maka gambar tidak akan ditampilkan dan akan menampilkan pesan sesuai pelanggaran
Dapat menjelaskan kode yang diberikan melalui file  dokumentasi README.md

Kriteria Tambahan : 
1. Dapat menampilkan lebih dari satu jenis gambar, tergantung demand dari input (3 poin)
2. Dapat menampilkan gambar yang bergerak (5 poin)
3. Program dapat menerima input dan menampilkan output secara terus menerus sampai dihentikan secara paksa (3 poin)

## Penjelasan Program
Berikut merupakan penjelasan program Generator Gambar yang sudah dibuat : 
1. Pada awal program dibuat sebuah Headerfile yang terdiri dari : 
• stdio.h: Digunakan untuk operasi input/output seperti printf dan scanf.
• stdlib.h: Digunakan untuk operasi umum seperti exit().
• string.h: Digunakan untuk fungsi string seperti strcmp, yang membandingkan dua string.
• unistd.h: Digunakan untuk fungsi sistem seperti sleep() yang menghentikan eksekusi program sementara waktu.

2. void drawRectangle(int panjang, int lebar), pada bagian ini membuat sebuah fungsi "drawRectangle" yang digunakan untuk menggambar persegi dengan "panjang" dan "lebar" digunakan sebagai variabel untuk mengatur ukuran persegi. Terdapat 2 perintah loop : 
• Loop pertama (for (int i = 0; i < lebar; i++)) mengontrol baris-baris.
• Loop kedua (for (int j = 0; j < panjang; j++)) mengontrol kolom-kolom. 

3. void drawTriangle(int height), pada bagian ini membuat sebuah fungsi "drawTriangle" yang digunakan untuk menggambar segitiga dengan "height" sebagai variabel untuk mengatur tinggi segitiga. Terdapat 2 perintah loop : 
• Loop pertama (for (int i = 0; i < height; i++)) mengatur baris - baris di segitiga
• Loop kedua (for (int j = 0; j <= i; j++)) mengontrol jumlah bintang yang bertamah setiap baris agar membantuk segitiga

4. "int main() {" digunakan untuk membuat fungsi main(), dengan variabel "int panjang, lebar, height;" untuk menampung input dari pengguna mengenai ukuran persegi/segitiga. Dan "char choice [20]"", merupakan array yang digunakan untuk menginput pilihan bentuk (persegi, segitiga, keluar).

5. Penggunaan "while (1)" untuk melakukan perulangan tak terhingga. Program akan terus berjalan hingga pengguna memasukkan kata "keluar" untuk mengakhiri program.

------------------------------ Sekian Terimakasih -------------------------------
