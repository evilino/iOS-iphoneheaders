/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:27:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/SyncBundles/Apps.syncBundle/Apps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirTraffic/ATClient.h>

@protocol OS_dispatch_group;
@class NSArray, NSObject, NSMutableSet;

@interface AppsClient : NSObject <ATClient> {

	NSArray* _uninstalledApps;
	NSObject<OS_dispatch_group>* _installGroup;
	int _numAppInstallsAttempted;
	NSMutableSet* _outstandingAFCTransfers;

}
+(void)_notifySpringBoard:(bool)arg1 ;
+(id)_orderTheItems:(id)arg1 ;
+(id)_loadPlist:(id)arg1 withError:(id*)arg2 ;
+(bool)_stringIsCool:(id)arg1 ;
+(bool)_makeIconFromBundlePath:(id)arg1 saveTo:(id)arg2 ;
-(void)_createPlaceHolderApplication:(id)arg1 ;
-(void)_performAssetInstall:(id)arg1 ;
-(void)_changeAssetID:(id)arg1 toDo:(id)arg2 ;
-(id)_placeholderAppPathForBundleIdentifier:(id)arg1 ;
-(int)_getAndResetNumAppInstallsAttempted;
-(id)_progressForAssetIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)currentSyncAnchor;
-(bool)prepareForSyncWithHostAnchor:(id)arg1 progressCallback:(/*^block*/ id)arg2 error:(id*)arg3 ;
-(bool)reconcileSync:(unsigned)arg1 withNewAnchor:(id)arg2 progressCallback:(/*^block*/ id)arg3 error:(id*)arg4 ;
-(void)syncEndedWithSuccess:(bool)arg1 ;
-(bool)reconcileRestoreWithError:(id*)arg1 ;
-(id)outstandingAssetTransfersWithDownloadManager:(id)arg1 ;
-(void)assetTransfer:(id)arg1 succeeded:(bool)arg2 withError:(id)arg3 ;
-(void)assetTransfer:(id)arg1 updatedProgress:(double)arg2 ;
-(void)assetInstallFailed:(id)arg1 withError:(id)arg2 ;
-(void)assetInstallSucceeded:(id)arg1 ;
-(void)assetTransferEndedWithSuccess:(bool)arg1 ;
-(id)appleIDsForAssets;
-(void)clearSyncData;
-(id)installedAssetMetrics;
-(id)installedAssets;
-(id)supportedDataclasses;
@end
