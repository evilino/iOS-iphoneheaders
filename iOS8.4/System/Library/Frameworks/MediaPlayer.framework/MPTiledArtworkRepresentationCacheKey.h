/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:11 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/NSCopying.h>

@interface MPTiledArtworkRepresentationCacheKey : NSObject <NSCopying> {

	id _entityIdentifier;
	id _namespaceIdentifier;
	unsigned long long _numberOfColumns;
	unsigned long long _numberOfRows;
	id _revisionIdentifier;
	CGSize _scaledFittingSize;
	double _tileSpacing;

}
-(id)initWithTiledArtworkRequest:(id)arg1 scaledFittingSize:(CGSize)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

