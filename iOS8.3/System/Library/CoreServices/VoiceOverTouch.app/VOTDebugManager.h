/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:22:04 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VOTElementManagementProtocol;
@interface VOTDebugManager : NSObject {

	id<VOTElementManagementProtocol> _elementManager;

}

@property (nonatomic,retain) id<VOTElementManagementProtocol> elementManager;              //@synthesize elementManager=_elementManager - In the implementation block
+(id)sharedInstance;
-(id<VOTElementManagementProtocol>)elementManager;
-(void)setElementManager:(id<VOTElementManagementProtocol>)arg1 ;
-(void)dealloc;
-(id)init;
@end

