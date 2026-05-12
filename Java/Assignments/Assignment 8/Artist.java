public class Artist {
    String name;
    int age;

    Artist(){}
    Artist(String name, int age){
        this.name=name;
        this.age=age;
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

    @Override
    public String toString() {
        return "Artist{" +
                "name='" + name + '\'' +
                ", age=" + age +
                '}';
    }
}//class Artist ends here

class Painter extends Artist{
    String paintingStyle;
    String mediumUsed;
    int numberOfPaintings;

    Painter(){
        super();
    }
    Painter(String name, int age, String paintingStyle, String mediumUsed, int numberOfPaintings){
        super(name, age);
        this.paintingStyle=paintingStyle;
        this.mediumUsed=mediumUsed;
        this.numberOfPaintings=numberOfPaintings;
    }

    public String getPaintingStyle() {
        return paintingStyle;
    }

    public void setPaintingStyle(String paintingStyle) {
        this.paintingStyle = paintingStyle;
    }

    public String getMediumUsed() {
        return mediumUsed;
    }

    public void setMediumUsed(String mediumUsed) {
        this.mediumUsed = mediumUsed;
    }

    public int getNumberOfPaintings() {
        return numberOfPaintings;
    }

    public void setNumberOfPaintings(int numberOfPaintings) {
        this.numberOfPaintings = numberOfPaintings;
    }

    @Override
    public String toString() {
        return super.toString() + " Painter{" +
                "paintingStyle='" + paintingStyle + '\'' +
                ", mediumUsed='" + mediumUsed + '\'' +
                ", numberOfPaintings=" + numberOfPaintings +
                '}';
    }
}//class Painter ends here

class Musician extends Artist{
    String instrument;
    String musicGenre;
    int numberOfAlbums;

    Musician(){
        super();
    }
    Musician(String name, int age,String instrument, String musicGenre, int numberOfAlbums){
        super(name, age);
        this.instrument=instrument;
        this.musicGenre=musicGenre;
        this.numberOfAlbums=numberOfAlbums;
    }

    public String getInstrument() {
        return instrument;
    }

    public void setInstrument(String instrument) {
        this.instrument = instrument;
    }

    public String getMusicGenre() {
        return musicGenre;
    }

    public void setMusicGenre(String musicGenre) {
        this.musicGenre = musicGenre;
    }

    public int getNumberOfAlbums() {
        return numberOfAlbums;
    }

    public void setNumberOfAlbums(int numberOfAlbums) {
        this.numberOfAlbums = numberOfAlbums;
    }

    @Override
    public String toString() {
        return super.toString() + " Musician{" +
                "instrument='" + instrument + '\'' +
                ", musicGenre='" + musicGenre + '\'' +
                ", numberOfAlbums=" + numberOfAlbums +
                '}';
    }
} //class Musician ends here

class Actor extends Artist{
    String filmIndustry;
    int numberOfMovies;

    Actor(){
        super();
    }
    Actor(String name, int age, String filmIndustry, int numberOfMovies){
        super(name, age);
        this.filmIndustry=filmIndustry;
        this.numberOfMovies=numberOfMovies;
    }
    public String getFilmIndustry() {
        return filmIndustry;
    }

    public void setFilmIndustry(String filmIndustry) {
        this.filmIndustry = filmIndustry;
    }

    public int getNumberOfMovies() {
        return numberOfMovies;
    }

    public void setNumberOfMovies(int numberOfMovies) {
        this.numberOfMovies = numberOfMovies;
    }

    @Override
    public String toString() {
        return super.toString() + " Actor{" +
                "filmIndustry='" + filmIndustry + '\'' +
                ", numberOfMovies=" + numberOfMovies +
                '}';
    }
}//class Actor ends here

class ArtistTest{
    public static void main(String[] args) {
        Artist[] artist = new Artist[3];
        artist[0] = new Painter("Harry", 40, "Modern Art", "Brush and Board",100);
        artist[1] = new Musician("Ajay-Atul", 36, "Band", "classic", 101);
        artist[2] = new Actor("Pravin tarde", 40, "Marathi Film Industry", 26);

        for(Artist art : artist ) {
            System.out.println(art);
            checkMusicEventEligibility(art);
            System.out.println("- - - - -");
        }
    }
    static void checkMusicEventEligibility(Artist artist){
        if (artist instanceof Musician) {
            Musician musician = (Musician) artist;
            System.out.println("Musician " + musician.getName()
                    + " is allowed for the Music Event and is playing "
                    + musician.getInstrument());
        }
        else
            System.out.println(artist.getName() + " is not allowed for the Music Event.");
    }
}
