//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CartoonReqDataStruct-Protocol.h"

@class NSString;

@interface CartoonGetUserCommentRequestData : NSObject <CartoonReqDataStruct>
{
    NSString *_uid;
    NSString *_st;
}

@property(copy, nonatomic) NSString *st; // @synthesize st=_st;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

