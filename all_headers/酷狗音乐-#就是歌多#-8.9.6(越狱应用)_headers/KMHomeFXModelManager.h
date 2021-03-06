//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KMHomeFXModel, NSArray, NSLock, NSMutableArray;

@interface KMHomeFXModelManager : NSObject
{
    NSLock *_lock;
    int _currentIndex;
    double _fxTimeInterval;
    KMHomeFXModel *_lastShowModel;
    long long _total;
    NSMutableArray *_fxInfos;
    NSArray *_fxUserIdArr;
    long long _followCount;
}

+ (_Bool)needShowFXView;
@property(nonatomic) long long followCount; // @synthesize followCount=_followCount;
@property(retain, nonatomic) NSArray *fxUserIdArr; // @synthesize fxUserIdArr=_fxUserIdArr;
@property(retain, nonatomic) NSMutableArray *fxInfos; // @synthesize fxInfos=_fxInfos;
@property(nonatomic) long long total; // @synthesize total=_total;
@property(retain, nonatomic) KMHomeFXModel *lastShowModel; // @synthesize lastShowModel=_lastShowModel;
@property(nonatomic) int currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) double fxTimeInterval; // @synthesize fxTimeInterval=_fxTimeInterval;
- (void).cxx_destruct;
- (void)removeAllFxModel;
- (void)removeFxModelAtIndex:(long long)arg1;
- (void)addFxModel:(id)arg1;
- (id)init;

@end

