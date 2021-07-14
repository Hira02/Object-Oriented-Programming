class Adapter{
    AdavncedMediaPlayer player;
    public void play(String type, String fileName){
        if(type.equalsIgnoreCase("VLC")){
            player = new VLCPlayer();
            player.playVLC(type, fileName);
        }else if(type.equalsIgnoreCase("MP4")){
            player = new MP4Player();
            player.playMp4(type, fileName);
        }
         
        }
    
}