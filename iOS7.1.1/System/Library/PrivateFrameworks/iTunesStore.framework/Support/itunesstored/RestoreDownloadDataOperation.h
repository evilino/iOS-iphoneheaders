/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:50:54 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <itunesstored/DownloadStepOperation.h>
#import <iTunesStore/ISOperationDelegate.h>

@class Download;

@interface RestoreDownloadDataOperation : DownloadStepOperation <ISOperationDelegate> {

	Download* _download;

}
-(void)prepareUsingDownloadsSession:(id)arg1 ;
-(BOOL)_restoreDataForBundleID:(id)arg1 restoreState:(int)arg2 error:(id*)arg3 ;
-(BOOL)_isFatalRestoreError:(id)arg1 ;
-(void)operation:(id)arg1 updatedProgress:(id)arg2 ;
-(void)operationFinished:(id)arg1 ;
-(void)dealloc;
-(void)run;
@end
