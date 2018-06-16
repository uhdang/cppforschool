class Conversion {

    const double inch_to_cm = 2.54;
    const double ft_to_inch = 12;

    private:
        int feet;
        int inch;
    public:
        Conversion(const int f = 0, const int i = 0);
        void setConversion(const int f, const int i);
        double fromFtToInch();
        double fromFeetAndInchToCm();

};
