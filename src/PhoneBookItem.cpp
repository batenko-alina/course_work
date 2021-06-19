#include "PhoneBookItem.h"

abstract class PhoneBookItem
{
    public:
        PhoneBookItem();
        virtual ~PhoneBookItem();

        virtual vector<Telephone> GetPhoneList() { return PhoneList; }
        virtual void SetPhoneList(vector<Telephone> val) { PhoneList = val; }
        virtual vector<string> GetEmailList() { return EmailList; }
        virtual void SetEmailList(vector<string> val) { EmailList = val; }

    protected:

    private:
        vector<Telephone> PhoneList;
        vector<string> EmailList;

};
