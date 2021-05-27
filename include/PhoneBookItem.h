#ifndef PHONEBOOKITEM_H
#define PHONEBOOKITEM_H

#include <Telephone.h>
class PhoneBookItem
{
    public:
        PhoneBookItem();
        virtual ~PhoneBookItem();

        virtual vector<Telephone> GetPhoneList() ;
        virtual void SetPhoneList(vector<Telephone> val) ;
        virtual vector<string> GetEmailList() ;
        virtual void SetEmailList(vector<string> val) ;

    protected:

    private:
        vector<Telephone> PhoneList;
        vector<string> EmailList;
};

#endif // PHONEBOOKITEM_H
