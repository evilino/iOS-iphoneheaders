/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:39 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <BulletinBoard/BulletinBoard-Structs.h>
@class NSMutableDictionary, NSString;

@interface BBObjectCache : NSObject {

	opaque_pthread_mutex_t _cacheMutex;
	NSMutableDictionary* _cache;
	NSString* _identifier;

}

@property (nonatomic,copy) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(id)description;
+(id)objectCacheForIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)debugDescription;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)cacheObject:(id)arg1 ;
-(void)removeCachedObject:(id)arg1 ;
-(id)cachedObjectForUniqueID:(id)arg1 ;
-(id)_descriptionForObject:(id)arg1 uniqueID:(id)arg2 ;
@end

