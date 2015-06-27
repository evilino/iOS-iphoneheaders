/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:47:27 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/NSCopying.h>

@interface EKDayViewItemPath : NSObject <NSCopying> {

	int _section;
	unsigned _index;

}

@property (nonatomic,readonly) int section;                 //@synthesize section=_section - In the implementation block
@property (nonatomic,readonly) unsigned index;              //@synthesize index=_index - In the implementation block
+(id)itemPathWithIndex:(unsigned)arg1 inSection:(int)arg2 ;
-(id)initWithIndex:(unsigned)arg1 inSection:(int)arg2 ;
-(char)isEqual:(id)arg1 ;
-(int)section;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)index;
@end
