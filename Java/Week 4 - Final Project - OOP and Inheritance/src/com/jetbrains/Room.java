package com.jetbrains;

public class Room {

    public Room (String description)
    {
        RoomDescription = description;
    }

    private String RoomDescription;

    public void DisplayRoomDescription()
    {
        System.out.println("After entering the room, you see " + RoomDescription);
    }
}