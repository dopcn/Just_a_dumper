//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ASIHTTPRequest, NSDate, NSMutableArray, NSMutableData, NSString;

@interface CgiChecking : NSObject
{
    _Bool _isNetOk;
    _Bool _canUseResult;
    NSString *_ip;
    NSString *_host;
    NSMutableData *_receiveData;
    ASIHTTPRequest *_request;
    NSMutableArray *_blockArray;
    NSDate *_lastChenkTime;
}

@property(retain, nonatomic) NSDate *lastChenkTime; // @synthesize lastChenkTime=_lastChenkTime;
@property(nonatomic) _Bool canUseResult; // @synthesize canUseResult=_canUseResult;
@property(nonatomic) _Bool isNetOk; // @synthesize isNetOk=_isNetOk;
@property(retain, nonatomic) NSMutableArray *blockArray; // @synthesize blockArray=_blockArray;
@property(retain, nonatomic) ASIHTTPRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSMutableData *receiveData; // @synthesize receiveData=_receiveData;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
@property(retain, nonatomic) NSString *ip; // @synthesize ip=_ip;
- (void).cxx_destruct;
- (_Bool)isConnectionTestDataMatch:(id)arg1;
- (void)tryToCheckMedia;
- (void)callBackWithResult:(_Bool)arg1;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)request:(id)arg1 didReceiveData:(id)arg2;
- (void)request:(id)arg1 didReceiveResponseHeaders:(id)arg2;
- (void)requestStarted:(id)arg1;
- (id)createASIRequest:(id)arg1;
- (_Bool)cgiUseHttps;
- (id)requetUrl:(id)arg1;
- (void)requestTimeOut;
- (void)beginToCheck;
- (void)clearRequest;
- (id)initWithIp:(id)arg1 host:(id)arg2;
- (void)dealloc;

@end

