//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface VSAddCartActiveRecommBatchIdListResponse : NSObject
{
    _Bool _isLast;
    NSArray *_productIds;
    long long _keepTime;
    long long _total;
}

@property(nonatomic) _Bool isLast; // @synthesize isLast=_isLast;
@property(nonatomic) long long total; // @synthesize total=_total;
@property(nonatomic) long long keepTime; // @synthesize keepTime=_keepTime;
@property(retain, nonatomic) NSArray *productIds; // @synthesize productIds=_productIds;
- (void).cxx_destruct;

@end

