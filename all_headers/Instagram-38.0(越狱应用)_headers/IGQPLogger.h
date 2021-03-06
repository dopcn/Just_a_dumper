//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession, NSString;

@interface IGQPLogger : NSObject
{
    _Bool _seen;
    IGUserSession *_userSession;
    NSString *_promotionID;
    NSString *_qpSurfaceID;
}

@property(readonly, copy, nonatomic) NSString *qpSurfaceID; // @synthesize qpSurfaceID=_qpSurfaceID;
@property(readonly, copy, nonatomic) NSString *promotionID; // @synthesize promotionID=_promotionID;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) _Bool seen; // @synthesize seen=_seen;
- (void).cxx_destruct;
- (id)qpEventFromAction:(id)arg1 objectID:(id)arg2;
- (void)logForAction:(id)arg1 objectID:(id)arg2;
- (void)logDismiss;
- (void)logSecondaryActionClick;
- (void)logPrimaryActionClick;
- (void)logImpression;
- (id)initWithUserSession:(id)arg1 promotionID:(id)arg2 qpSurfaceID:(id)arg3;

@end

