public class GetMean {
    public int getMean(int[] array) 
    {
      int result = 0;
      for(int i = 0; i < array.length; i++)
      {
        result += array[i];
      }
      
      result /= array.length;
        return result;
    }

    public static void main(String[] args) {
        int x[] = {5, 4, 3};
        GetMean getMean = new GetMean();
        System.out.println("평균값 : " + getMean.getMean(x));
    }
}


