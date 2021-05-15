#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"
#include "roll.h"
#include "shooter.h"

TEST_CASE("Verify Test Configuration", "verification") 
{
	REQUIRE(true == true);
}

TEST_CASE("assert die rolls return a value from 1 to 6") 
{
  Die die;
  for (int i = 0; i<10;i++)
  {
    die.roll();
    REQUIRE(die.rolled_value() < 7);
    REQUIRE(die.rolled_value() > 0);
  }

}

TEST_CASE("assert die rolls return a value from 2 to 12") 
{
  Die d1;
  Die d2;
  Roll roll(d1, d2);
  for (int i = 0; i<10;i++)
  {
    roll.roll_die();
    REQUIRE(roll.roll_value() <= 12);
    REQUIRE(roll.roll_value() >= 2);
  }

}

TEST_CASE("Test that shooter returns a Roll","verify that the roll result has one  of the following values: 2-12") 
{
  Shooter shooter;
  Die d1;
  Die d2;
  for (int i = 0; i<10;i++)
  {
    Roll* roll = shooter.throw_die(d1, d2);
    REQUIRE(roll->roll_value() <= 12);
    REQUIRE(roll->roll_value() >= 2);
  }

}
