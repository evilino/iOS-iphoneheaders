/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaDownloadObserver.h>

@class NSString;

@interface MPAirTrafficMediaDownloadObserver : MPMediaDownloadObserver {

	NSString* _assetIdentifier;
	double _lastDownloadProgress;

}
+(void)registerObserver:(id)arg1 forAssetID:(id)arg2 ;
+(void)unregisterObserver:(id)arg1 forAssetID:(id)arg2 ;
+(void)connection:(id)arg1 updatedProgress:(id)arg2 ;
+(void)initialize;
-(double)downloadProgress;
-(id)initWithAssetIdentifier:(id)arg1 ;
-(void)_onQueue_invalidate;
-(BOOL)isPurchasing;
-(void)dealloc;
-(void).cxx_destruct;
@end
