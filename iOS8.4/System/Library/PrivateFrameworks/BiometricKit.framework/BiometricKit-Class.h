/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:53 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BiometricKit/BiometricKit-Structs.h>
#import <BiometricKit/BiometricKitDelegateXpcProtocol.h>

@protocol BiometricKitDelegate;
@class BiometricKitXPCClient, BiometricKitStatistics, UIImage, NSString;

@interface BiometricKit : NSObject <BiometricKitDelegateXpcProtocol> {

	BiometricKitXPCClient* _xpcClient;
	int _enrollingMode;
	int _matchingMode;
	BiometricKitStatistics* _statistics;
	UIImage* _images[100];
	SCD_Struct_Bi1* _compSet;
	BOOL _showDebugImages;
	SCD_Struct_Bi3 _enrollImageSet;
	BOOL _isInternalInstall;
	BOOL _inUse;
	int _enrollProgressConfigRenderMode;
	int _renderMode;
	float _opacity;
	id<BiometricKitDelegate> _delegate;
	CGSize _enrollProgressConfigRenderViewSize;

}

@property (assign,nonatomic) id<BiometricKitDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign) BOOL inUse;                                                       //@synthesize inUse=_inUse - In the implementation block
@property (assign,nonatomic) int enrollProgressConfigRenderMode;                     //@synthesize enrollProgressConfigRenderMode=_enrollProgressConfigRenderMode - In the implementation block
@property (assign,nonatomic) CGSize enrollProgressConfigRenderViewSize;              //@synthesize enrollProgressConfigRenderViewSize=_enrollProgressConfigRenderViewSize - In the implementation block
@property (assign,nonatomic) int renderMode;                                         //@synthesize renderMode=_renderMode - In the implementation block
@property (assign,nonatomic) float opacity;                                          //@synthesize opacity=_opacity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)stringForProvisioningState:(int)arg1 ;
+(long long)getSensorPatchVersion;
+(void)preferencesSetBOOLValue:(BOOL)arg1 forKey:(const CFStringRef)arg2 ;
+(BOOL)preferencesGetBOOLValue:(const CFStringRef)arg1 ;
+(id)preferencesGetStringValue:(const CFStringRef)arg1 ;
+(id)manager;
-(id)getProtectedConfiguration;
-(void)appWillEnterForeground:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)setDelegate:(id<BiometricKitDelegate>)arg1 ;
-(id)init;
-(id<BiometricKitDelegate>)delegate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(void)appWillResignActive:(id)arg1 ;
-(void)matchResult:(id)arg1 withDictionary:(id)arg2 ;
-(void)templateUpdate:(id)arg1 withDictionary:(id)arg2 ;
-(int)enroll:(int)arg1 withAuthToken:(id)arg2 ;
-(int)matchIdentities:(id)arg1 ;
-(id)getIdentityFromUUID:(id)arg1 ;
-(int)resetEngine;
-(int)setProtectedConfiguration:(id)arg1 withAuthToken:(id)arg2 ;
-(long long)getProvisioningState;
-(int)registerDSID:(unsigned long long)arg1 withAuthToken:(id)arg2 ;
-(int)resetAppleConnectCounter;
-(int)registerStoreToken:(id)arg1 ;
-(int)getCountersignedStoreToken:(id*)arg1 ;
-(int)diagnostics:(int)arg1 withOptions:(id)arg2 passed:(BOOL*)arg3 withDetails:(id*)arg4 ;
-(int)setUserDSID:(unsigned long long)arg1 withAuthToken:(id)arg2 ;
-(long long)getSensorCalibrationStatus;
-(id)getCalibrationDataInfo;
-(id)pullCalibrationData;
-(id)pullCaptureBuffer;
-(void)setDebugImages:(BOOL)arg1 ;
-(id)getLogs:(BOOL)arg1 ;
-(int)enroll:(int)arg1 ;
-(void)appDidEnterBackground:(id)arg1 ;
-(id)imageFromRawImageData:(SCD_Struct_Bi7*)arg1 ;
-(id)imageFromBitmapData:(id)arg1 inRect:(CGRect)arg2 ;
-(void)pullDebugImageData:(BOOL)arg1 rotated:(BOOL)arg2 target:(SCD_Struct_Bi7*)arg3 ;
-(long long)getCalibrationDataState;
-(float)getModulationRatio;
-(long long)getCalBlobVersion;
-(id)createMatchInfo:(id)arg1 withTopology:(const SCD_Struct_Bi11*)arg2 withMatchImage:(SCD_Struct_Bi7*)arg3 ;
-(void)enrollProgressMessage:(unsigned)arg1 ;
-(id)getMatchPolicyInfo;
-(id)getTemplateInfo:(id)arg1 ;
-(void)timestampEvent:(unsigned long long)arg1 ;
-(id)pullDebugImage:(BOOL)arg1 rotated:(BOOL)arg2 ;
-(id)stringFromSensorConfiguration;
-(int)enrollProgressConfigRenderMode;
-(void)setEnrollProgressConfigRenderMode:(int)arg1 ;
-(CGSize)enrollProgressConfigRenderViewSize;
-(void)setEnrollProgressConfigRenderViewSize:(CGSize)arg1 ;
-(BOOL)isDelegate;
-(void)appDidBecomeActive:(id)arg1 ;
-(int)match:(id)arg1 ;
-(void)setInUse:(BOOL)arg1 ;
-(int)detectFingerWithOptions:(id)arg1 ;
-(void)enrollResult:(id)arg1 ;
-(void)statusMessage:(unsigned)arg1 ;
-(void)homeButtonPressed;
-(void)taskResumeStatus:(int)arg1 ;
-(BOOL)inUse;
-(void)setRenderMode:(int)arg1 ;
-(int)renderMode;
-(id)identities:(id)arg1 ;
-(long long)getMaxIdentityCount:(int)arg1 ;
-(int)removeIdentity:(id)arg1 ;
-(int)updateIdentity:(id)arg1 ;
-(int)match:(id)arg1 withOptions:(id)arg2 ;
-(long long)getBioLockoutState;
@end
