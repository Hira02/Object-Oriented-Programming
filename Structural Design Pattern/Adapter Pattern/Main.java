
public class Main
{
	public static void main(String[] args) {
		System.out.println("Adapter Design Pattern demo");
		AudioPlayer play = new AudioPlayer();
		play.play("mp3","xyz.mp3");
		play.play("VLC","VLCsongs.vlc");
		play.play("MP4","Mp4songs.mp4");
		play.play("3gp","3gpsongs.3gp");
	}
}
