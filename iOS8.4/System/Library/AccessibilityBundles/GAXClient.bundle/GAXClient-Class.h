/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:15:00 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/AccessibilityBundles/GAXClient.bundle/GAXClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GAXClient/GAXClient-Structs.h>
@class AXIPCClient, AXIPCServer;

@interface GAXClient : NSObject {

	BOOL _enabled;
	BOOL _allowsMotion;
	BOOL _allowsKeyboardTextInput;
	unsigned _serverMode;
	AXIPCClient* _backboardClient;
	AXIPCServer* _appServer;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                        //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) unsigned serverMode;                                  //@synthesize serverMode=_serverMode - In the implementation block
@property (assign,nonatomic) BOOL allowsMotion;                                    //@synthesize allowsMotion=_allowsMotion - In the implementation block
@property (assign,nonatomic) BOOL allowsKeyboardTextInput;                         //@synthesize allowsKeyboardTextInput=_allowsKeyboardTextInput - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (getter=isInWorkspace,nonatomic,readonly) BOOL inWorkspace; 
@property (nonatomic,retain) AXIPCClient * backboardClient;                        //@synthesize backboardClient=_backboardClient - In the implementation block
@property (nonatomic,retain) AXIPCServer * appServer;                              //@synthesize appServer=_appServer - In the implementation block
+(id)sharedInstance;
-(BOOL)_viewRequiresPadding:(id)arg1 ;
-(id)_handleSettingsDidChange:(id)arg1 ;
-(CGRect)_selectionTargetFrameForView:(id)arg1 ;
-(id)_tableViewCellAncestorForView:(id)arg1 ;
-(BOOL)_viewShouldBeIgnored:(id)arg1 ;
-(void)setBackboardClient:(AXIPCClient *)arg1 ;
-(id)_handleIsMediaPlaying:(id)arg1 ;
-(void)_pauseOrResumeMedia:(BOOL)arg1 ;
-(id)_affectedViewsForPath:(id)arg1 ;
-(void)setAllowsKeyboardTextInput:(BOOL)arg1 ;
-(id)_handleResumeMedia:(id)arg1 ;
-(void)_handlePreferenceDidChange:(id)arg1 ;
-(BOOL)allowsKeyboardTextInput;
-(id)_controlAncestorForView:(id)arg1 ;
-(void)setAllowsMotion:(BOOL)arg1 ;
-(id)_ancestorView:(id)arg1 matchesBlock:(/*^block*/id)arg2 ;
-(id)_avPlayerForVideosApp;
-(BOOL)allowsMotion;
-(void)setServerMode:(unsigned)arg1 ;
-(id)_handleGetRestrictionIdentifiers:(id)arg1 ;
-(id)_handleRestrictionDidChangeState:(id)arg1 ;
-(id)_handlePrepareClientAppForTransitionToWorkspace:(id)arg1 ;
-(void)_notifyDidBecomeFrontmostAppIfNeeded;
-(AXIPCClient *)backboardClient;
-(id)_handlePauseMedia:(id)arg1 ;
-(void)_handleAppDidBecomeActive:(id)arg1 ;
-(void)asynchronouslyPresentGuidedAccessActiveBanner;
-(BOOL)_isMediaPlaying;
-(unsigned)serverMode;
-(id)_avPlayer;
-(id)_messageServiceName;
-(id)_handleHideKeyboard:(id)arg1 ;
-(id)_handleGetAffectedViewsForPath:(id)arg1 ;
-(void)setAppServer:(AXIPCServer *)arg1 ;
-(AXIPCServer *)appServer;
-(id)_hashForView:(id)arg1 ;
-(long long)_stateForRestrictionWithIdentifier:(id)arg1 ;
-(id)_allWindowsIncludingStaticChromeForClassicMode:(BOOL)arg1 includingStatusBarWindow:(BOOL)arg2 ;
-(void)_sendMessageToBackboardWithIdentifier:(int)arg1 payload:(id)arg2 replyMessage:(id*)arg3 description:(id)arg4 ;
-(id)_guidedAccessRestrictionDelegate;
-(BOOL)isInWorkspace;
-(long long)stateForRestrictionWithIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isActive;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)setPasscode:(id)arg1 ;
@end

