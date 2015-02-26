/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:33 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface UIMovieClosedCaptionData : NSObject {

	NSString* _language;
	NSMutableArray* _data;

}

@property (nonatomic,retain) NSString * language;              //@synthesize language=_language - In the implementation block
-(id)timeMarkers;
-(void)addCaptionText:(id)arg1 startTime:(double)arg2 endTime:(double)arg3 ;
-(id)description;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
@end
