/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:17:54 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UITextInteractionAssistant, UITextSelection, NSTimer, UIView, UITextRangeView, NSArray;

@interface UITextSelectionView : UIView {

	UITextInteractionAssistant* m_interactionAssistant;
	UITextSelection* m_selection;
	NSTimer* m_caretTimer;
	UIView* m_caretView;
	UITextRangeView* m_rangeView;
	char m_caretBlinks;
	char m_caretShowingNow;
	char m_visible;
	char m_activated;
	char m_wasShowingCommands;
	char m_delayShowingCommands;
	char m_dictationReplacementsMode;
	int m_showingCommandsCounter;
	NSArray* m_replacements;
	char m_deferSelectionCommands;
	CFRunLoopObserverRef m_observer;

}

@property (nonatomic,readonly) UITextInteractionAssistant * interactionAssistant; 
@property (nonatomic,readonly) UITextSelection * selection; 
@property (assign,nonatomic) char caretBlinks; 
@property (assign,nonatomic) char visible; 
@property (nonatomic,readonly) char selectionCommandsShowing; 
@property (nonatomic,retain) NSArray * replacements; 
@property (nonatomic,readonly) UIView * caretView; 
@property (nonatomic,readonly) UITextRangeView * rangeView; 
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)removeFromSuperview;
-(void)invalidate;
-(UITextInteractionAssistant *)interactionAssistant;
-(void)deferredUpdateSelectionRects;
-(id)dynamicCaret;
-(UITextSelection *)selection;
-(void)updateSelectionWithDocumentPoint:(CGPoint)arg1 ;
-(void)updateSelectionRects;
-(void)setVisible:(char)arg1 ;
-(void)deactivate;
-(void)selectionChanged;
-(id)scrollView;
-(void)detach;
-(void)setCaretBlinks:(char)arg1 ;
-(void)activate;
-(id)dynamicCaretList;
-(NSArray *)replacements;
-(char)caretBlinks;
-(char)visible;
-(void)updateDocumentHasContent:(char)arg1 ;
-(void)startCaretBlinkIfNeeded;
-(void)layoutChangedByScrolling:(char)arg1 ;
-(id)initWithInteractionAssistant:(id)arg1 ;
-(void)installIfNecessary;
-(void)configureForHighlightMode;
-(void)hideSelectionCommands;
-(void)showSelectionCommands;
-(void)configureForSelectionMode;
-(void)cancelDelayedCommandRequests;
-(void)updateBaseIsStartWithDocumentPoint:(CGPoint)arg1 ;
-(UITextRangeView *)rangeView;
-(void)updateSelectionDots;
-(void)showSelectionCommandsAfterDelay:(double)arg1 ;
-(char)selectionCommandsShowing;
-(void)showReplacementsWithGenerator:(id)arg1 forDictation:(char)arg2 afterDelay:(double)arg3 ;
-(CGRect)selectionBoundingBox;
-(void)textSelectionViewActivated:(id)arg1 ;
-(void)selectionWillScroll:(id)arg1 ;
-(void)selectionDidScroll:(id)arg1 ;
-(void)scaleWillChange:(id)arg1 ;
-(void)scaleDidChange:(id)arg1 ;
-(void)inputViewWillAnimate;
-(void)inputViewDidAnimate;
-(void)willRotate:(id)arg1 ;
-(void)didRotate:(id)arg1 ;
-(void)windowDidResignOrBecomeKey;
-(void)inputViewWillMove:(id)arg1 ;
-(void)inputViewDidMove;
-(void)viewAnimate:(id)arg1 ;
-(void)inputModeDidChange:(id)arg1 ;
-(void)appearOrFadeIfNecessary;
-(void)deferredUpdateSelectionCommands;
-(char)affectedByScrollerNotification:(id)arg1 ;
-(void)showCalloutBarAfterDelay:(double)arg1 ;
-(void)hideSelectionCommandsAfterDelay:(double)arg1 ;
-(void)inputViewWillChange;
-(void)inputViewDidChange;
-(char)shouldBeVisible;
-(void)clearCaret;
-(void)clearCaretBlinkTimer;
-(void)clearRange;
-(UIView *)caretView;
-(void)showCaret:(int)arg1 ;
-(void)touchCaretBlinkTimer;
-(void)updateSelectionRectsIfNeeded;
-(void)showCommandsWithReplacements:(id)arg1 ;
-(CGRect)clippedTargetRect:(CGRect)arg1 ;
-(char)updateCalloutBarRects:(id)arg1 effectsWindow:(id)arg2 ;
-(void)setReplacements:(NSArray *)arg1 ;
-(void)calculateAndShowReplacements:(id)arg1 ;
-(void)hideCaret:(int)arg1 ;
-(void)caretBlinkTimerFired:(id)arg1 ;
-(void)updateSelectionCommands;
-(void)prepareForMagnification;
-(void)doneMagnifying;
-(void)configureForReplacementMode;
@end

