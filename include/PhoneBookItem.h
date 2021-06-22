#ifndef PHONEBOOKITEM_H
#define PHONEBOOKITEM_H

#include <Telephone.h>
#include <vector>
class PhoneBookItem
{
    public:
        virtual ~PhoneBookItem();

        virtual vector<Telephone> GetPhoneList() ;
        virtual void SetPhoneList(vector<Telephone> val) ;
        virtual vector<string> GetEmailList() ;
        virtual void SetEmailList(vector<string> val) ;
        virtual void printPhonesAndEmails();

    protected:

    private:
        vector<Telephone> PhoneList;
        vector<string> EmailList;
};

#endif // PHONEBOOKITEM_H
