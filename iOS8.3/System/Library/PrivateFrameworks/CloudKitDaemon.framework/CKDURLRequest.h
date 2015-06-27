/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:05:04 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <CloudKitDaemon/CKDURLSessionTaskDelegate.h>
#import <CloudKitDaemon/CKDProtobufMessageSigningDelegate.h>
#import <CloudKitDaemon/CKDFlowControllable.h>

@protocol CKDAccountInfoProvider, CKDResponseBodyParser;
@class NSOperationQueue, NSString, NSMutableDictionary, NSMutableArray, NSData, CKDProtobufStreamWriter, NSMutableData, NSDictionary, CKTimeLogger, CKDClientContext, CKDProtocolTranslator, NSArray, NSError, NSURLSessionConfiguration, NSURLSessionDataTask, NSURLRequest, NSHTTPURLResponse, NSFileHandle, NSDate, NSInputStream, NSURL;

@interface CKDURLRequest : NSObject <CKDURLSessionTaskDelegate, CKDProtobufMessageSigningDelegate, CKDFlowControllable> {

	id<CKDAccountInfoProvider> _accountInfoProvider;
	double _timeoutInterval;
	int _responseStatusCode;
	NSString* _requestUUID;
	char _didSendRequest;
	char _didFinishLoading;
	char _finished;
	char _didRetryAuth;
	char _didRetrySignature;
	id<CKDResponseBodyParser> _responseBodyParser;
	char _allowAutomaticRedirects;
	/*^block*/id _requestProgressBlock;
	/*^block*/id _responseProgressBlock;
	/*^block*/id _completionBlock;
	NSMutableDictionary* _overriddenHeaders;
	NSMutableArray* _redirectHistory;
	NSData* _fakeResponseData;
	char _haveParsedFakeResponseData;
	CKDProtobufStreamWriter* _streamWriter;
	CC_SHA256state_st _mescalTxSignature;
	CC_SHA256state_st _mescalRxSignature;
	NSMutableData* _receivedMescalData;
	char _usesBackgroundSession;
	char _allowsCellularAccess;
	char _allowsPowerNapScheduling;
	char _cancelled;
	char _haveCachedServerType;
	char _haveCachedPartitionType;
	NSDictionary* _requestProperties;
	CKTimeLogger* _timeLogger;
	CKDClientContext* _context;
	int _databaseScope;
	CKDProtocolTranslator* _translator;
	NSString* _sourceApplicationBundleIdentifier;
	NSString* _sourceApplicationSecondaryIdentifier;
	NSArray* _requestOperations;
	NSString* _flowControlKey;
	NSString* _hardwareIDOverride;
	NSError* _error;
	NSOperationQueue* _delegateQueue;
	NSURLSessionConfiguration* _sessionConfiguration;
	NSURLSessionDataTask* _urlSessionTask;
	NSURLRequest* _request;
	NSHTTPURLResponse* _response;
	NSFileHandle* _responseFileHandle;
	NSFileHandle* _requestFileHandle;
	NSFileHandle* _binaryResponseFileHandle;
	NSFileHandle* _binaryRequestFileHandle;
	NSString* _responseLogFilePath;
	NSString* _requestLogFilePath;
	NSString* _binaryResponseLogFilePath;
	NSString* _binaryRequestLogFilePath;
	NSString* _deviceID;
	unsigned _numDownloadedElements;
	int _cachedServerType;
	int _cachedPartitionType;
	NSDate* _dateRequestWentOut;

}

@property (nonatomic,retain) CKTimeLogger * timeLogger;                                    //@synthesize timeLogger=_timeLogger - In the implementation block
@property (nonatomic,retain) id<CKDAccountInfoProvider> accountInfoProvider;               //@synthesize accountInfoProvider=_accountInfoProvider - In the implementation block
@property (assign,nonatomic) double timeoutInterval;                                       //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (nonatomic,retain) CKDClientContext * context;                                   //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) int databaseScope;                                            //@synthesize databaseScope=_databaseScope - In the implementation block
@property (nonatomic,retain) CKDProtocolTranslator * translator;                           //@synthesize translator=_translator - In the implementation block
@property (assign,nonatomic) char allowAutomaticRedirects;                                 //@synthesize allowAutomaticRedirects=_allowAutomaticRedirects - In the implementation block
@property (nonatomic,retain) NSDictionary * requestProperties;                             //@synthesize requestProperties=_requestProperties - In the implementation block
@property (assign,nonatomic) char usesBackgroundSession;                                   //@synthesize usesBackgroundSession=_usesBackgroundSession - In the implementation block
@property (assign,nonatomic) char allowsCellularAccess;                                    //@synthesize allowsCellularAccess=_allowsCellularAccess - In the implementation block
@property (assign,nonatomic) char allowsPowerNapScheduling;                                //@synthesize allowsPowerNapScheduling=_allowsPowerNapScheduling - In the implementation block
@property (nonatomic,retain) NSString * sourceApplicationBundleIdentifier;                 //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * sourceApplicationSecondaryIdentifier;              //@synthesize sourceApplicationSecondaryIdentifier=_sourceApplicationSecondaryIdentifier - In the implementation block
@property (nonatomic,readonly) CKDProtobufStreamWriter * streamWriter;                     //@synthesize streamWriter=_streamWriter - In the implementation block
@property (nonatomic,copy) id requestProgressBlock;                                        //@synthesize requestProgressBlock=_requestProgressBlock - In the implementation block
@property (nonatomic,copy) id responseProgressBlock;                                       //@synthesize responseProgressBlock=_responseProgressBlock - In the implementation block
@property (nonatomic,copy) id completionBlock;                                             //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) id<CKDResponseBodyParser> responseBodyParser;                 //@synthesize responseBodyParser=_responseBodyParser - In the implementation block
@property (nonatomic,readonly) NSString * httpMethod; 
@property (nonatomic,readonly) NSDictionary * additionalHeaderValues; 
@property (nonatomic,readonly) char hasRequestBody; 
@property (nonatomic,readonly) NSInputStream * requestBodyStream; 
@property (nonatomic,readonly) NSArray * requestOperations;                                //@synthesize requestOperations=_requestOperations - In the implementation block
@property (nonatomic,readonly) NSArray * requestOperationClasses; 
@property (nonatomic,readonly) int isolationLevel; 
@property (nonatomic,readonly) int operationType; 
@property (nonatomic,readonly) NSString * path; 
@property (nonatomic,readonly) int serverType; 
@property (nonatomic,readonly) int partitionType; 
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) char shouldCompressBody; 
@property (nonatomic,readonly) NSString * acceptContentType; 
@property (nonatomic,readonly) NSString * requestContentType; 
@property (nonatomic,readonly) NSString * protobufOperationName; 
@property (nonatomic,retain) NSString * flowControlKey;                                    //@synthesize flowControlKey=_flowControlKey - In the implementation block
@property (nonatomic,readonly) NSString * sectionID; 
@property (nonatomic,retain) NSString * hardwareIDOverride;                                //@synthesize hardwareIDOverride=_hardwareIDOverride - In the implementation block
@property (readonly) char isFinished; 
@property (nonatomic,retain) NSError * error;                                              //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseHeaders; 
@property (nonatomic,readonly) int responseStatusCode;                                     //@synthesize responseStatusCode=_responseStatusCode - In the implementation block
@property (nonatomic,readonly) NSURL * lastRedirectURL; 
@property (nonatomic,readonly) NSString * requestUUID;                                     //@synthesize requestUUID=_requestUUID - In the implementation block
@property (nonatomic,retain) NSOperationQueue * delegateQueue;                             //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (retain) NSURLSessionConfiguration * sessionConfiguration;                       //@synthesize sessionConfiguration=_sessionConfiguration - In the implementation block
@property (retain) NSURLSessionDataTask * urlSessionTask;                                  //@synthesize urlSessionTask=_urlSessionTask - In the implementation block
@property (retain) NSURLRequest * request;                                                 //@synthesize request=_request - In the implementation block
@property (retain) NSHTTPURLResponse * response;                                           //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSFileHandle * responseFileHandle;                            //@synthesize responseFileHandle=_responseFileHandle - In the implementation block
@property (nonatomic,retain) NSFileHandle * requestFileHandle;                             //@synthesize requestFileHandle=_requestFileHandle - In the implementation block
@property (nonatomic,retain) NSFileHandle * binaryResponseFileHandle;                      //@synthesize binaryResponseFileHandle=_binaryResponseFileHandle - In the implementation block
@property (nonatomic,retain) NSFileHandle * binaryRequestFileHandle;                       //@synthesize binaryRequestFileHandle=_binaryRequestFileHandle - In the implementation block
@property (nonatomic,retain) NSString * responseLogFilePath;                               //@synthesize responseLogFilePath=_responseLogFilePath - In the implementation block
@property (nonatomic,retain) NSString * requestLogFilePath;                                //@synthesize requestLogFilePath=_requestLogFilePath - In the implementation block
@property (nonatomic,retain) NSString * binaryResponseLogFilePath;                         //@synthesize binaryResponseLogFilePath=_binaryResponseLogFilePath - In the implementation block
@property (nonatomic,retain) NSString * binaryRequestLogFilePath;                          //@synthesize binaryRequestLogFilePath=_binaryRequestLogFilePath - In the implementation block
@property (nonatomic,copy) NSString * deviceID;                                            //@synthesize deviceID=_deviceID - In the implementation block
@property (assign,nonatomic) unsigned numDownloadedElements;                               //@synthesize numDownloadedElements=_numDownloadedElements - In the implementation block
@property (getter=isCancelled) char cancelled;                                             //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,nonatomic) char haveCachedServerType;                                    //@synthesize haveCachedServerType=_haveCachedServerType - In the implementation block
@property (assign,nonatomic) char haveCachedPartitionType;                                 //@synthesize haveCachedPartitionType=_haveCachedPartitionType - In the implementation block
@property (assign,nonatomic) int cachedServerType;                                         //@synthesize cachedServerType=_cachedServerType - In the implementation block
@property (assign,nonatomic) int cachedPartitionType;                                      //@synthesize cachedPartitionType=_cachedPartitionType - In the implementation block
@property (retain) NSDate * dateRequestWentOut;                                            //@synthesize dateRequestWentOut=_dateRequestWentOut - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_logQueue;
+(id)_sharedCookieStorage;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(NSURL *)url;
-(NSURLRequest *)request;
-(NSString *)path;
-(CKDClientContext *)context;
-(void)setContext:(CKDClientContext *)arg1 ;
-(char)isCancelled;
-(void)setCancelled:(char)arg1 ;
-(NSHTTPURLResponse *)response;
-(char)isFinished;
-(char)usesBackgroundSession;
-(void)setUsesBackgroundSession:(char)arg1 ;
-(NSError *)error;
-(NSString *)deviceID;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)setSourceApplicationSecondaryIdentifier:(NSString *)arg1 ;
-(char)allowsCellularAccess;
-(void)setAllowsCellularAccess:(char)arg1 ;
-(void)setTimeoutInterval:(double)arg1 ;
-(NSString *)sourceApplicationBundleIdentifier;
-(NSString *)sourceApplicationSecondaryIdentifier;
-(NSString *)sectionID;
-(void)finishWithError:(id)arg1 ;
-(void)setDatabaseScope:(int)arg1 ;
-(CKTimeLogger *)timeLogger;
-(void)setAccountInfoProvider:(id<CKDAccountInfoProvider>)arg1 ;
-(void)performRequest;
-(void)setAllowsPowerNapScheduling:(char)arg1 ;
-(id)CKPropertiesDescription;
-(char)allowsPowerNapScheduling;
-(void)setTimeLogger:(CKTimeLogger *)arg1 ;
-(NSString *)requestUUID;
-(char)requiresConfiguration;
-(char)requiresDeviceID;
-(char)requiresSignature;
-(char)allowsAnonymousAccount;
-(char)allowsAuthedAccount;
-(int)serverType;
-(int)partitionType;
-(char)hasRequestBody;
-(void)requestDidParseJSONObject:(id)arg1 ;
-(NSString *)flowControlKey;
-(id)ckShortDescription;
-(void)inheritParentSectionID:(id)arg1 ;
-(void)setHardwareIDOverride:(NSString *)arg1 ;
-(void)setFlowControlKey:(NSString *)arg1 ;
-(int)databaseScope;
-(char)requiresTokenRegistration;
-(void)_tearDownStreamWriter;
-(NSURLSessionDataTask *)urlSessionTask;
-(NSURLSessionConfiguration *)sessionConfiguration;
-(void)_makeTrafficFileHandleWithPrefix:(id)arg1 outPath:(id*)arg2 outHandle:(id*)arg3 ;
-(void)setResponseLogFilePath:(NSString *)arg1 ;
-(void)setRequestLogFilePath:(NSString *)arg1 ;
-(void)setBinaryResponseLogFilePath:(NSString *)arg1 ;
-(void)setBinaryRequestLogFilePath:(NSString *)arg1 ;
-(id)_requestFileHandle;
-(NSString *)httpMethod;
-(id)_responseFileHandle;
-(id<CKDAccountInfoProvider>)accountInfoProvider;
-(NSString *)requestLogFilePath;
-(NSString *)binaryRequestLogFilePath;
-(NSString *)responseLogFilePath;
-(NSString *)binaryResponseLogFilePath;
-(void)setRequestFileHandle:(NSFileHandle *)arg1 ;
-(void)setResponseFileHandle:(NSFileHandle *)arg1 ;
-(void)setBinaryRequestFileHandle:(NSFileHandle *)arg1 ;
-(void)setBinaryResponseFileHandle:(NSFileHandle *)arg1 ;
-(NSArray *)requestOperations;
-(char)includeContainerInfo;
-(NSString *)hardwareIDOverride;
-(int)isolationLevel;
-(void)_addRequestHeadersToTransmittedSignature:(id)arg1 ;
-(id)operationRequestWithType:(int)arg1 ;
-(CKDProtobufStreamWriter *)streamWriter;
-(void)tearDownResourcesAndReleaseTheZoneLocks;
-(void)_handleAuthFailure;
-(void)_handleMescalSignatureResponse:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(Class)expectedResponseClass;
-(void)_logParsedObject:(id)arg1 ;
-(void)updateSignatureWithReceivedBytes:(id)arg1 ;
-(int)_handleServerProtobufResult:(id)arg1 rawData:(id)arg2 ;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(int)_handleServerJSONResult:(id)arg1 ;
-(int)_handlePlistResult:(id)arg1 ;
-(void)requestDidParsePlistObject:(id)arg1 ;
-(void)requestDidParsePlaintextObject:(id)arg1 ;
-(NSArray *)requestOperationClasses;
-(NSString *)protobufOperationName;
-(char)shouldCompressBody;
-(id)_binaryRequestFileHandle;
-(void)_setupPublicDatabaseURL;
-(char)requiresAppPartitionURL;
-(void)_setupConfiguration;
-(void)_setupMescal;
-(void)_fetchContainerScopedUserID;
-(void)setTranslator:(CKDProtocolTranslator *)arg1 ;
-(CKDProtocolTranslator *)translator;
-(void)_fetchDeviceID;
-(void)setDeviceID:(NSString *)arg1 ;
-(void)_registerPushTokens;
-(void)_acquireZoneGates;
-(void)_performRequest;
-(id)zoneIDsToLock;
-(char)validate:(id*)arg1 ;
-(double)timeoutInterval;
-(unsigned)cachePolicy;
-(NSString *)requestContentType;
-(NSString *)acceptContentType;
-(id)_versionHeader;
-(NSDictionary *)additionalHeaderValues;
-(void)_logRequest:(id)arg1 ;
-(void)_loadRequest:(id)arg1 ;
-(void)tearDownResources;
-(void)setResponseBodyParser:(id<CKDResponseBodyParser>)arg1 ;
-(void)_populateURLSessionConfiguration;
-(void)setUrlSessionTask:(NSURLSessionDataTask *)arg1 ;
-(void)setDateRequestWentOut:(NSDate *)arg1 ;
-(void)setSessionConfiguration:(NSURLSessionConfiguration *)arg1 ;
-(char)markAsFinished;
-(void)reportStatusWithError:(id)arg1 ;
-(void)_flushRequestResponseLogs;
-(void)setRequestProgressBlock:(id)arg1 ;
-(void)setResponseProgressBlock:(id)arg1 ;
-(NSDate *)dateRequestWentOut;
-(void)setResponse:(NSHTTPURLResponse *)arg1 ;
-(char)allowAutomaticRedirects;
-(NSInputStream *)requestBodyStream;
-(void)_addResponseHeadersToReceivedSignature:(id)arg1 ;
-(void)_logHTTPResponse:(id)arg1 ;
-(id)responseProgressBlock;
-(id<CKDResponseBodyParser>)responseBodyParser;
-(id)defaultParserForContentType:(id)arg1 ;
-(id)_binaryResponseFileHandle;
-(id)requestProgressBlock;
-(int)responseStatusCode;
-(id)_errorFromHTTPResponse:(id)arg1 ;
-(unsigned)numDownloadedElements;
-(void)updateSignatureWithTransmittedBytes:(id)arg1 ;
-(void)URLSessionTask:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSessionTask:(id)arg1 needNewBodyStream:(/*^block*/id)arg2 ;
-(void)URLSessionTask:(id)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4 ;
-(void)URLSessionTask:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSessionDataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLSessionDataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(id)URLSessionTask:(id)arg1 requestForEstablishedConnection:(id)arg2 ;
-(void)URLSessionTaskIsWaitingForConnection:(id)arg1 ;
-(void)URLSessionTask:(id)arg1 conditionalRequirementsChanged:(char)arg2 ;
-(NSOperationQueue *)delegateQueue;
-(void)generateSignature:(/*^block*/id)arg1 ;
-(char)shouldLogResponseBody;
-(char)expectsSingleObject;
-(void)overrideRequestHeader:(id)arg1 withValue:(id)arg2 ;
-(void)_handleBadPasswordResponse;
-(NSDictionary *)responseHeaders;
-(NSURL *)lastRedirectURL;
-(void)setAllowAutomaticRedirects:(char)arg1 ;
-(NSDictionary *)requestProperties;
-(void)setRequestProperties:(NSDictionary *)arg1 ;
-(void)setDelegateQueue:(NSOperationQueue *)arg1 ;
-(NSFileHandle *)responseFileHandle;
-(NSFileHandle *)requestFileHandle;
-(NSFileHandle *)binaryResponseFileHandle;
-(NSFileHandle *)binaryRequestFileHandle;
-(void)setNumDownloadedElements:(unsigned)arg1 ;
-(char)haveCachedServerType;
-(void)setHaveCachedServerType:(char)arg1 ;
-(char)haveCachedPartitionType;
-(void)setHaveCachedPartitionType:(char)arg1 ;
-(int)cachedServerType;
-(void)setCachedServerType:(int)arg1 ;
-(int)cachedPartitionType;
-(void)setCachedPartitionType:(int)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(int)operationType;
-(void)setRequest:(NSURLRequest *)arg1 ;
@end
