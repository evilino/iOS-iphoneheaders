/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:00:19 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/GEOResourceManifestTileGroupObserver.h>

@class NSCache, NSMapTable, VKResourceManager, NSString;

@interface VKTrafficIncidentImageManager : NSObject <GEOResourceManifestTileGroupObserver> {

	NSCache* _imageCache;
	NSMapTable* _targetDisplayToProvider;
	VKResourceManager* _resourceManager;
	unsigned _tileGroupIdentifier;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)dealloc;
-(id)initWithTileGroupIdentifier:(unsigned)arg1 resourceManager:(id)arg2 ;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(id)imageForIncidentType:(int)arg1 contentScale:(float)arg2 targetDisplay:(int)arg3 ;
-(id)imageForIncidentType:(int)arg1 contentScale:(float)arg2 ;
-(void)setIncidentIconProvider:(/*^block*/id)arg1 forTargetDisplay:(int)arg2 ;
@end

