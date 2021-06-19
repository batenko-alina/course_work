#ifndef TELEPHONE_H
#define TELEPHONE_H


class Telephone
{
    public:
        Telephone();
        virtual ~Telephone();

        PhoneCategory Getcategory() ;
        void Setcategory(enum val);
        PhoneForm Getform() ;
        void Setform(enum val);
        string GetNumber();
        void SetNumber(string val);

    protected:

    private:
        PhoneCategory category;
        PhoneForm form;
        string number;
};

#endif // TELEPHONE_H
