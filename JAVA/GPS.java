import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Scanner;

class GPS {
	public static final double R = 6372.8;
	public static void main(String args[]){
		Scanner in = new Scanner(System.in);
		 int T = Integer.parseInt(in.nextLine());
		 String[] previous = new String[5];
		 double totalDistance=0.0d;
		 long totalTime = 0;
		 
		 for(int i=0;i<T;i++){
			 String[] node  = in.nextLine().split(",");
			 if(i>0){
				 double distance= diagonal((Double.parseDouble(node[0])-Double.parseDouble(previous[0]))/1000,haversine(Double.parseDouble(node[3]),Double.parseDouble(node[4]),Double.parseDouble(previous[3]),Double.parseDouble(previous[4])));
				 double seconds = timeDifference(previous[1],node[1]);
				 totalDistance += distance;
				 totalTime += seconds;
			 }
			 previous = node;
		 }
		 
		 double avgSpeed = (totalDistance/totalTime)*3600;
		 System.out.println((Math.round(totalDistance * 10.0) / 10.0)+","+(Math.round(avgSpeed * 10.0) / 10.0));
	
	}
	
	public static double diagonal(double a,double b){
		double c;
		c = Math.sqrt((a*a)+(b*b));
		return c;
	}
	
	public static long timeDifference(String dateStart, String dateStop){
		SimpleDateFormat format = new SimpleDateFormat("yyyy-dd-mm'T'HH:mm:ss'Z'");
		 
		Date d1 = null;
		Date d2 = null;
 
		try {
			d1 = format.parse(dateStart);
			d2 = format.parse(dateStop);
 
			//in milliseconds
			long diff = d2.getTime() - d1.getTime();
 
			long diffSeconds = diff / 1000 % 60;
			long diffMinutes = diff / (60 * 1000) % 60;
			long diffHours = diff / (60 * 60 * 1000) % 24;
			long diffDays = diff / (24 * 60 * 60 * 1000);
 
			long sec = (diffDays * 24 * 60 * 60) + (diffHours * 60 * 60) + (diffMinutes * 60) + diffSeconds;
			return sec;
		} catch (Exception e) {
			e.printStackTrace();
		}
		return 0;
	}
	 public static double haversine(double lat1, double lon1, double lat2, double lon2) {
	        double dLat = Math.toRadians(lat2 - lat1);
	        double dLon = Math.toRadians(lon2 - lon1);
	        lat1 = Math.toRadians(lat1);
	        lat2 = Math.toRadians(lat2);
	 
	        double a = Math.sin(dLat / 2) * Math.sin(dLat / 2) + Math.sin(dLon / 2) * Math.sin(dLon / 2) * Math.cos(lat1) * Math.cos(lat2);
	        double c = 2 * Math.asin(Math.sqrt(a));
	        return R * c;
	    }
}
