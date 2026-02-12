package com.jetbrains;

public class Spaceship {

    public Spaceship(String description)
    {
        SpaceshipDescription = description;
    }

    public void DisplaySpaceShipDescription()
    {
        System.out.println("Looking around the hangar, you see " + SpaceshipDescription);
    }

    private String SpaceshipDescription;
}