CREATE TABLE bo_phan(
	ma_BP varchar(50) PRIMARY KEY,
	ten_BP varchar(150)
);
CREATE TABLE nhan_vien(
	dien_thoai varchar(10) PRIMARY KEY,
	ten_NV varchar(150),
	ngay_sinh date,
	bang_cap varchar(150),
	muc_luong varchar(50),
	chuc_vu varchar(150),
	dia_chi varchar(250),
	ma_BP varchar(50) FOREIGN KEY REFERENCES bo_phan(ma_BP)
);
CREATE TABLE thiet_bi(
	ma_TB varchar(50) PRIMARY KEY,
	STT int IDENTITY(1,1),
	so_luong varchar(50),
	ten_TB varchar(250),
	dien_thoai varchar(10) FOREIGN KEY REFERENCES nhan_vien(dien_thoai)
);