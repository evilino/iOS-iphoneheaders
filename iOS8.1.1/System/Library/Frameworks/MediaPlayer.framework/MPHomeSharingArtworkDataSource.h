/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:34 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPAbstractNetworkArtworkDataSource.h>

@class HSHomeSharingLibrary;

@interface MPHomeSharingArtworkDataSource : MPAbstractNetworkArtworkDataSource {

	HSHomeSharingLibrary* _library;

}

@property (nonatomic,retain) HSHomeSharingLibrary * library;              //@synthesize library=_library - In the implementation block
-(BOOL)areRepresentationsAvailableForCatalog:(id)arg1 ;
-(id)supportedSizesForCatalog:(id)arg1 ;
-(id)cacheKeyForCatalog:(id)arg1 size:(CGSize)arg2 ;
-(id)requestForCatalog:(id)arg1 size:(CGSize)arg2 ;
-(void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)shouldLookForLargerRepresentationsWhenBestRepresentationIsUnavailable;
-(HSHomeSharingLibrary *)library;
-(void)setLibrary:(HSHomeSharingLibrary *)arg1 ;
@end

