//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FMDatabaseQueue, NSMutableArray, NSString;

@interface TMAVAnnouncementManager : NSObject
{
    FMDatabaseQueue *_dbQueue;
    _Bool _isStarting;
    _Bool _isContinue;
    NSMutableArray *_notificationArray;
    NSString *_cid;
    struct CGPoint _position;
}

@property(retain, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(nonatomic) _Bool isContinue; // @synthesize isContinue=_isContinue;
@property(nonatomic) _Bool isStarting; // @synthesize isStarting=_isStarting;
@property(retain, nonatomic) NSMutableArray *notificationArray; // @synthesize notificationArray=_notificationArray;
@property(nonatomic) struct CGPoint position; // @synthesize position=_position;
- (void).cxx_destruct;
- (_Bool)containsCache:(id)arg1;
- (void)startAnimateInView:(id)arg1;
- (void)showWithModels:(id)arg1 inView:(id)arg2 withCid:(id)arg3;
- (void)showWithModel:(id)arg1 inView:(id)arg2 withCid:(id)arg3;
- (id)init;

@end

