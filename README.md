# DoAnCoSo

Học kỳ 2 2019 2020

• Đề bài :
Bộ môn mạng và truyền thông của Khoa Công nghệ thông tin, trường Đại học Bách Khoa, đại học Đà Nẵng cần chuyển hết n gói tin trên một mạng có m kênh truyền. 
Biết chi phí chuyển i gói tin trên kênh j là C(i,j).

•	Input :
+ Dòng đầu tiên : 2 số n và m.
+ Dòng thứ i trong n dòng tiếp theo : dãy m số nguyên dương b1, b2, b3,…,bm trong đó bij là chi phí chuyển i gói tin trên kênh j.
5       4
31     10     1       1
1      31     12     13
4      10     31     1
6       1     20     19
10      5     10     10

•	Output :
+ Dòng đầu tiên : tổng chi phí thấp nhất theo phương án tìm được.
+ Dòng thứ j trong m dòng tiếp theo : số lượng gói tin chuyển trên 

2
0
4 
0 
1

• Ý nghĩa : 
Với n = 5 gói tin, m = 4 kênh và chi phí C[i][j] cho trước, 
trong đó i là chỉ số dòng (số gói tin), j là chỉ số cột (số kênh) thì cách chuyển sau đây sẽ cho chi phí thấp nhất là 2.

Kênh	Số gói tin	Chi phí
1	        0	         0
2	        4	         1
3	        0	         1
4	        1	         0
