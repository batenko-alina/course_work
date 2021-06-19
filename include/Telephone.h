#ifndef TELEPHONE_H
#define TELEPHONE_H


class Telephone
{
    public:
        Telephone();
        virtual ~Telephone();

        enum Getcategory() ;
        void Setcategory(enum val);
        enum Getform() ;
        void Setform(enum val);

    protected:

    private:
        enum category;
        enum form;
};

#endif // TELEPHONE_H
