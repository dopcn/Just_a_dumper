//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, UCUserEntity;
@protocol OS_dispatch_queue;

@interface UCOtherDataManage : NSObject
{
    NSObject<OS_dispatch_queue> *dispatchQueue;
    NSMutableArray *mDataEntityArray;
    UCUserEntity *_otherUserentity;
    NSString *_mStrPool;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSString *mStrPool; // @synthesize mStrPool=_mStrPool;
@property(retain, nonatomic) UCUserEntity *otherUserentity; // @synthesize otherUserentity=_otherUserentity;
@property(retain) NSMutableArray *mDataEntityArray; // @synthesize mDataEntityArray;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue;
- (void).cxx_destruct;
- (void)removeAllData;
- (void)parseData:(id)arg1 parentEntity:(id)arg2 data:(id)arg3 inMOC:(id)arg4 isCalc:(_Bool)arg5;
- (void)SaveEntity:(id)arg1 inMOC:(id)arg2 withCompleteBlock:(CDUnknownBlockType)arg3;
- (void)FindEntityWithPageIndex:(float)arg1 WithCompleteBlock:(CDUnknownBlockType)arg2;
- (void)updateDataEntityArray:(long long)arg1 expand:(id)arg2;
- (id)getDataEntityArray;
- (id)init;

@end

