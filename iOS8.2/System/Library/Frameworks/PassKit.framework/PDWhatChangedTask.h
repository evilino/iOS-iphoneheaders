/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:59 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <passd/PDNetworkTask.h>
#import <passd/PDNetworkTaskManagerProtocol.h>

@class NSMutableArray, NSString, NSSet;

@interface PDWhatChangedTask : PDNetworkTask <PDNetworkTaskManagerProtocol> {

	NSMutableArray* _pendingTasks;
	NSMutableArray* _completedTasks;
	NSMutableArray* _activeTasks;
	char _gotUpdates;
	char _partiallyComplete;
	NSString* _passTypeID;

}

@property (nonatomic,retain) NSString * passTypeID;                  //@synthesize passTypeID=_passTypeID - In the implementation block
@property (nonatomic,retain,readonly) NSSet * subtasks; 
@property (assign,nonatomic) char partiallyComplete;                 //@synthesize partiallyComplete=_partiallyComplete - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskWithPassTypeID:(id)arg1 subtasks:(id)arg2 ;
-(void)performCancel;
-(void)task:(id)arg1 gotResult:(id)arg2 ;
-(void)taskSucceeded:(id)arg1 ;
-(void)taskFailed:(id)arg1 ;
-(void)task:(id)arg1 encounteredError:(id)arg2 ;
-(void)task:(id)arg1 encounteredWarnings:(id)arg2 ;
-(void)taskRequestedReauthentication:(id)arg1 ;
-(void)setPassTypeID:(NSString *)arg1 ;
-(NSString *)passTypeID;
-(char)coalescesWithTaskSubclass:(Class)arg1 ;
-(int)actionForInactiveTask:(id)arg1 ;
-(int)actionForActiveTask:(id)arg1 ;
-(void)taskChangedState:(id)arg1 ;
-(void)taskFailedForAuthentication:(id)arg1 ;
-(void)performStart:(char)arg1 ;
-(void)performReset;
-(char)gotUpdates;
-(NSSet *)subtasks;
-(id)_initWithPassTypeID:(id)arg1 subtasks:(id)arg2 ;
-(void)_addTask:(id)arg1 ;
-(char)_matchesTask:(id)arg1 ;
-(void)_updateForTaskDeactivation:(char)arg1 ;
-(char)partiallyComplete;
-(void)setPartiallyComplete:(char)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(void)_commonInit;
@end
