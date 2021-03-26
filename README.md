# UnrealEngine HttpRequest
The main goal of this project is to represent some data extracted by a HttpRequest on screen, using a C++ Basic Code project as base. 
This data is in JSON format, so in order to extract the value of the different fields, it is neccesary to include some dependencies in the Build.cs file as Http, JSON and JSON utilities. 

The actor developed is named HttpActor and basically create two Http request, one to retrieve the name and the coins of an existing user in a users list provided, and the other one to retrieve the appid for the game titled 'Hit N' Rush', from the game list provided by Steamworks. These two calls will create a sentence on the screen at the beginning of the game: the user related in green and the game related in blue. These sentences will remain on screen 10 seconds since the start of the game.
