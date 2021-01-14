#ifndef TICKET_H
#define TICKET_H

class Ticket {

private:
	int PurchadeDatetime;
	int Amount;
	int CancelDate;
	int ValidateDate;

public:
	void NewTicket();

	void CancelTicket();

	void ValidateTicket();

	void GetTicketInfo();
};

#endif
