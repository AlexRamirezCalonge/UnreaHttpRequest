#include "HttpActor.h"
#include "MyProject.h"

// Sets default values
AHttpActor::AHttpActor()
{
	//When the object is constructed, Get the HTTP module
	Http = &FHttpModule::Get();
}

// Called when the game starts or when spawned
void AHttpActor::BeginPlay()
{
	HttpCall();
	Super::BeginPlay();
}

/*User Http call*/
void AHttpActor::HttpCall()
{
	TSharedRef<IHttpRequest> Request = Http->CreateRequest();
	Request->OnProcessRequestComplete().BindUObject(this, &AHttpActor::OnResponseReceived);
	//This is the url on which to process the request
	Request->SetURL("http://localhost:3000/users/Arcklong");
	Request->SetVerb("GET");
	Request->SetHeader(TEXT("User-Agent"), "X-UnrealEngine-Agent");
	Request->SetHeader("Content-Type", TEXT("application/json"));
	Request->ProcessRequest();

	TSharedRef<IHttpRequest> Request2 = Http->CreateRequest();
	Request2->OnProcessRequestComplete().BindUObject(this, &AHttpActor::OnResponseReceived);
	//This is the url on which to process the request
	Request2->SetURL("http://localhost:3000/GetAppList/Hit%20N'%20Rush");
	Request2->SetVerb("GET");
	Request2->SetHeader(TEXT("User-Agent"), "X-UnrealEngine-Agent");
	Request2->SetHeader("Content-Type", TEXT("application/json"));
	Request2->ProcessRequest();
}

/*Assigned function on successfull http call*/
void AHttpActor::OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	//Create a pointer to hold the json serialized data
	TSharedPtr<FJsonObject> JsonObject;

	//Create a reader pointer to read the json data
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());
	//Deserialize the json data given Reader and the actual object to deserialize
	if (FJsonSerializer::Deserialize(Reader, JsonObject))
	{
		//Get the value of the json object by field name
		FString receivedName = JsonObject->GetStringField("name");
		FString receivedCoins = JsonObject->GetStringField("coins");
		FString receivedAppId = JsonObject->GetStringField("appid");
		//First Call
		if (receivedAppId == "") {
			FString response = "Nombre: " + receivedName + ", Monedas: " + receivedCoins;
			GEngine->AddOnScreenDebugMessage(1, 10.0f, FColor::Green, response);
		}
		//Second Call
		else {
			FString response = "AppId: " + receivedAppId;
			GEngine->AddOnScreenDebugMessage(2, 10.0f, FColor::Blue, response);
		}
	}
}