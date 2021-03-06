/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:05:48 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLNetworkWatcherDelegate.h>
#import <CloudPhotoLibrary/CPLEngineComponent.h>

@protocol OS_dispatch_queue;
@class NSURL, NSObject, CPLNetworkWatcher, CPLEngineLibrary, NSString;

@interface CPLEngineSystemMonitor : NSObject <CPLNetworkWatcherDelegate, CPLEngineComponent> {

	NSURL* _volumeURL;
	NSObject*<OS_dispatch_queue> _queue;
	CPLNetworkWatcher* _watcher;
	CPLEngineLibrary* _engineLibrary;

}

@property (nonatomic,__weak,readonly) CPLEngineLibrary * engineLibrary;              //@synthesize engineLibrary=_engineLibrary - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)componentName;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(CPLEngineLibrary *)engineLibrary;
-(void)closeAndDeactivate:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithEngineLibrary:(id)arg1 ;
-(void)networkStateDidChangeForNetworkWatched:(id)arg1 ;
-(unsigned)diskPressureState;
-(char)isNetworkConnected;
@end

