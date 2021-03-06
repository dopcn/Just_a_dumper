//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BDPanImageTagArguModel, NSArray;

@interface BDPanShareFaceListManage : NSObject
{
    _Bool _isCancel;
    _Bool _success;
    NSArray *_needList;
    CDUnknownBlockType _cancelBlock;
    BDPanImageTagArguModel *_arguModel;
    CDUnknownBlockType _completionBlock;
}

+ (_Bool)deleteShareFaceWithSharePath:(id)arg1;
+ (id)shareRootPathWithServerFullPath:(id)arg1;
+ (void)initialize;
+ (void)destroy;
+ (id)new;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) BDPanImageTagArguModel *arguModel; // @synthesize arguModel=_arguModel;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(nonatomic) _Bool isCancel; // @synthesize isCancel=_isCancel;
@property(retain, nonatomic) NSArray *needList; // @synthesize needList=_needList;
- (void).cxx_destruct;
- (void)insertDataBaseWithList:(id)arg1;
- (id)relationShipWithArray:(id)arg1;
- (void)loopFetchShareFaceListWithIndex:(long long)arg1;
- (void)loadFinsh;
- (void)beginLoadShareFaceInfo;
- (void)fetchShareFaceListWithNeedList:(id)arg1 arguModel:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)mutableCopy;
- (id)copy;

@end

