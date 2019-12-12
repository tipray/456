using System;
namespace test789
{
    public class MyClass
    {
        public MyClass()
        {
            package game;
            import java.util.Random;
            import java.util.Scanner;
/**
 * @author Silence
 * @creat 2019-09-12  17:04
 */
public class RandomGame
        {
            public static void main(String[] args)
            {
                //        创建一个随机数
                Random random = new Random();
                //        随机数字范围是0-100
                int randomNum = random.nextInt(101);

                //        从键盘输入
                Scanner scanner = new Scanner(System.in);
                System.out.println("猜字游戏开始啦~");
                int j = 0;

                while (true)
                {
                    j++;
                    System.out.println("请输入你心中的数字…");
                    int guessNum = scanner.nextInt();
                    //        判断输入是否正确
                    if (guessNum > randomNum)
                    {
                        System.out.println("太大了，小一点^-^");
                    }
                    else if (guessNum < randomNum)
                    {
                        System.out.println("太小了，再大一点^-^");
                    }
                    else
                    {
                        System.out.println("恭喜你，猜对啦！");
                        //                如果猜对了，就跳出循环
                        System.out.println("您一共猜了" + j + "次");
                        break;
                    }
                }
                System.out.println("游戏结束");
            }
        }
    }
    }
}
