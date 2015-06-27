/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:11:21 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class MSASStateMachine;


@protocol MSASStateMachineDelegate
@property (assign,nonatomic) MSASStateMachine * MSASCounterpartInstance; 
@required
-(void)MSASStateMachine:(id)arg1 didFinishSendingInvitationByPhone:(id)arg2 toOwnedAlbum:(id)arg3 info:(id)arg4 error:(id)arg5;
-(void)MSASStateMachineDidStart:(id)arg1;
-(void)MSASStateMachineDidFindGlobalResetSync:(id)arg1 info:(id)arg2;
-(void)MSASStateMachine:(id)arg1 didFindSyncedKeyValueChangesForAlbumGUIDS:(id)arg2 albumChanges:(id)arg3 accessControlChangesForAlbumGUIDS:(id)arg4 info:(id)arg5;
-(void)MSASStateMachine:(id)arg1 didFindAlbumChanges:(id)arg2 info:(id)arg3;
-(void)MSASStateMachine:(id)arg1 didFindAccessControlChangesForAlbumGUIDS:(id)arg2 info:(id)arg3;
-(void)MSASStateMachine:(id)arg1 didFindSyncedKeyValueChangesForAlbumGUIDS:(id)arg2 info:(id)arg3;
-(void)MSASStateMachine:(id)arg1 didFinishCheckingForChangesInfo:(id)arg2 error:(id)arg3;
-(void)MSASStateMachine:(id)arg1 willCheckForUpdatesInAlbum:(id)arg2 info:(id)arg3;
-(void)MSASStateMachine:(id)arg1 didFindAssetCollectionChanges:(id)arg2 forAlbum:(id)arg3 info:(id)arg4;
-(void)MSASStateMachine:(id)arg1 didFindChangesInAlbum:(id)arg2 info:(id)arg3 error:(id)arg4;
-(void)MSASStateMachine:(id)arg1 didFinishCheckingForUpdatesInAlbum:(id)arg2 info:(id)arg3 error:(id)arg4;
-(void)MSASStateMachine:(id)arg1 didFinishCheckingForUpdatesInAlbums:(id)arg2 info:(id)arg3;
-(void)MSASStateMachine:(id)arg1 didFindNewURLString:(id)arg2 forAlbumWithGUID:(id)arg3 info:(id)arg4;
-(void)MSASStateMachine:(id)arg1 didFinishGettingAccessControls:(id)arg2 forAlbum:(id)arg3 info:(id)arg4 error:(id)arg5;
-(void)MSASStateMachine:(id)arg1 willUpdateAssetCollections:(id)arg2 inAlbum:(id)arg3 info:(id)arg4;
-(void)MSASStateMachine:(id)arg1 didFinishUpdatingAssetCollections:(id)arg2 inAlbum:(id)arg3 info:(id)arg4 error:(id)arg5;
-(void)MSASStateMachine:(id)arg1 didFinishSubscribingToAlbum:(id)arg2 info:(id)arg3 error:(id)arg4;
-(void)MSASStateMachine:(id)arg1 didFinishUnsubscribingFromAlbum:(id)arg2 info:(id)arg3 error:(id)arg4;
-(void)MSASStateMachine:(id)arg1 didFindCommentChanges:(id)arg2 inAssetCollectionWithGUID:(id)arg3 inAlbumWithGUID:(id)arg4 info:(id)arg5;
-(void)MSASStateMachine:(id)arg1 didFinishCheckingForCommentChangesInAssetCollectionWithGUID:(id)arg2 largestCommentID:(int)arg3 info:(id)arg4 error:(id)arg5;
-(void)MSASStateMachine:(id)arg1 willCheckForAlbumSyncedStateChangesInAlbum:(id)arg2 info:(id)arg3;
-(void)MSASStateMachine:(id)arg1 didFindAssetCollectionSyncedState:(id)arg2 forAssetCollectionGUID:(id)arg3 inAlbum:(id)arg4 assetCollectionStateCtag:(id)arg5 info:(id)arg6;
-(void)MSASStateMachine:(id)arg1 didFindAlbumSyncedState:(id)arg2 forAlbum:(id)arg3 info:(id)arg4;
-(void)MSASStateMachine:(id)arg1 didFinishCheckingForAlbumSyncedStateChangesInAlbum:(id)arg2 info:(id)arg3 error:(id)arg4 newAlbumStateCtag:(id)arg5;
-(void)MSASStateMachine:(id)arg1 didFinishSettingSyncedStateForAlbum:(id)arg2 info:(id)arg3 error:(id)arg4 newAlbumStateCtag:(id)arg5;
-(void)MSASStateMachine:(id)arg1 didFinishSettingSyncedStateForAssetCollection:(id)arg2 inAlbum:(id)arg3 assetStateCtag:(id)arg4 info:(id)arg5 error:(id)arg6;
-(id)MSASStateMachineDidRequestAlbumStateCtagForAlbumWithGUID:(id)arg1 info:(id)arg2;
-(id)MSASStateMachineDidRequestAlbumURLStringForAlbumWithGUID:(id)arg1 info:(id)arg2;
-(id)MSASStateMachineDidRequestAlbumWithGUID:(id)arg1;
-(id)MSASStateMachineDidRequestAssetCollectionStateCtagForAssetCollectionWithGUID:(id)arg1 info:(id)arg2;
-(char)MSASStateMachine:(id)arg1 didQueryIsAssetCollectionWithGUIDInModel:(id)arg2;
-(void)MSASStateMachine:(id)arg1 didFinishEnqueueingAssetsForDownload:(id)arg2 inAlbumWithGUID:(id)arg3;
-(void)MSASStateMachine:(id)arg1 didFinishRetrievingAsset:(id)arg2 inAlbum:(id)arg3 error:(id)arg4;
-(void)MSASStateMachine:(id)arg1 didFinishDeletingAlbum:(id)arg2 info:(id)arg3 error:(id)arg4;
-(void)MSASStateMachine:(id)arg1 didFinishDeletingAssetCollection:(id)arg2 inAlbum:(id)arg3 info:(id)arg4 error:(id)arg5;
-(void)MSASStateMachine:(id)arg1 didFinishDeletingComment:(id)arg2 inAssetCollection:(id)arg3 inAlbum:(id)arg4 info:(id)arg5 error:(id)arg6;
-(void)MSASStateMachine:(id)arg1 didFinishCreatingAlbum:(id)arg2 info:(id)arg3 error:(id)arg4;
-(void)MSASStateMachine:(id)arg1 didFinishUpdatingAlbum:(id)arg2 info:(id)arg3 error:(id)arg4;
-(void)MSASStateMachine:(id)arg1 didRequestAssetsForAddingAssetCollections:(id)arg2 inAlbum:(id)arg3 specifications:(id)arg4 info:(id)arg5;
-(void)MSASStateMachine:(id)arg1 didFinishAddingAssetCollection:(id)arg2 toAlbum:(id)arg3 info:(id)arg4 error:(id)arg5;
-(void)MSASStateMachine:(id)arg1 didFinishAddingSharingRelationships:(id)arg2 toOwnedAlbum:(id)arg3 info:(id)arg4 error:(id)arg5;
-(void)MSASStateMachine:(id)arg1 didFinishRemovingSharingRelationship:(id)arg2 fromOwnedAlbum:(id)arg3 info:(id)arg4 error:(id)arg5;
-(void)MSASStateMachine:(id)arg1 didFinishAddingComment:(id)arg2 toAssetCollection:(id)arg3 inAlbum:(id)arg4 info:(id)arg5 error:(id)arg6;
-(void)MSASStateMachine:(id)arg1 didFireScheduledEvent:(id)arg2 forAssetCollectionGUID:(id)arg3 albumGUID:(id)arg4 info:(id)arg5;
-(void)MSASStateMachineDidUpdateServerCommunicationBackoffDate:(id)arg1;
-(MSASStateMachine *)MSASCounterpartInstance;
-(void)setMSASCounterpartInstance:(id)arg1;

@end
