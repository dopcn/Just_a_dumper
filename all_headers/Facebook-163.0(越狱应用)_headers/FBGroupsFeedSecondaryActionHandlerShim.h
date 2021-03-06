//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBFeedSecondaryActionHandler-Protocol.h"

@class NSString;
@protocol FBFeedSecondaryActionHandler;

@interface FBGroupsFeedSecondaryActionHandlerShim : NSObject <FBFeedSecondaryActionHandler>
{
    struct mutex _mutex;
    NSObject<FBFeedSecondaryActionHandler> *_instance;
    const char *_instanceClassName;
    CDUnknownBlockType _filterBlock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct FBFeedSecondaryActionHandlerActions)actionsForFeedUnit:(id)arg1 element:(id)arg2 trackingCodes:(id)arg3 context:(id)arg4;
- (id)initWithFilterBlock:(CDUnknownBlockType)arg1 className:(const char *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *handlerName;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

