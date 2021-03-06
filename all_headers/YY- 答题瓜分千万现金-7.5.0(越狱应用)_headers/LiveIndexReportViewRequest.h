//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IEntRequest-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface LiveIndexReportViewRequest : NSObject <IEntRequest>
{
    NSString *_imei;
    NSString *_biz;
    NSArray *_uids;
    NSNumber *_moduleId;
    long long _type;
}

+ (unsigned int)minType;
+ (unsigned int)maxType;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSNumber *moduleId; // @synthesize moduleId=_moduleId;
@property(retain, nonatomic) NSArray *uids; // @synthesize uids=_uids;
@property(retain, nonatomic) NSString *biz; // @synthesize biz=_biz;
@property(retain, nonatomic) NSString *imei; // @synthesize imei=_imei;
- (void).cxx_destruct;
- (id)marshall;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

