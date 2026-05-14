class InvalidTicketNumberException extends Exception{
    @Override
    public String toString() {
        return "Invalid Ticket Number..!";
    }
}
class TicketsSoldOutException extends Exception{
    @Override
    public String toString() {
        return "Sorry..! Tickets are sold out..!";
    }
}
class MovieBooking{
    String movieName="3 Idiots";
    static int ticketPrice = 200;
    static int ticketAvailable = 50;

    public void bookTickets(int requestedTicket) throws InvalidTicketNumberException,TicketsSoldOutException{
        if(requestedTicket<=0)
            throw new InvalidTicketNumberException();
        else if (ticketAvailable==0 || requestedTicket > ticketAvailable)
            throw new TicketsSoldOutException();
        else {
            int totalAmount = requestedTicket * ticketPrice;
            System.out.println("Booking Successful for '3 Idiots' "
                    + "\nTickets Booked: " + requestedTicket
                    + "\nTotal amount: " +totalAmount);
            ticketAvailable -= requestedTicket;
        }
    }
}
class Booking{
    public static void main(String[] args) {
        MovieBooking ticket = new MovieBooking();
        try {
            ticket.bookTickets(10);
//            ticket.bookTickets(50);
        } catch (InvalidTicketNumberException iticket) {
            System.out.println(iticket);
        } catch (TicketsSoldOutException tsold){
            System.out.println(tsold);
        }
    }
}