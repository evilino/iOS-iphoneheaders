/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:33 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest, RadioStation, NSDictionary, NSData, RadioPlayEventCollection, RadioPlaybackContext;

@interface RadioGetTracksRequest : RadioRequest {

	unsigned long long _globalVersion;
	BOOL _includeCleanTracksOnly;
	unsigned long long _numberOfTracks;
	SSURLConnectionRequest* _request;
	RadioStation* _station;
	BOOL _shouldIncludeAsset;
	NSDictionary* _additionalRequestParameters;
	NSData* _heartbeatTokenData;
	RadioPlayEventCollection* _playEventCollection;
	RadioPlaybackContext* _playbackContext;
	long long _reasonType;

}

@property (nonatomic,copy) NSDictionary * additionalRequestParameters;                  //@synthesize additionalRequestParameters=_additionalRequestParameters - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfTracks;                         //@synthesize numberOfTracks=_numberOfTracks - In the implementation block
@property (nonatomic,copy) NSData * heartbeatTokenData;                                 //@synthesize heartbeatTokenData=_heartbeatTokenData - In the implementation block
@property (assign,nonatomic) BOOL includeCleanTracksOnly;                               //@synthesize includeCleanTracksOnly=_includeCleanTracksOnly - In the implementation block
@property (nonatomic,copy) RadioPlayEventCollection * playEventCollection;              //@synthesize playEventCollection=_playEventCollection - In the implementation block
@property (nonatomic,copy) RadioPlaybackContext * playbackContext;                      //@synthesize playbackContext=_playbackContext - In the implementation block
@property (assign,nonatomic) long long reasonType;                                      //@synthesize reasonType=_reasonType - In the implementation block
@property (assign,nonatomic) BOOL shouldIncludeAsset;                                   //@synthesize shouldIncludeAsset=_shouldIncludeAsset - In the implementation block
-(void)setIncludeCleanTracksOnly:(BOOL)arg1 ;
-(void)cancel;
-(id)init;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)includeCleanTracksOnly;
-(NSDictionary *)additionalRequestParameters;
-(NSData *)heartbeatTokenData;
-(RadioPlayEventCollection *)playEventCollection;
-(BOOL)shouldIncludeAsset;
-(void)setNumberOfTracks:(unsigned long long)arg1 ;
-(void)setPlaybackContext:(RadioPlaybackContext *)arg1 ;
-(void)setPlayEventCollection:(RadioPlayEventCollection *)arg1 ;
-(id)initWithStation:(id)arg1 globalVersion:(unsigned long long)arg2 ;
-(RadioPlaybackContext *)playbackContext;
-(long long)reasonType;
-(void)setReasonType:(long long)arg1 ;
-(void)setShouldIncludeAsset:(BOOL)arg1 ;
-(unsigned long long)numberOfTracks;
-(void)setHeartbeatTokenData:(NSData *)arg1 ;
-(void)setAdditionalRequestParameters:(NSDictionary *)arg1 ;
@end
