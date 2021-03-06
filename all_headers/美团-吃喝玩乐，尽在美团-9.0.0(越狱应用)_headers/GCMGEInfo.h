//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString, SAKStatisticsPageBusinessValue, UIViewController;

@interface GCMGEInfo : NSObject <NSCopying>
{
    _Bool _useOutdated;
    int _val_elementIndex;
    NSString *_val_category;
    NSString *_val_bid;
    NSString *_val_cid;
    NSString *_val_elementID;
    SAKStatisticsPageBusinessValue *_val_eventValue;
    UIViewController *_val_fromViewController;
    NSMutableDictionary *_val_labs_dict;
    NSMutableDictionary *_val_customs_dict;
}

+ (id)gcMGEInfoWithCategory:(id)arg1 bid:(id)arg2 elementID:(id)arg3 labs:(id)arg4 elementIndex:(int)arg5 eventValue:(id)arg6 cid:(id)arg7;
+ (id)gcMGEInfoWithCategory:(id)arg1 bid:(id)arg2 elementID:(id)arg3 labs:(id)arg4 elementIndex:(int)arg5 eventValue:(id)arg6;
+ (id)gcMGEInfoWithCategory:(id)arg1 bid:(id)arg2 elementID:(id)arg3 labs:(id)arg4;
+ (CDUnknownBlockType)category;
+ (id)gcMGEInfoWithPicassoMgeInfoDict:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *val_customs_dict; // @synthesize val_customs_dict=_val_customs_dict;
@property(retain, nonatomic) NSMutableDictionary *val_labs_dict; // @synthesize val_labs_dict=_val_labs_dict;
@property(nonatomic) _Bool useOutdated; // @synthesize useOutdated=_useOutdated;
@property(nonatomic) __weak UIViewController *val_fromViewController; // @synthesize val_fromViewController=_val_fromViewController;
@property(copy, nonatomic) SAKStatisticsPageBusinessValue *val_eventValue; // @synthesize val_eventValue=_val_eventValue;
@property(nonatomic) int val_elementIndex; // @synthesize val_elementIndex=_val_elementIndex;
@property(copy, nonatomic) NSString *val_elementID; // @synthesize val_elementID=_val_elementID;
@property(copy, nonatomic) NSString *val_cid; // @synthesize val_cid=_val_cid;
@property(copy, nonatomic) NSString *val_bid; // @synthesize val_bid=_val_bid;
@property(copy, nonatomic) NSString *val_category; // @synthesize val_category=_val_category;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSDictionary *val_customs;
@property(readonly, copy, nonatomic) NSDictionary *val_labs;
- (CDUnknownBlockType)eventValue;
- (CDUnknownBlockType)elementIndex;
- (CDUnknownBlockType)elementID;
- (CDUnknownBlockType)customs;
- (CDUnknownBlockType)labs;
- (CDUnknownBlockType)fromViewController;
- (CDUnknownBlockType)custom;
- (CDUnknownBlockType)lab;
- (CDUnknownBlockType)cid;
- (CDUnknownBlockType)bid;

@end

