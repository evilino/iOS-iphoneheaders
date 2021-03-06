/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:48 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <medialibraryd/medialibraryd-Structs.h>
#import <medialibraryd/MLDDAAPImportOperation.h>

@class ML3EntityReplacer;

@interface MLDHomeSharingImportOperation : MLDDAAPImportOperation {

	unsigned _basePlaylistContainerId;
	ML3EntityReplacer* _containerReplacer;
	int _playlistNameOrder;

}
-(unsigned)importSource;
-(shared_ptr<MLDDAAPImportItem>*)importItemFromDAAPElement:(shared_ptr<DAAP::Element>*)arg1 ;
-(void)updateImportProgress:(float)arg1 ;
-(char)importPlaylistElement:(shared_ptr<DAAP::Element>*)arg1 toLibrary:(id)arg2 usingConnection:(id)arg3 orphanContainers:(id*)arg4 ;
-(char)_performHomeSharingImportWithTransaction:(id)arg1 ;
-(void)main;
@end

