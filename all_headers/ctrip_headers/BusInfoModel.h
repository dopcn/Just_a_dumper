//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface BusInfoModel : CTBusinessBean
{
    NSString *departTime;
    NSString *arriveTime;
    NSString *departName;
    NSString *arriveName;
    _Bool isStart;
    _Bool isEnd;
    NSString *priceDisplay;
    NSString *urlSchema;
    NSString *buyCap;
}

@property(copy, nonatomic) NSString *buyCap; // @synthesize buyCap;
@property(copy, nonatomic) NSString *urlSchema; // @synthesize urlSchema;
@property(copy, nonatomic) NSString *priceDisplay; // @synthesize priceDisplay;
@property(nonatomic) _Bool isEnd; // @synthesize isEnd;
@property(nonatomic) _Bool isStart; // @synthesize isStart;
@property(copy, nonatomic) NSString *arriveName; // @synthesize arriveName;
@property(copy, nonatomic) NSString *departName; // @synthesize departName;
@property(copy, nonatomic) NSString *arriveTime; // @synthesize arriveTime;
@property(copy, nonatomic) NSString *departTime; // @synthesize departTime;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

