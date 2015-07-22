/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:44 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MSAsset, MSASAlbum;

@interface MSASAssetInfoToReauthForDownload : NSObject {

	MSAsset* _asset;
	MSASAlbum* _album;

}

@property (nonatomic,retain) MSAsset * asset;                //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) MSASAlbum * album;              //@synthesize album=_album - In the implementation block
-(MSAsset *)asset;
-(void)setAsset:(MSAsset *)arg1 ;
-(void)setAlbum:(MSASAlbum *)arg1 ;
-(MSASAlbum *)album;
@end
