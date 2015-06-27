/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:29:19 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SCROBrailleDisplayCommandDispatcherDelegate <NSObject>
@required
-(id)brailleInputManager;
-(void)handleCommandPanLeftForDispatcher:(id)arg1;
-(void)handleCommandPanRightForDispatcher:(id)arg1;
-(void)handleCommandMoveLeftForDispatcher:(id)arg1;
-(void)handleCommandMoveRightForDispatcher:(id)arg1;
-(void)handleCommandRouterKeyEvent:(id)arg1 forDispatcher:(id)arg2;
-(void)handleCommandDeleteForDispatcher:(id)arg1;
-(void)handleCommandForwardDeleteForDispatcher:(id)arg1;
-(void)handleCommandEscapeForDispatcher:(id)arg1;
-(void)handleCommandTranslateForDispatcher:(id)arg1;
-(void)handleCommandReturnBrailleEvent:(id)arg1 forDispatcher:(id)arg2;
-(void)handleCommandToggleContractedBrailleEvent:(id)arg1 forDispatcher:(id)arg2;
-(void)handleCommandToggleEightDotBrailleEvent:(id)arg1 forDispatcher:(id)arg2;
-(void)handleUnsupportedKeyEvent:(id)arg1 forDispatcher:(id)arg2;

@end
