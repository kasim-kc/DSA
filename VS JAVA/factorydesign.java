interface Notification{
    void notifyUser();
}

class Email implements Notification{
    public void notifyUser(){
        System.out.println("Sending an email ");
    }
}

class SMS implements Notification{
    public void notifyUser(){
        System.out.println("Sending an SMS");
    }
}

class PushNotifications implements Notification{
    public void notifyUser(){
        System.out.println("Sending a Push notification");
    }
}

class Factory{
    
    public Notification getInstance(String channel){
        if(channel == null || channel.isEmpty())
            return null;
        else{
            switch (channel) {
                case "SMS":
                    return new SMS();
                case "Email":
                    return new Email(); 

                case "Push":
                    return new PushNotifications();
            }
        }
        return null;    
    }
}




public class factorydesign{
    public static void main(String args[]){
        Factory obj = new Factory();
        Notification n1 = obj.getInstance("SMS");
        n1.notifyUser();
    }
}