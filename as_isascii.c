int as_isascii(int c) {
	if(c >= 0 && c <= 0x7F)
		return 1;
	else
		return 0;
}