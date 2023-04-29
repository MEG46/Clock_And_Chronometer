using System.Threading;

void timer(int sec, int min, int hour)
{
    int count = 1;
    do
    {
        if ((sec >= 0 && sec < 60) && (min >= 0 && min < 60) && (hour >= 0 && hour < 24))
        {
            while (true)
            {
                Console.Clear();
                

                if (sec < 10 && min < 10 && hour < 10)
                {
                    Console.WriteLine("0" + hour + ":" + "0" + min + ":" + "0" + sec);
                }
                else if (sec >= 10 && min < 10 && hour < 10)
                {
                    Console.WriteLine("0" + hour + ":" + "0" + min + ":" + sec);
                }
                else if (sec < 10 && min >= 10 && hour < 10)
                {
                    Console.WriteLine("0" + hour + ":" + min + ":" + "0" + sec);
                }
                else if (sec >= 10 && min >= 10 && hour < 10)
                {
                    Console.WriteLine("0" + hour + ":" + min + ":" + sec);
                }
                else if (sec < 10 && min >= 10 && hour >= 10 && hour < 24)
                {
                    Console.WriteLine(hour + ":" + min + ":" + "0" + sec);
                }
                else if (sec < 10 && min <= 10 && hour >= 10 && hour < 24)
                {
                    Console.WriteLine(hour + ":" + "0" + min + ":" + "0" + sec);
                }
                else if (sec >= 10 && min <= 10 && hour >= 10 && hour < 24)
                {
                    Console.WriteLine(hour + ":" + "0" + min + ":" + sec);
                }
                else
                {
                    Console.WriteLine(hour + ":" + min + ":" + sec);
                }
                if (sec == 0 && min > 0)
                {
                    min--;
                    sec = 60;
                }
                if (min == 0 && hour > 0 && sec == 0)
                {
                    hour--;
                    sec = 60;
                    min = 59;
                }
                if (hour == 0 && min == 0 && sec == 0)
                {
                    count = 0;
                    break;
                }
                Thread.Sleep(1000);
                sec--;


            }
        }

    } while (count != 0);
}
int sec, min, hour, temp = 1;
do
{
    Console.Write("Please enter the hour : ");
    hour = Convert.ToInt32(Console.ReadLine());
    Console.Write("Please enter the minutes : ");
    min = Convert.ToInt32(Console.ReadLine());
    Console.Write("Please enter the seconds : ");
    sec = Convert.ToInt32(Console.ReadLine());
    if ((sec >= 0 && sec < 60) && (min >= 0 && min < 60) && (hour >= 0 && hour < 24))
    {
        temp = 0;
        timer(sec, min, hour);
        break;
    }
    else
    {
        Console.WriteLine("Invalid Process! Please enter again!");
    }
} while (temp != 0);

Console.WriteLine("Finished!");
