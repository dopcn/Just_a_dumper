//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface QBWhiteList : NSObject
{
    NSMutableArray *_whiteList;
    NSMutableArray *_predicateList;
    NSMutableDictionary *_whiteListDic;
    NSString *_fileName;
}

- (void).cxx_destruct;
- (_Bool)isInWhiteListWithHost:(id)arg1;
- (_Bool)isInWhiteListWithURL:(id)arg1;
- (void)setWhiteList:(id)arg1 cached:(_Bool)arg2;
- (void)setWhiteList:(id)arg1;
- (void)addHost:(id)arg1;
- (id)init;
- (id)initWithFileName:(id)arg1;
- (void)doInit;

@end

