//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PriorityItemProtocol-Protocol.h"

@class NSString;
@protocol PriorityItemProtocol;

@interface GiftModel : NSObject <PriorityItemProtocol>
{
    id <PriorityItemProtocol> _delegate;
}

@property(copy, nonatomic) id <PriorityItemProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)comparePriorityObj1:(id)arg1 obj2:(id)arg2;
- (long long)priority;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

