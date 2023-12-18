# Anti-Lock Brake System in cars
# Hệ thống chống bóp cứng phanh ABS cho xe ô tô

<h3>Mô tả mô hình và Mục tiêu của dự án này:</h3>

- Mô tả mô hình: xe ô tô có khả năng thay đổi tốc độ quay của bánh xe và khối lượng xe cũng thay đổi(do có thể chở hành khách)
- Mục tiêu: hệ thống ABS có khả năng nhận diện khi bánh xe có nguy cơ bị cóp cứng, điều chỉnh lực phanh dựa trên khối lượng xe 

<h3>Yêu cầu chi tiết:</h3>

<h4>Bánh xe (The wheels):</h4>

- Mô tả tốc độ quay của bánh xe (đơn vị: vòng trên phút)
- Cho phép thiết lặp giá trị và lấy giá trị tốc độ quay 

<h4>Xe (The car):</h4>

- Xe có một bánh và khối lượng cơ bản của nó là 1000kg
- Cho phép thiết lập giá trị và lấy giá trị khối lượng của xe
- Cho phép thêm hành khách vào xe (tức là tăng thêm khối lượng xe) 
- Có khả năng trả về tổng khối lượng của xe (khối lượng cơ bản của xe cộng với khối lượng tất cả các hành khách)

<h4>Hệ thống chống bóp cứng phanh(ABS):</h4>

- Ngõ vào của hệ thống là: nhận vào 1 chiếc xe ô tô 
- Khi tiến hành phanh: 


        Nếu tốc độ quay của bánh xe dưới ngưỡng qui định sẵn (ví dụ: 2 vòng trên giây) của người lập trình cài đặt thì sẽ có một cảnh báo về nguy cơ bóp cứng phanh được thông báo.
        Hệ thống sẽ phải điều chỉnh lại lực phanh dựa trên khối lượng ngay lúc đó.

        Nếu tốc độ quay của bánh xe trên ngưỡng qui định sẵn thì hệ thống phanh sẽ hoạt động theo thao tác của người dùng

<h4>Mô tả các quá trình trong chương trình chính(main function):</h4>

- Khởi tạo một đối tượng xe 
- Khởi tạo hệ thống ABS của xe đó
- Thiết lập tốc độ quay của bánh xe và áp dụng phanh cho xe  
- Thêm hành khách với khối lượng cụ thể vào xe
- Lặp lại việc thiết lập tốc độ quay và phanh

<h4>Lưu ý:</h4>

Trong chương trình logic chương trình là: việc điều chỉnh lực phanh dựa trên khối lượng tổng của xe cộng với khối lượng người trên xe và tốc độ hiện tại của xe, đó là các biến thời gian thực được cung cấp từ các cảm biến.   
Trong dự án này chỉ dùng các biến mô phỏng các thông số trên.
