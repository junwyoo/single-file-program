class VersionCheck{

  public static void main (String args[]) {
    String version = System.getProperty("java.version");
    int pos = version.indexOf('.');
    pos = version.indexOf('.', pos+1);
    int x;
    double result = Double.parseDouble (version.substring (0, pos));
    System.out.format("%f\n", result);
  }
}
