//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSRegularExpression;

@interface WVURLInterceptorRuleObj : NSObject
{
    _Bool _needDecode;
    int _target;
    int _ruleType;
    int _totalCount;
    NSRegularExpression *_pattern;
    NSArray *_indexInPattern;
    NSArray *_nameInRequest;
}

@property(nonatomic) _Bool needDecode; // @synthesize needDecode=_needDecode;
@property(retain, nonatomic) NSArray *nameInRequest; // @synthesize nameInRequest=_nameInRequest;
@property(retain, nonatomic) NSArray *indexInPattern; // @synthesize indexInPattern=_indexInPattern;
@property(nonatomic) int totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) int ruleType; // @synthesize ruleType=_ruleType;
@property(nonatomic) int target; // @synthesize target=_target;
@property(retain, nonatomic) NSRegularExpression *pattern; // @synthesize pattern=_pattern;
- (void).cxx_destruct;
- (_Bool)isValidate;

@end

