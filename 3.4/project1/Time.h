struct Time{
	int hour,minute;
	double second;
        Time(int h,int m,double secs);
	Time(double secs);
	void increment(double secs);
	void print() const;
	bool after(const Time &time2) const;
	Time add(const Time &t2) const;
	double convertToSeconds() const;
};

