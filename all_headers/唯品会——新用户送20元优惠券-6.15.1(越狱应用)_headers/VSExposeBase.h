//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface VSExposeBase : NSObject
{
    NSString *_brandId;
    long long _goodsRow;
    long long _times;
    double _browseTime;
    long long _count;
    double _beginTime;
    double _endTime;
}

@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) double browseTime; // @synthesize browseTime=_browseTime;
@property(nonatomic) long long times; // @synthesize times=_times;
@property(nonatomic) long long goodsRow; // @synthesize goodsRow=_goodsRow;
@property(copy, nonatomic) NSString *brandId; // @synthesize brandId=_brandId;
- (void).cxx_destruct;
- (id)getExposeContent;

@end

