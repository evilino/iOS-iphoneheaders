/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSMutableCopying.h>
#import <CoreFoundation/NSSecureCoding.h>

@class NSDate, NSDictionary;

@interface RadioTrackPlaybackDescriptor : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	bool _current;
	NSDate* _expirationDate;
	double _pauseTime;
	NSDate* _skipDate;
	long long _storeID;
	NSDictionary* _trackInfo;

}

@property (getter=isCurrent,nonatomic,readonly) bool current;              //@synthesize current=_current - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;                    //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) double pauseTime;                           //@synthesize pauseTime=_pauseTime - In the implementation block
@property (nonatomic,readonly) NSDate * skipDate;                          //@synthesize skipDate=_skipDate - In the implementation block
@property (nonatomic,readonly) long long storeID;                          //@synthesize storeID=_storeID - In the implementation block
@property (nonatomic,readonly) NSDictionary * trackInfo;                   //@synthesize trackInfo=_trackInfo - In the implementation block
+(bool)supportsSecureCoding;
-(long long)storeID;
-(id)trackInfo;
-(bool)isCurrent;
-(id)skipDate;
-(id)initWithTrack:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)mutableCopyWithZone:(NSZone)arg1 ;
-(void).cxx_destruct;
-(id)expirationDate;
-(double)pauseTime;
-(id)queueTrackDictionary;
@end
