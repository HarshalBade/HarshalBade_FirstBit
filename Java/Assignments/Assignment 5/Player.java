public class Player {
    String name;
    int age;
    String country;
    int matchesPlayed;
    int jerseyNumber;

    Player(){}

    Player(String name, int age, String country, int matchesPlayed, int jerseyNumber){
        this.name=name;
        this.age=age;
        this.country=country;
        this.matchesPlayed=matchesPlayed;
        this.jerseyNumber=jerseyNumber;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public String getCountry() {
        return country;
    }

    public void setCountry(String country) {
        this.country = country;
    }

    public int getMatchesPLayed() {
        return matchesPlayed;
    }

    public void setMatchesPLayed(int matchesPLayed) {
        this.matchesPlayed = matchesPLayed;
    }

    public int getJerseyNumber() {
        return jerseyNumber;
    }

    public void setJerseyNumber(int jerseyNumber) {
        this.jerseyNumber = jerseyNumber;
    }

    void display(){
        System.out.println("Player Detail");
        System.out.println("Name: "+this.getName());
        System.out.println("Jersey Number: "+this.getJerseyNumber());
        System.out.println("Age: "+this.getAge());
        System.out.println("Country: "+this.getCountry());
        System.out.println("Matches Played: "+this.getMatchesPLayed());
    }
}
class CricketPlayer extends Player {
    int totalRuns;
    int totalWickets;
    String battingStyle;
    String bowlingStyle;

    CricketPlayer() {
        super();
    }

    CricketPlayer(String name, int age, String country, int matchesPlayed, int jerseyNumber, int runs, int wickets, String battingStyle, String bowlingStyle) {
        super(name, age, country, matchesPlayed, jerseyNumber);
        this.totalRuns = runs;
        this.totalWickets = wickets;
        this.battingStyle = battingStyle;
        this.bowlingStyle = bowlingStyle;
    }

    public int getTotalRuns() {
        return totalRuns;
    }

    public void setTotalRuns(int totalRuns) {
        this.totalRuns = totalRuns;
    }

    public int getTotalWickets() {
        return totalWickets;
    }

    public void setTotalWickets(int totalWickets) {
        this.totalWickets = totalWickets;
    }

    public String getBattingStyle() {
        return battingStyle;
    }

    public void setBattingStyle(String battingStyle) {
        this.battingStyle = battingStyle;
    }

    public String getBowlingStyle() {
        return bowlingStyle;
    }

    public void setBowlingStyle(String bowlingStyle) {
        this.bowlingStyle = bowlingStyle;
    }

    @Override
    void display() {
        super.display();
        System.out.println("Total Runs: "+this.getTotalRuns());
        System.out.println("Total Wickets: "+this.getTotalWickets());
        System.out.println("Batting Style: "+this.getBattingStyle());
        System.out.println("Bowling Style: "+this.getBowlingStyle()+"\n");
    }
}//class CricketPlayer ends here


class FootballPlayer extends Player{
    int totalGoals;
    String playingPosition;

    FootballPlayer(){
        super();
    }
    FootballPlayer(String name, int age, String country, int matchesPlayed, int jerseyNumber, int goals, String position){
        super(name, age, country, matchesPlayed, jerseyNumber);
        this.totalGoals=goals;
        this.playingPosition=position;
    }

    public int getTotalGoals() {
        return totalGoals;
    }

    public void setTotalGoals(int totalGoals) {
        this.totalGoals = totalGoals;
    }

    public String getPlayingPosition() {
        return playingPosition;
    }

    public void setPlayingPosition(String playingPosition) {
        this.playingPosition = playingPosition;
    }

    void display(){
        super.display();
        System.out.println("Total Goals: "+this.getTotalGoals());
        System.out.println("Playing Position: "+this.getPlayingPosition()+"\n");
    }
}//class FootballPlayer ends here

class PlayerDetail{
    public static void main(String[] args) {
        CricketPlayer crc = new CricketPlayer("Virat Kohli",37,"India",600,18, 28800,9,"Percision","Medium Pacer");
        crc.display();

        FootballPlayer foot = new FootballPlayer("Sunil Chhetri", 40, "India", 150, 11, 100,"Attacker");
        foot.display();
    }
}

