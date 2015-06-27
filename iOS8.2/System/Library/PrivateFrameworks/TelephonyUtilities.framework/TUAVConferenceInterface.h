/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:18 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUtilities/AVConferenceDelegate.h>

@class NSMutableArray, AVConference;

@interface TUAVConferenceInterface : NSObject <AVConferenceDelegate> {

	char _hasActiveConference;
	NSMutableArray* _activeConferenceConnections;
	AVConference* _conference;
	int _callID;

}

@property (nonatomic,retain) NSMutableArray * activeConferenceConnections;              //@synthesize activeConferenceConnections=_activeConferenceConnections - In the implementation block
@property (nonatomic,retain) AVConference * conference;                                 //@synthesize conference=_conference - In the implementation block
@property (assign,nonatomic) int callID;                                                //@synthesize callID=_callID - In the implementation block
@property (assign,nonatomic) char hasActiveConference;                                  //@synthesize hasActiveConference=_hasActiveConference - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)conference:(id)arg1 didStartSession:(char)arg2 withUserInfo:(id)arg3 ;
-(void)conference:(id)arg1 didStopWithCallID:(int)arg2 error:(id)arg3 ;
-(void)conference:(id)arg1 withCallID:(int)arg2 remoteMediaStalled:(char)arg3 ;
-(void)conference:(id)arg1 receivedFirstRemoteFrameForCallID:(int)arg2 ;
-(void)conference:(id)arg1 remoteVideoAttributesChanged:(id)arg2 callID:(int)arg3 ;
-(void)conference:(id)arg1 remoteAudioPaused:(char)arg2 callID:(int)arg3 ;
-(void)conference:(id)arg1 remoteVideoPaused:(char)arg2 callID:(int)arg3 ;
-(void)conference:(id)arg1 remoteScreenAttributesChanged:(id)arg2 callID:(int)arg3 ;
-(void)conference:(id)arg1 updateInputFrequencyLevel:(id)arg2 ;
-(void)conference:(id)arg1 updateOutputFrequencyLevel:(id)arg2 ;
-(void)conference:(id)arg1 updateInputMeterLevel:(float)arg2 ;
-(void)conference:(id)arg1 updateOutputMeterLevel:(float)arg2 ;
-(void)conference:(id)arg1 inititiateRelayRequest:(int)arg2 requestDict:(id)arg3 ;
-(void)conference:(id)arg1 sendRelayUpdate:(int)arg2 updateDict:(id)arg3 ;
-(void)conference:(id)arg1 cancelRelayRequest:(int)arg2 requestDict:(id)arg3 ;
-(void)conference:(id)arg1 videoQualityNotificationForCallID:(int)arg2 isDegraded:(char)arg3 isRemote:(char)arg4 ;
-(void)conference:(id)arg1 withCallID:(int)arg2 networkHint:(char)arg3 ;
-(void)conference:(id)arg1 closeConnectionForCallID:(int)arg2 ;
-(void)serverDiedForConference:(id)arg1 ;
-(int)callID;
-(void)setCallID:(int)arg1 ;
-(char)hasActiveConference;
-(void)setHasActiveConference:(char)arg1 ;
-(void)setActiveConferenceConnections:(NSMutableArray *)arg1 ;
-(void)_cleanUpConference;
-(id)_conferenceConnectionForIdentifier:(id)arg1 ;
-(AVConference *)conference;
-(NSMutableArray *)activeConferenceConnections;
-(char)isMutedForIdentifier:(id)arg1 ;
-(char)isSendingAudioForIdentifier:(id)arg1 ;
-(void)_startConferenceForConferenceConnection:(id)arg1 withSocket:(int)arg2 ;
-(void)_cleanUpConferenceConnection:(id)arg1 error:(id)arg2 ;
-(void)setConference:(AVConference *)arg1 ;
-(void)_startAudioSession;
-(void)_setUpDidStartTimeoutForConference:(id)arg1 conferenceConnection:(id)arg2 ;
-(void)_cleanUpAllConferenceConnectionsWithError:(id)arg1 ;
-(void)_endConference:(char)arg1 ;
-(void)_stopAudioSession;
-(char)_shouldIgnoreAVConferenceError:(id)arg1 ;
-(void)setMuted:(char)arg1 forIdentifier:(id)arg2 ;
-(void)setSendingAudio:(char)arg1 forIdentifier:(id)arg2 ;
-(void)startConferenceForIdentifier:(id)arg1 withSocket:(int)arg2 asHost:(char)arg3 didStartHandler:(/*^block*/id)arg4 didStopHandler:(/*^block*/id)arg5 ;
-(void)stopConferenceForIdentifier:(id)arg1 ;
@end
