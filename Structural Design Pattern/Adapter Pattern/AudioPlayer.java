class AudioPlayer implements MediaPlayer{
    Adapter advancedPlayer;
    public void play(String type, String fileName){
        if(type.equalsIgnoreCase("mp3")){
          System.out.println("Playing mp3: "+ fileName);
        }else if(type.equalsIgnoreCase("VLC") || type.equalsIgnoreCase("MP4")){
          advancedPlayer  = new Adapter();
          advancedPlayer.play(type, fileName);
        }else{
            System.out.println("uncompatible type "+ type+" :this song will not play as type is not matching any format");
        }
        
    }
    
}