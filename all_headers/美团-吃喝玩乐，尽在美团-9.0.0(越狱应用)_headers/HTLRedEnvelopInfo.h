//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKDomainObject.h"

@class NSNumber, NSString;

@interface HTLRedEnvelopInfo : SAKDomainObject
{
    NSNumber *_applyId;
    NSNumber *_value;
    NSString *_title;
    NSString *_minMoney;
    NSString *_redirectUrl;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *redirectUrl; // @synthesize redirectUrl=_redirectUrl;
@property(retain, nonatomic) NSString *minMoney; // @synthesize minMoney=_minMoney;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSNumber *value; // @synthesize value=_value;
@property(retain, nonatomic) NSNumber *applyId; // @synthesize applyId=_applyId;
- (void).cxx_destruct;

@end

