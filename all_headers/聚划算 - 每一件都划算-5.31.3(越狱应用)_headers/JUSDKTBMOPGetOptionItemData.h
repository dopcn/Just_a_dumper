//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JUSDKDOBase.h"

@class NSArray, NSDictionary, NSString;

@interface JUSDKTBMOPGetOptionItemData : JUSDKDOBase
{
    int _currentPage;
    int _totalPage;
    NSArray *_model;
    NSString *_totalItem;
    NSString *_pageSize;
    NSDictionary *_trackParams;
}

+ (Class)classForName:(id)arg1;
@property(retain, nonatomic) NSDictionary *trackParams; // @synthesize trackParams=_trackParams;
@property(nonatomic) int totalPage; // @synthesize totalPage=_totalPage;
@property(nonatomic) int currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) NSString *pageSize; // @synthesize pageSize=_pageSize;
@property(retain, nonatomic) NSString *totalItem; // @synthesize totalItem=_totalItem;
@property(retain, nonatomic) NSArray *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)dealloc;

@end

