//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface MAMUITraceGather : NSObject
{
    _Bool _isLaunchTimeSended;
    int _batchNum;
    double _applicationLaunchTime;
    NSMutableDictionary *_pageMessageContent;
    NSMutableSet *_loadedVCs;
    NSMutableArray *_displayCompleteVCs;
    NSMutableDictionary *_currentVCMap;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableDictionary *currentVCMap; // @synthesize currentVCMap=_currentVCMap;
@property(retain, nonatomic) NSMutableArray *displayCompleteVCs; // @synthesize displayCompleteVCs=_displayCompleteVCs;
@property(retain, nonatomic) NSMutableSet *loadedVCs; // @synthesize loadedVCs=_loadedVCs;
@property(retain, nonatomic) NSMutableDictionary *pageMessageContent; // @synthesize pageMessageContent=_pageMessageContent;
@property(nonatomic) _Bool isLaunchTimeSended; // @synthesize isLaunchTimeSended=_isLaunchTimeSended;
@property(nonatomic) int batchNum; // @synthesize batchNum=_batchNum;
@property(nonatomic) double applicationLaunchTime; // @synthesize applicationLaunchTime=_applicationLaunchTime;
- (void).cxx_destruct;
- (void)clearStatus;
- (void)lifeLineSetAppearTime:(double)arg1 from:(id)arg2;
- (void)removeUUIDFromViewController:(id)arg1;
- (id)uuidFromViewController:(id)arg1 sel:(SEL)arg2;
- (void)saveCompleteContent;
- (void)endVC:(id)arg1 invoke:(SEL)arg2;
- (void)beginVC:(id)arg1 invoke:(SEL)arg2;
- (id)init;

@end

