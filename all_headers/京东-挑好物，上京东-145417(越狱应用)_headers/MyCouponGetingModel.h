//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDCoreCouponBaseModel.h"

@class NSString;

@interface MyCouponGetingModel : JDCoreCouponBaseModel
{
    NSString *_roleId;
    NSString *_key;
    NSString *_category;
    NSString *_limit;
}

@property(copy, nonatomic) NSString *limit; // @synthesize limit=_limit;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) NSString *roleId; // @synthesize roleId=_roleId;
- (void).cxx_destruct;
- (id)description;
- (void)setDataWithDic:(id)arg1;
- (void)dealloc;

@end

