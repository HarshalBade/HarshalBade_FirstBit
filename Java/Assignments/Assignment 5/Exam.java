public class Exam {
    String examName;
    int examId;
    String subject;
    int totalMarks;
    int passingMarks;

    Exam(){}
    Exam(String examName, int examId, String subject, int totalMarks, int passingMarks){
        this.examName=examName;
        this.examId=examId;
        this.subject=subject;
        this.totalMarks=totalMarks;
        this.passingMarks=passingMarks;
    }
    public String getExamName() {
        return examName;
    }

    public void setExamName(String examName) {
        this.examName = examName;
    }

    public int getExamId() {
        return examId;
    }

    public void setExamId(int examId) {
        this.examId = examId;
    }

    public String getSubject() {
        return subject;
    }

    public void setSubject(String subject) {
        this.subject = subject;
    }

    public int getTotalMarks() {
        return totalMarks;
    }

    public void setTotalMarks(int totalMarks) {
        this.totalMarks = totalMarks;
    }

    public int getPassingMarks() {
        return passingMarks;
    }

    public void setPassingMarks(int passingMarks) {
        this.passingMarks = passingMarks;
    }

    void calculateResult(){
        System.out.println("Result ...");
    }
}

class OnlineExam extends Exam{
    String platformName;
    boolean browserLock;
    boolean autoSubmit;

    OnlineExam(){
        super();
    }
    OnlineExam(String examName, int examId, String subject, int totalMarks, int passingMarks, String platformName, boolean browserLock, boolean autoSubmit){
        super(examName, examId, subject, totalMarks, passingMarks);
        this.platformName=platformName;
        this.browserLock=browserLock;
        this.autoSubmit=autoSubmit;
    }
    public String getPlatformName() {
        return platformName;
    }

    public void setPlatformName(String platformName) {
        this.platformName = platformName;
    }

    public boolean isBrowserLock() {
        return browserLock;
    }

    public void setBrowserLock(boolean browserLock) {
        this.browserLock = browserLock;
    }

    public boolean isAutoSubmit() {
        return autoSubmit;
    }

    public void setAutoSubmit(boolean autoSubmit) {
        this.autoSubmit = autoSubmit;
    }

    @Override
    void calculateResult() {
        super.calculateResult();
        System.out.println("Auto evaluate MCQs and submit marks online\n");
    }
}

class OfflineExam extends Exam{
    int hallNumber;
    String invigilator;
    int answerBookletId;

    OfflineExam(){
        super();
    }
    OfflineExam(String examName, int examId, String subject, int totalMarks, int passingMarks, int hallNumber, String invigilator,int answerBookletId){
        super(examName, examId, subject, totalMarks, passingMarks);
        this.hallNumber = hallNumber;
        this.invigilator=invigilator;
        this.answerBookletId=answerBookletId;
    }
    public int getHallNumber() {
        return hallNumber;
    }

    public void setHallNumber(int hallNumber) {
        this.hallNumber = hallNumber;
    }

    public String getInvigilator() {
        return invigilator;
    }

    public void setInvigilator(String invigilator) {
        this.invigilator = invigilator;
    }

    public int getAnswerBookletId() {
        return answerBookletId;
    }

    public void setAnswerBookletId(int answerBookletId) {
        this.answerBookletId = answerBookletId;
    }

    @Override
    void calculateResult() {
        super.calculateResult();
        System.out.println("Teacher manually checks answer booklet\n");
    }
}

class TestExam{
    public static void main(String[] args) {
        OnlineExam online = new OnlineExam("INSEM", 1234, "Java", 100, 40, "MobileApp", true,true);
        online.calculateResult();

        OfflineExam offline = new OfflineExam("INSEM", 1234, "Java", 100, 40, 206, "Harshal Bade", 177);
        offline.calculateResult();
    }
}