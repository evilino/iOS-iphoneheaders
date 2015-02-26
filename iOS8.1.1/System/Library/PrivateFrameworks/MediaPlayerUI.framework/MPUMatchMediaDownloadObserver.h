/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:30 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MPUMediaDownloadObserver.h>
#import <MediaPlayerUI/MPStoreDownloadManagerObserver.h>

@class MPStoreDownload, NSString;

@interface MPUMatchMediaDownloadObserver : MPUMediaDownloadObserver <MPStoreDownloadManagerObserver> {

	MPStoreDownload* _storeDownload;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2 ;
-(BOOL)isPurchasing;
-(void)dealloc;
-(void)cancelDownload;
-(double)downloadProgress;
-(id)initWithStoreDownload:(id)arg1 ;
-(void)_onQueue_invalidate;
-(BOOL)isCurrentlyPlayable;
-(BOOL)canCancel;
-(void)pauseDownload;
-(void)resumeDownload;
-(BOOL)isRestoreDownload;
-(double)rawDownloadProgress;
-(double)rawDownloadTotal;
-(BOOL)isPaused;
@end
