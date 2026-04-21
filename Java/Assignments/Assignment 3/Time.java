public class Time {
    int hr, min, sec;

    public Time(){}

    public Time(int hr, int min, int sec){
        this.hr = hr;
        this.min = min;
        this.sec = sec;
    }

    public void setHr(int hr) {
        this.hr = hr;
    }
    public int getHr() {
        return hr;
    }
    public void setMin(int min) {
        this.min = min;
    }
    public int getMin() {
        return min;
    }
    public void setSec(int sec) {
        this.sec = sec;
    }
    public int getSec() {
        return sec;
    }

    public void formatTime(){
        int sec = this.sec + (this.min*60) + (this.hr*3600);

        this.hr = sec/3600;
        this.sec = sec%3600;
        this.min = this.sec/60;
        this.sec = this.sec%60;
    }
    public Time add(Time time){
        Time temp = new Time();
        temp.hr = this.hr + time.hr;
        temp.min = this.min + time.min;
        temp.sec = this.sec + time.sec;

        return temp;
    }
    public Time add(int sec){
        Time temp = new Time();

        temp.hr = this.hr;
        temp.min = this.min;
        temp.sec = this.sec + sec;

        return temp;
    }
    public void display() {
        System.out.println(" * * Time * * ");
        System.out.println(this.getHr()+" : "+getMin()+" : "+getSec());
    }
}

class TimeCovert{
    public static void main(String[] args) {
        Time time1 = new Time(12, 60, 3600);
        Time time2 = new Time(12, 60, 3659);

        Time time3 = time1.add(time2);
        time3.formatTime();
        time3.display();

        Time time4 = time1.add(3666);
        time4.formatTime();
        time4.display();
    }
}