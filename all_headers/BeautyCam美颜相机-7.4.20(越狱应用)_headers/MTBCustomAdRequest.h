//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MTBSimpleRequest-Protocol.h"

@class NSString;
@protocol MTBSplashAdViewDelegate;

@interface MTBCustomAdRequest : NSObject <MTBSimpleRequest>
{
    _Bool _cancelled;
    NSString *_containingPageID;
    NSString *_reportTrackID;
    NSString *_adSourceID;
    NSString *_meituPositionID;
}

@property(retain, nonatomic) NSString *meituPositionID; // @synthesize meituPositionID=_meituPositionID;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(retain, nonatomic) NSString *adSourceID; // @synthesize adSourceID=_adSourceID;
@property(retain, nonatomic) NSString *reportTrackID; // @synthesize reportTrackID=_reportTrackID;
@property(retain, nonatomic) NSString *containingPageID; // @synthesize containingPageID=_containingPageID;
- (void).cxx_destruct;
- (id)loadDataWithDisplayInfo:(id)arg1 asPreloading:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)checkCacheWithDisplayInfo:(id *)arg1;
- (void)cancelLoading;
@property(readonly, nonatomic) unsigned long long internalRequestType;
@property(readonly, nonatomic) _Bool isSpecificAdSourceRequest;
@property(readonly, nonatomic) NSString *adNetworkID;
- (id)initWithPositionID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <MTBSplashAdViewDelegate> splashAdViewDelegate;
@property(readonly) Class superclass;

@end

