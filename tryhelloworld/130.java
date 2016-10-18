public class HarshadNumber
{
	public boolean isHarshad(int num)
  {
    int res = 0;
    int num_res = num;
    while(true)
    {
      res += num % 10;
      num = num / 10;
      
      if(num == 0)
        break;
    }
    
		if(num_res % res == 0)
      return true;
    else
      return false;
	}
  
       // 아래는 테스트로 출력해 보기 위한 코드입니다.
	public static void  main(String[] args){
		HarshadNumber sn = new HarshadNumber();
		System.out.println(sn.isHarshad(58));
	}
}