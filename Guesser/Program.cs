#region usings

using System;

#endregion

namespace Guesser {
    internal class Program {
        private static void Main(string[] args) {
            bool isGuessed = false;

            int min = 0;
            int max = 100;
            int guesses = 1;

            int CalculateGuess() => max - (max - min) / 2;

            Console.WriteLine(
                $"Hello, please think of a number between {min} and {max}.\nType 'high' or 'low', relative my guess to yours.\nI will now try to guess your number.");

            while (!isGuessed) {
                Console.WriteLine($"{guesses} My guess is: {CalculateGuess()}");

                switch (Console.ReadLine()) {
                    case "high":
                        max = CalculateGuess();
                        break;
                    case "low":
                        min = CalculateGuess();
                        break;
                    case "correct":
                        isGuessed = true;
                        break;
                }

                guesses++;
            }
        }
    }
}