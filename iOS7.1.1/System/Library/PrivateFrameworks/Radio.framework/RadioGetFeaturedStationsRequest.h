/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@protocol OS_dispatch_queue;
@class NSObject, SSURLConnectionRequest;

@interface RadioGetFeaturedStationsRequest : RadioRequest {

	NSObject<OS_dispatch_queue>* _artworkQueue;
	SSURLConnectionRequest* _request;
	unsigned _stationCount;
	bool _disableArtworkLoading;
	bool _disableCachedResponses;

}

@property (assign,nonatomic) bool disableArtworkLoading;               //@synthesize disableArtworkLoading=_disableArtworkLoading - In the implementation block
@property (assign,nonatomic) bool disableCachedResponses;              //@synthesize disableCachedResponses=_disableCachedResponses - In the implementation block
-(void)startWithCompletionHandler:(/*^block*/ id)arg1 ;
-(id)init;
-(void)cancel;
-(void).cxx_destruct;
-(void)setDisableArtworkLoading:(bool)arg1 ;
-(bool)disableArtworkLoading;
-(id)initWithStationCount:(unsigned)arg1 ;
-(id)_importFeaturedStationWithDictionary:(id)arg1 inModel:(id)arg2 loadArtworkSynchronously:(bool)arg3 ;
-(void)startWithFeaturedStationsCompletionHandler:(/*^block*/ id)arg1 ;
-(id)_stationDictionariesByApplyingResponse:(id)arg1 error:(id*)arg2 ;
-(bool)disableCachedResponses;
-(void)setDisableCachedResponses:(bool)arg1 ;
@end
