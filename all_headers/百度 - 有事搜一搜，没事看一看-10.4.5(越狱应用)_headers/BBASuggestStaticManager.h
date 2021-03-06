//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface BBASuggestStaticManager : NSObject
{
    _Bool _hasInitBaiduID;
    NSString *_previousQuery;
    long long _perviousQueryTime;
    NSString *_baiduID;
}

+ (id)sharedInstance;
@property _Bool hasInitBaiduID; // @synthesize hasInitBaiduID=_hasInitBaiduID;
@property(copy) NSString *baiduID; // @synthesize baiduID=_baiduID;
@property(nonatomic) long long perviousQueryTime; // @synthesize perviousQueryTime=_perviousQueryTime;
@property(copy, nonatomic) NSString *previousQuery; // @synthesize previousQuery=_previousQuery;
- (void).cxx_destruct;
- (id)readBaiduIDFromCookie;
- (id)getSuggestStaticParam;
- (void)updateBaiduIDWithID:(id)arg1;
- (void)updatePreviousQueryInfoWithQuery:(id)arg1;
- (void)dealloc;
- (id)init;

@end

