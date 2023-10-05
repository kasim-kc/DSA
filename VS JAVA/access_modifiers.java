class Account{
    public String name;
    protected String email;
    private String password;


// getters and setters...
    public String getPassword(){
        return this.password;
    }
    public void setPassword(String pass){
        this.password = pass;
    }
}

public class access_modifiers {
    public static void main(String args[]){
        Account a1 = new Account();
        a1.name = "Mritunjay";
        a1.setPassword("abc");
        System.out.println(a1.getPassword());
        
    }
}
