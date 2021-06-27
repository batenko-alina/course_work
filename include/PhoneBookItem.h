#ifndef PHONEBOOKITEM_H
#define PHONEBOOKITEM_H

#include <Telephone.h>
#include <vector>
class PhoneBookItem
{
    public:
        virtual ~PhoneBookItem();

        virtual const vector<Telephone>& GetPhoneList() const ;
        virtual void SetPhoneList(const vector<Telephone>& val) ;
        virtual void AddPhone(const Telephone& val) ;
        virtual const vector<string>& GetEmailList() const;
        virtual void AddEmail(const string& val);
        virtual void AddEmail();
        virtual void SetEmailList(vector<string> val) ;
        virtual void printPhonesAndEmails();

    protected:

    private:
        vector<Telephone> PhoneList;
        vector<string> EmailList;
};

#endif // PHONEBOOKITEM_H
