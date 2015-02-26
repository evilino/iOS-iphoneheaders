/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:32 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, MPRemoteCommand;

@interface MPRemoteCommandEvent : NSObject {

	NSDictionary* _mediaRemoteOptions;
	MPRemoteCommand* _command;
	double _timestamp;

}

@property (nonatomic,readonly) MPRemoteCommand * command;              //@synthesize command=_command - In the implementation block
@property (nonatomic,readonly) double timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
+(id)eventWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
-(id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
-(id)mediaRemoteOptions;
-(MPRemoteCommand *)command;
-(id)init;
-(double)timestamp;
@end
