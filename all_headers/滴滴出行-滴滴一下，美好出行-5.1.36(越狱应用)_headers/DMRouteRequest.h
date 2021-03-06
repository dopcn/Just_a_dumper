//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ONESBaseSearchDelegate-Protocol.h"

@class DMRouteReqParam, NSError, NSString, ONESBaseRouteResult, ONESBaseSearch;

@interface DMRouteRequest : NSObject <ONESBaseSearchDelegate>
{
    ONESBaseSearch *_routeSearch;
    ONESBaseRouteResult *_routeResult;
    DMRouteReqParam *_reqParam;
    NSError *_error;
    CDUnknownBlockType _resultBlock;
    CDUnknownBlockType _failBlock;
    CDUnknownBlockType _canceledBlock;
}

+ (id)createSearch:(int)arg1;
@property(copy, nonatomic) CDUnknownBlockType canceledBlock; // @synthesize canceledBlock=_canceledBlock;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) DMRouteReqParam *reqParam; // @synthesize reqParam=_reqParam;
@property(retain, nonatomic) ONESBaseRouteResult *routeResult; // @synthesize routeResult=_routeResult;
@property(retain, nonatomic) ONESBaseSearch *routeSearch; // @synthesize routeSearch=_routeSearch;
- (void).cxx_destruct;
- (void)notifyCancelNavRouteSearchRequestResult:(_Bool)arg1;
- (void)notifyNavRouteSearchDidFailWithError:(id)arg1;
- (void)notifyNavRouteSearchResult:(id)arg1;
- (void)dealloc;
- (void)cleanRequest;
- (void)cancelRequset;
- (void)requestWithParam:(id)arg1 resultBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3 canceledBlock:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

