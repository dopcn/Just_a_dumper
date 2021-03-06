//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSString, NSURLRequest, NSURLSession;

@interface SSBDContentSession : NSObject
{
    int _eventId;
    int _retryCount;
    int _requestType;
    int _updateEvent;
    NSURLSession *_networkSess;
    NSString *_server;
    NSData *_multFactor;
    NSString *_strAk;
    NSString *_tokenString;
    NSString *_eventString;
    NSString *_deprecatedString;
    NSString *_tmpXDevVal;
    NSURLRequest *_urlRequest;
}

@property(retain) NSURLRequest *urlRequest; // @synthesize urlRequest=_urlRequest;
@property int updateEvent; // @synthesize updateEvent=_updateEvent;
@property(retain) NSString *tmpXDevVal; // @synthesize tmpXDevVal=_tmpXDevVal;
@property(retain) NSString *deprecatedString; // @synthesize deprecatedString=_deprecatedString;
@property(retain) NSString *eventString; // @synthesize eventString=_eventString;
@property(retain) NSString *tokenString; // @synthesize tokenString=_tokenString;
@property(retain) NSString *strAk; // @synthesize strAk=_strAk;
@property(retain) NSData *multFactor; // @synthesize multFactor=_multFactor;
@property(retain) NSString *server; // @synthesize server=_server;
@property(retain) NSURLSession *networkSess; // @synthesize networkSess=_networkSess;
@property int requestType; // @synthesize requestType=_requestType;
@property int retryCount; // @synthesize retryCount=_retryCount;
@property int eventId; // @synthesize eventId=_eventId;
- (void).cxx_destruct;
- (id)sndReqResults:(id)arg1;
- (id)checkZipSuccess:(id)arg1 Skey:(id)arg2;
- (id)initWithRequestType:(int)arg1;
- (id)init;
- (id)getSameRequest;
- (void)initLocalString;
- (id)getHostAddrOnReqType;
- (void)fireV1ReqWithBlock:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)prepareReqNoDict;
- (void)fireV2ReqWithBlock:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)RespReceive:(id)arg1;
- (id)doReqWithDict:(id)arg1;
- (id)makeCommonToken:(id)arg1;

@end

