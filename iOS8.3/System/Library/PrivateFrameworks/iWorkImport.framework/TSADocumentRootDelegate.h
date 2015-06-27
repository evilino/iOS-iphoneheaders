/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:42:07 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, TSKCollaborationState;


@protocol TSADocumentRootDelegate <TSKAccessControllerDelegate>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * defaultDraftName; 
@property (nonatomic,readonly) NSString * documentCachePath; 
@property (nonatomic,readonly) TSKCollaborationState * collaborationState; 
@optional
-(void)invalidateRestorableState;
-(NSString *)documentCachePath;
-(NSString *)defaultDraftName;
-(TSKCollaborationState *)collaborationState;
-(void)didAddObserverForICloudTeardown:(id)arg1;
-(void)willRemoveICloudTeardownObserver:(id)arg1;
-(void)continueActivityUsingBlock:(/*^block*/id)arg1;
-(id)collaborationPasswordProvider;
-(void)documentRoot:(id)arg1 didReceiveDocumentStatusNotification:(id)arg2;

@required
-(NSString *)name;

@end
