/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:04:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <vot/VOTOutputComponent.h>

@class NSMutableDictionary, AXAccessQueue;

@interface VOTOutputSoundComponent : VOTOutputComponent {

	NSMutableDictionary* _cachedSounds;
	float _volume;
	AXAccessQueue* _soundAccessQueue;

}
-(void)playSoundFast:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)_handlePerformAction:(id)arg1 ;
-(void)sound:(id)arg1 didFinishPlaying:(BOOL)arg2 ;
-(id)_findSound:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)handleEvent:(id)arg1 ;
-(void)setVolume:(float)arg1 ;
@end

