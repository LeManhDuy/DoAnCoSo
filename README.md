# DoAnCoSo

Học kỳ 2 2019 2020

• Đề bài :
Bộ môn mạng và truyền thông của Khoa Công nghệ thông tin, trường Đại học Bách Khoa, đại học Đà Nẵng cần chuyển hết n gói tin trên một mạng có m kênh truyền. 
Biết chi phí chuyển i gói tin trên kênh j là C(i,j).

•	Input :
+ Dòng đầu tiên : 2 số n và m.
+ Dòng thứ i trong n dòng tiếp theo : dãy m số nguyên dương b1, b2, b3,…,bm trong đó bij là chi phí chuyển i gói tin trên kênh j.
dòng  1 : 5 4
dòng  2 : 31 10 1 1
dòng  3 : 1      31     12     13
dòng  4 : 4      10     31     1
dòng  5 : 6       1     20     19
dòng  6 : 10      5     10     10

•	Output :
+ Dòng đầu tiên : tổng chi phí thấp nhất theo phương án tìm được.
+ Dòng thứ j trong m dòng tiếp theo : số lượng gói tin chuyển trên 

dòng  1 : 2
dòng  2 : 0
dòng  3 : 4 
dòng  4 : 0 
dòng  5 : 1

• Ý nghĩa : 
Với n = 5 gói tin, m = 4 kênh và chi phí C[i][j] cho trước, 
trong đó i là chỉ số dòng (số gói tin), j là chỉ số cột (số kênh) thì cách chuyển sau đây sẽ cho chi phí thấp nhất là 2.

Kênh : 1 2 3 4, Số gói tin : 0 4 0 1, Chi phí : 0 1 1 0
